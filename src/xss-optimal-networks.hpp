// All of these sources files are generated from the optimal networks described in
// https://bertdobbelaere.github.io/sorting_networks.html

template <typename vtype, typename mm_t, bool descend>
X86_SIMD_SORT_INLINE void COEX(mm_t &a, mm_t &b);

template <typename vtype, bool descend, typename reg_t = typename vtype::reg_t>
X86_SIMD_SORT_FINLINE void optimal_sort_4(reg_t *vecs)
{
    COEX<vtype, descend>(vecs[0], vecs[2]);
    COEX<vtype, descend>(vecs[1], vecs[3]);

    COEX<vtype, descend>(vecs[0], vecs[1]);
    COEX<vtype, descend>(vecs[2], vecs[3]);

    COEX<vtype, descend>(vecs[1], vecs[2]);
}

template <typename vtype, bool descend, typename reg_t = typename vtype::reg_t>
X86_SIMD_SORT_FINLINE void optimal_sort_8(reg_t *vecs)
{
    COEX<vtype, descend>(vecs[0], vecs[2]);
    COEX<vtype, descend>(vecs[1], vecs[3]);
    COEX<vtype, descend>(vecs[4], vecs[6]);
    COEX<vtype, descend>(vecs[5], vecs[7]);

    COEX<vtype, descend>(vecs[0], vecs[4]);
    COEX<vtype, descend>(vecs[1], vecs[5]);
    COEX<vtype, descend>(vecs[2], vecs[6]);
    COEX<vtype, descend>(vecs[3], vecs[7]);

    COEX<vtype, descend>(vecs[0], vecs[1]);
    COEX<vtype, descend>(vecs[2], vecs[3]);
    COEX<vtype, descend>(vecs[4], vecs[5]);
    COEX<vtype, descend>(vecs[6], vecs[7]);

    COEX<vtype, descend>(vecs[2], vecs[4]);
    COEX<vtype, descend>(vecs[3], vecs[5]);

    COEX<vtype, descend>(vecs[1], vecs[4]);
    COEX<vtype, descend>(vecs[3], vecs[6]);

    COEX<vtype, descend>(vecs[1], vecs[2]);
    COEX<vtype, descend>(vecs[3], vecs[4]);
    COEX<vtype, descend>(vecs[5], vecs[6]);
}

template <typename vtype, bool descend, typename reg_t = typename vtype::reg_t>
X86_SIMD_SORT_FINLINE void optimal_sort_16(reg_t *vecs)
{
    COEX<vtype, descend>(vecs[0], vecs[13]);
    COEX<vtype, descend>(vecs[1], vecs[12]);
    COEX<vtype, descend>(vecs[2], vecs[15]);
    COEX<vtype, descend>(vecs[3], vecs[14]);
    COEX<vtype, descend>(vecs[4], vecs[8]);
    COEX<vtype, descend>(vecs[5], vecs[6]);
    COEX<vtype, descend>(vecs[7], vecs[11]);
    COEX<vtype, descend>(vecs[9], vecs[10]);

    COEX<vtype, descend>(vecs[0], vecs[5]);
    COEX<vtype, descend>(vecs[1], vecs[7]);
    COEX<vtype, descend>(vecs[2], vecs[9]);
    COEX<vtype, descend>(vecs[3], vecs[4]);
    COEX<vtype, descend>(vecs[6], vecs[13]);
    COEX<vtype, descend>(vecs[8], vecs[14]);
    COEX<vtype, descend>(vecs[10], vecs[15]);
    COEX<vtype, descend>(vecs[11], vecs[12]);

    COEX<vtype, descend>(vecs[0], vecs[1]);
    COEX<vtype, descend>(vecs[2], vecs[3]);
    COEX<vtype, descend>(vecs[4], vecs[5]);
    COEX<vtype, descend>(vecs[6], vecs[8]);
    COEX<vtype, descend>(vecs[7], vecs[9]);
    COEX<vtype, descend>(vecs[10], vecs[11]);
    COEX<vtype, descend>(vecs[12], vecs[13]);
    COEX<vtype, descend>(vecs[14], vecs[15]);

    COEX<vtype, descend>(vecs[0], vecs[2]);
    COEX<vtype, descend>(vecs[1], vecs[3]);
    COEX<vtype, descend>(vecs[4], vecs[10]);
    COEX<vtype, descend>(vecs[5], vecs[11]);
    COEX<vtype, descend>(vecs[6], vecs[7]);
    COEX<vtype, descend>(vecs[8], vecs[9]);
    COEX<vtype, descend>(vecs[12], vecs[14]);
    COEX<vtype, descend>(vecs[13], vecs[15]);

    COEX<vtype, descend>(vecs[1], vecs[2]);
    COEX<vtype, descend>(vecs[3], vecs[12]);
    COEX<vtype, descend>(vecs[4], vecs[6]);
    COEX<vtype, descend>(vecs[5], vecs[7]);
    COEX<vtype, descend>(vecs[8], vecs[10]);
    COEX<vtype, descend>(vecs[9], vecs[11]);
    COEX<vtype, descend>(vecs[13], vecs[14]);

    COEX<vtype, descend>(vecs[1], vecs[4]);
    COEX<vtype, descend>(vecs[2], vecs[6]);
    COEX<vtype, descend>(vecs[5], vecs[8]);
    COEX<vtype, descend>(vecs[7], vecs[10]);
    COEX<vtype, descend>(vecs[9], vecs[13]);
    COEX<vtype, descend>(vecs[11], vecs[14]);

    COEX<vtype, descend>(vecs[2], vecs[4]);
    COEX<vtype, descend>(vecs[3], vecs[6]);
    COEX<vtype, descend>(vecs[9], vecs[12]);
    COEX<vtype, descend>(vecs[11], vecs[13]);

    COEX<vtype, descend>(vecs[3], vecs[5]);
    COEX<vtype, descend>(vecs[6], vecs[8]);
    COEX<vtype, descend>(vecs[7], vecs[9]);
    COEX<vtype, descend>(vecs[10], vecs[12]);

    COEX<vtype, descend>(vecs[3], vecs[4]);
    COEX<vtype, descend>(vecs[5], vecs[6]);
    COEX<vtype, descend>(vecs[7], vecs[8]);
    COEX<vtype, descend>(vecs[9], vecs[10]);
    COEX<vtype, descend>(vecs[11], vecs[12]);

    COEX<vtype, descend>(vecs[6], vecs[7]);
    COEX<vtype, descend>(vecs[8], vecs[9]);
}

