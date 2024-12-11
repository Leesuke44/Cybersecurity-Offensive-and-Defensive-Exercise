, 0x78, 0x11, 0x8a,
    0x24, 0x21, 0x28, 0x3b,
};
static const struct drbg_kat_pr_false kat1822_t = {
    6, kat1822_entropyin, kat1822_nonce, kat1822_persstr,
    kat1822_entropyinreseed, kat1822_addinreseed, kat1822_addin0,
    kat1822_addin1, kat1822_retbits
};
static const struct drbg_kat kat1822 = {
    PR_FALSE, USE_DF, NID_aes_192_ctr, 24, 16, 0, 32, 64, &kat1822_t
};

static const unsigned char kat1823_entropyin[] = {
    0xee, 0x37, 0