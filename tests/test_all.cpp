/*******************************************
 * * Copyright (C) 2022 Intel Corporation
 * * SPDX-License-Identifier: BSD-3-Clause
 * *******************************************/

#include "avx512-16bit-qsort.hpp"
#include "avx512-32bit-qsort.hpp"
#include "avx512-64bit-qsort.hpp"
#include "cpuinfo.h"
#include "rand_array.h"
#include <gtest/gtest.h>
#include <vector>
#include <iostream>

#ifdef __FLT16_MAX__
TEST(avx512_sort_fp16, test_arrsizes)
{
    if (cpu_has_avx512bw() && (cpu_has_avx512_vbmi2())) {
        std::vector<int64_t> arrsizes;
        for (int64_t ii = 0; ii < 1024; ++ii) {
            arrsizes.push_back(ii);
        }
        std::vector<_Float16> arr;
        std::vector<_Float16> sortedarr;
        for (size_t ii = 0; ii < arrsizes.size(); ++ii) {
            /* Random array */
            arr = get_uniform_rand_fp16array(arrsizes[ii]);
            sortedarr = arr;
            /* Sort with std::sort for comparison */
            std::sort(sortedarr.begin(), sortedarr.end());
            avx512_qsort_fp16((uint16_t*)arr.data(), arr.size());
            ASSERT_EQ(sortedarr, arr);
            arr.clear();
            sortedarr.clear();
        }
    }
    else {
        GTEST_SKIP() << "Skipping this test, it requires avx512bw and avx512_vbmi2";
    }
}
#endif

template <typename T>
class avx512_sort : public ::testing::Test {
};
TYPED_TEST_SUITE_P(avx512_sort);

TYPED_TEST_P(avx512_sort, test_arrsizes)
{
    if (cpu_has_avx512bw()) {
        if ((sizeof(TypeParam) == 2) && (!cpu_has_avx512_vbmi2())) {
            GTEST_SKIP() << "Skipping this test, it requires avx512_vbmi2";
        }
        std::vector<int64_t> arrsizes;
        for (int64_t ii = 0; ii < 1024; ++ii) {
            arrsizes.push_back(ii);
        }
        std::vector<TypeParam> arr;
        std::vector<TypeParam> sortedarr;
        for (size_t ii = 0; ii < arrsizes.size(); ++ii) {
            /* Random array */
            arr = get_uniform_rand_array<TypeParam>(arrsizes[ii]);
            sortedarr = arr;
            /* Sort with std::sort for comparison */
            std::sort(sortedarr.begin(), sortedarr.end());
            avx512_qsort<TypeParam>(arr.data(), arr.size());
            ASSERT_EQ(sortedarr, arr);
            arr.clear();
            sortedarr.clear();
        }
    }
    else {
        GTEST_SKIP() << "Skipping this test, it requires avx512bw";
    }
}

REGISTER_TYPED_TEST_SUITE_P(avx512_sort, test_arrsizes);

using Types = testing::Types<uint16_t,
                             int16_t,
                             float,
                             double,
                             uint32_t,
                             int32_t,
                             uint64_t,
                             int64_t>;
INSTANTIATE_TYPED_TEST_SUITE_P(TestPrefix, avx512_sort, Types);