template <typename vtype, bool descend, typename reg_t = typename vtype::reg_t>
X86_SIMD_SORT_FINLINE void optimal_sort_32(reg_t *vecs)
{
    COEX<vtype, descend>(vecs[0], vecs[1]);
    COEX<vtype, descend>(vecs[2], vecs[3]);
    COEX<vtype, descend>(vecs[4], vecs[5]);
    COEX<vtype, descend>(vecs[6], vecs[7]);
    COEX<vtype, descend>(vecs[8], vecs[9]);
    COEX<vtype, descend>(vecs[10], vecs[11]);
    COEX<vtype, descend>(vecs[12], vecs[13]);
    COEX<vtype, descend>(vecs[14], vecs[15]);
    COEX<vtype, descend>(vecs[16], vecs[17]);
    COEX<vtype, descend>(vecs[18], vecs[19]);
    COEX<vtype, descend>(vecs[20], vecs[21]);
    COEX<vtype, descend>(vecs[22], vecs[23]);
    COEX<vtype, descend>(vecs[24], vecs[25]);
    COEX<vtype, descend>(vecs[26], vecs[27]);
    COEX<vtype, descend>(vecs[28], vecs[29]);
    COEX<vtype, descend>(vecs[30], vecs[31]);

    COEX<vtype, descend>(vecs[0], vecs[2]);
    COEX<vtype, descend>(vecs[1], vecs[3]);
    COEX<vtype, descend>(vecs[4], vecs[6]);
    COEX<vtype, descend>(vecs[5], vecs[7]);
    COEX<vtype, descend>(vecs[8], vecs[10]);
    COEX<vtype, descend>(vecs[9], vecs[11]);
    COEX<vtype, descend>(vecs[12], vecs[14]);
    COEX<vtype, descend>(vecs[13], vecs[15]);
    COEX<vtype, descend>(vecs[16], vecs[18]);
    COEX<vtype, descend>(vecs[17], vecs[19]);
    COEX<vtype, descend>(vecs[20], vecs[22]);
    COEX<vtype, descend>(vecs[21], vecs[23]);
    COEX<vtype, descend>(vecs[24], vecs[26]);
    COEX<vtype, descend>(vecs[25], vecs[27]);
    COEX<vtype, descend>(vecs[28], vecs[30]);
    COEX<vtype, descend>(vecs[29], vecs[31]);

    COEX<vtype, descend>(vecs[0], vecs[4]);
    COEX<vtype, descend>(vecs[1], vecs[5]);
    COEX<vtype, descend>(vecs[2], vecs[6]);
    COEX<vtype, descend>(vecs[3], vecs[7]);
    COEX<vtype, descend>(vecs[8], vecs[12]);
    COEX<vtype, descend>(vecs[9], vecs[13]);
    COEX<vtype, descend>(vecs[10], vecs[14]);
    COEX<vtype, descend>(vecs[11], vecs[15]);
    COEX<vtype, descend>(vecs[16], vecs[20]);
    COEX<vtype, descend>(vecs[17], vecs[21]);
    COEX<vtype, descend>(vecs[18], vecs[22]);
    COEX<vtype, descend>(vecs[19], vecs[23]);
    COEX<vtype, descend>(vecs[24], vecs[28]);
    COEX<vtype, descend>(vecs[25], vecs[29]);
    COEX<vtype, descend>(vecs[26], vecs[30]);
    COEX<vtype, descend>(vecs[27], vecs[31]);

    COEX<vtype, descend>(vecs[0], vecs[8]);
    COEX<vtype, descend>(vecs[1], vecs[9]);
    COEX<vtype, descend>(vecs[2], vecs[10]);
    COEX<vtype, descend>(vecs[3], vecs[11]);
    COEX<vtype, descend>(vecs[4], vecs[12]);
    COEX<vtype, descend>(vecs[5], vecs[13]);
    COEX<vtype, descend>(vecs[6], vecs[14]);
    COEX<vtype, descend>(vecs[7], vecs[15]);
    COEX<vtype, descend>(vecs[16], vecs[24]);
    COEX<vtype, descend>(vecs[17], vecs[25]);
    COEX<vtype, descend>(vecs[18], vecs[26]);
    COEX<vtype, descend>(vecs[19], vecs[27]);
    COEX<vtype, descend>(vecs[20], vecs[28]);
    COEX<vtype, descend>(vecs[21], vecs[29]);
    COEX<vtype, descend>(vecs[22], vecs[30]);
    COEX<vtype, descend>(vecs[23], vecs[31]);

    COEX<vtype, descend>(vecs[0], vecs[16]);
    COEX<vtype, descend>(vecs[1], vecs[8]);
    COEX<vtype, descend>(vecs[2], vecs[4]);
    COEX<vtype, descend>(vecs[3], vecs[12]);
    COEX<vtype, descend>(vecs[5], vecs[10]);
    COEX<vtype, descend>(vecs[6], vecs[9]);
    COEX<vtype, descend>(vecs[7], vecs[14]);
    COEX<vtype, descend>(vecs[11], vecs[13]);
    COEX<vtype, descend>(vecs[15], vecs[31]);
    COEX<vtype, descend>(vecs[17], vecs[24]);
    COEX<vtype, descend>(vecs[18], vecs[20]);
    COEX<vtype, descend>(vecs[19], vecs[28]);
    COEX<vtype, descend>(vecs[21], vecs[26]);
    COEX<vtype, descend>(vecs[22], vecs[25]);
    COEX<vtype, descend>(vecs[23], vecs[30]);
    COEX<vtype, descend>(vecs[27], vecs[29]);

    COEX<vtype, descend>(vecs[1], vecs[2]);
    COEX<vtype, descend>(vecs[3], vecs[5]);
    COEX<vtype, descend>(vecs[4], vecs[8]);
    COEX<vtype, descend>(vecs[6], vecs[22]);
    COEX<vtype, descend>(vecs[7], vecs[11]);
    COEX<vtype, descend>(vecs[9], vecs[25]);
    COEX<vtype, descend>(vecs[10], vecs[12]);
    COEX<vtype, descend>(vecs[13], vecs[14]);
    COEX<vtype, descend>(vecs[17], vecs[18]);
    COEX<vtype, descend>(vecs[19], vecs[21]);
    COEX<vtype, descend>(vecs[20], vecs[24]);
    COEX<vtype, descend>(vecs[23], vecs[27]);
    COEX<vtype, descend>(vecs[26], vecs[28]);
    COEX<vtype, descend>(vecs[29], vecs[30]);

    COEX<vtype, descend>(vecs[1], vecs[17]);
    COEX<vtype, descend>(vecs[2], vecs[18]);
    COEX<vtype, descend>(vecs[3], vecs[19]);
    COEX<vtype, descend>(vecs[4], vecs[20]);
    COEX<vtype, descend>(vecs[5], vecs[10]);
    COEX<vtype, descend>(vecs[7], vecs[23]);
    COEX<vtype, descend>(vecs[8], vecs[24]);
    COEX<vtype, descend>(vecs[11], vecs[27]);
    COEX<vtype, descend>(vecs[12], vecs[28]);
    COEX<vtype, descend>(vecs[13], vecs[29]);
    COEX<vtype, descend>(vecs[14], vecs[30]);
    COEX<vtype, descend>(vecs[21], vecs[26]);

    COEX<vtype, descend>(vecs[3], vecs[17]);
    COEX<vtype, descend>(vecs[4], vecs[16]);
    COEX<vtype, descend>(vecs[5], vecs[21]);
    COEX<vtype, descend>(vecs[6], vecs[18]);
    COEX<vtype, descend>(vecs[7], vecs[9]);
    COEX<vtype, descend>(vecs[8], vecs[20]);
    COEX<vtype, descend>(vecs[10], vecs[26]);
    COEX<vtype, descend>(vecs[11], vecs[23]);
    COEX<vtype, descend>(vecs[13], vecs[25]);
    COEX<vtype, descend>(vecs[14], vecs[28]);
    COEX<vtype, descend>(vecs[15], vecs[27]);
    COEX<vtype, descend>(vecs[22], vecs[24]);

    COEX<vtype, descend>(vecs[1], vecs[4]);
    COEX<vtype, descend>(vecs[3], vecs[8]);
    COEX<vtype, descend>(vecs[5], vecs[16]);
    COEX<vtype, descend>(vecs[7], vecs[17]);
    COEX<vtype, descend>(vecs[9], vecs[21]);
    COEX<vtype, descend>(vecs[10], vecs[22]);
    COEX<vtype, descend>(vecs[11], vecs[19]);
    COEX<vtype, descend>(vecs[12], vecs[20]);
    COEX<vtype, descend>(vecs[14], vecs[24]);
    COEX<vtype, descend>(vecs[15], vecs[26]);
    COEX<vtype, descend>(vecs[23], vecs[28]);
    COEX<vtype, descend>(vecs[27], vecs[30]);

    COEX<vtype, descend>(vecs[2], vecs[5]);
    COEX<vtype, descend>(vecs[7], vecs[8]);
    COEX<vtype, descend>(vecs[9], vecs[18]);
    COEX<vtype, descend>(vecs[11], vecs[17]);
    COEX<vtype, descend>(vecs[12], vecs[16]);
    COEX<vtype, descend>(vecs[13], vecs[22]);
    COEX<vtype, descend>(vecs[14], vecs[20]);
    COEX<vtype, descend>(vecs[15], vecs[19]);
    COEX<vtype, descend>(vecs[23], vecs[24]);
    COEX<vtype, descend>(vecs[26], vecs[29]);

    COEX<vtype, descend>(vecs[2], vecs[4]);
    COEX<vtype, descend>(vecs[6], vecs[12]);
    COEX<vtype, descend>(vecs[9], vecs[16]);
    COEX<vtype, descend>(vecs[10], vecs[11]);
    COEX<vtype, descend>(vecs[13], vecs[17]);
    COEX<vtype, descend>(vecs[14], vecs[18]);
    COEX<vtype, descend>(vecs[15], vecs[22]);
    COEX<vtype, descend>(vecs[19], vecs[25]);
    COEX<vtype, descend>(vecs[20], vecs[21]);
    COEX<vtype, descend>(vecs[27], vecs[29]);

    COEX<vtype, descend>(vecs[5], vecs[6]);
    COEX<vtype, descend>(vecs[8], vecs[12]);
    COEX<vtype, descend>(vecs[9], vecs[10]);
    COEX<vtype, descend>(vecs[11], vecs[13]);
    COEX<vtype, descend>(vecs[14], vecs[16]);
    COEX<vtype, descend>(vecs[15], vecs[17]);
    COEX<vtype, descend>(vecs[18], vecs[20]);
    COEX<vtype, descend>(vecs[19], vecs[23]);
    COEX<vtype, descend>(vecs[21], vecs[22]);
    COEX<vtype, descend>(vecs[25], vecs[26]);

    COEX<vtype, descend>(vecs[3], vecs[5]);
    COEX<vtype, descend>(vecs[6], vecs[7]);
    COEX<vtype, descend>(vecs[8], vecs[9]);
    COEX<vtype, descend>(vecs[10], vecs[12]);
    COEX<vtype, descend>(vecs[11], vecs[14]);
    COEX<vtype, descend>(vecs[13], vecs[16]);
    COEX<vtype, descend>(vecs[15], vecs[18]);
    COEX<vtype, descend>(vecs[17], vecs[20]);
    COEX<vtype, descend>(vecs[19], vecs[21]);
    COEX<vtype, descend>(vecs[22], vecs[23]);
    COEX<vtype, descend>(vecs[24], vecs[25]);
    COEX<vtype, descend>(vecs[26], vecs[28]);

    COEX<vtype, descend>(vecs[3], vecs[4]);
    COEX<vtype, descend>(vecs[5], vecs[6]);
    COEX<vtype, descend>(vecs[7], vecs[8]);
    COEX<vtype, descend>(vecs[9], vecs[10]);
    COEX<vtype, descend>(vecs[11], vecs[12]);
    COEX<vtype, descend>(vecs[13], vecs[14]);
    COEX<vtype, descend>(vecs[15], vecs[16]);
    COEX<vtype, descend>(vecs[17], vecs[18]);
    COEX<vtype, descend>(vecs[19], vecs[20]);
    COEX<vtype, descend>(vecs[21], vecs[22]);
    COEX<vtype, descend>(vecs[23], vecs[24]);
    COEX<vtype, descend>(vecs[25], vecs[26]);
    COEX<vtype, descend>(vecs[27], vecs[28]);
}
