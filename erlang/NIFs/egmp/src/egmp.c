#include <gmp.h>
#include <string.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

#include "erl_nif.h"

static ERL_NIF_TERM add(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[]) {

    char *res = NULL;
    ErlNifBinary a;
    ErlNifBinary b;
    ErlNifBinary res_bin;

    mpz_t x,y,result;

    /* Check argument count */
    if (argc != 2) {
        return enif_make_badarg(env);
    }

    memset(&a, 0, sizeof(ErlNifBinary));
    memset(&b, 0, sizeof(ErlNifBinary));
    memset(&res_bin, 0, sizeof(ErlNifBinary));

    if (!enif_inspect_iolist_as_binary(env, argv[0], &a))
        return enif_make_badarg(env);

    if (!enif_inspect_iolist_as_binary(env, argv[1], &b))
        return enif_make_badarg(env);

    mpz_init_set_str(x, a.data, 10);
    mpz_init_set_str(y, b.data, 10);
    mpz_init(result);

    mpz_add(result, x, y);

    /* Get the result length and alloc bytes of that length */
    int len = gmp_printf("%Zd\n", result);
    res = (char *) malloc(len+1);

    gmp_snprintf(res, len, "%Zd", result);

    if (!enif_alloc_binary(strlen(res)+1, &res_bin))
        return enif_make_atom(env, "alloc_failed");

    strcpy((unsigned char*)res_bin.data, res);

    mpz_clear(x);
    mpz_clear(y);
    mpz_clear(result);

    return enif_make_binary(env, &res_bin);
}

static ERL_NIF_TERM mul(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[]) {
    char *res = NULL;
    ErlNifBinary a;
    ErlNifBinary b;
    ErlNifBinary res_bin;

    mpz_t x,y,result;

    /* Check argument count */
    if (argc != 2) {
        return enif_make_badarg(env);
    }

    memset(&a, 0, sizeof(ErlNifBinary));
    memset(&b, 0, sizeof(ErlNifBinary));
    memset(&res_bin, 0, sizeof(ErlNifBinary));

    if (!enif_inspect_iolist_as_binary(env, argv[0], &a))
        return enif_make_badarg(env);

    if (!enif_inspect_iolist_as_binary(env, argv[1], &b))
        return enif_make_badarg(env);

    mpz_init_set_str(x, a.data, 10);
    mpz_init_set_str(y, b.data, 10);
    mpz_init(result);

    mpz_mul(result, x, y);

    /* Get the result length and alloc bytes of that length */
    int len = gmp_printf("%Zd\n", result);
    res = (char *) malloc(len+1);

    gmp_snprintf(res, len, "%Zd", result);

    if (!enif_alloc_binary(strlen(res)+1, &res_bin))
        return enif_make_atom(env, "alloc_failed");

    strcpy((unsigned char*)res_bin.data, res);

    mpz_clear(x);
    mpz_clear(y);
    mpz_clear(result);

    return enif_make_binary(env, &res_bin);
}  

static ERL_NIF_TERM and(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[]) {
    char *res = NULL;
    ErlNifBinary a;
    ErlNifBinary b;
    ErlNifBinary res_bin;

    mpz_t x,y,result;

    /* Check argument count */
    if (argc != 2) {
        return enif_make_badarg(env);
    }

    memset(&a, 0, sizeof(ErlNifBinary));
    memset(&b, 0, sizeof(ErlNifBinary));
    memset(&res_bin, 0, sizeof(ErlNifBinary));

    if (!enif_inspect_iolist_as_binary(env, argv[0], &a))
        return enif_make_badarg(env);

    if (!enif_inspect_iolist_as_binary(env, argv[1], &b))
        return enif_make_badarg(env);

    mpz_init_set_str(x, a.data, 10);
    mpz_init_set_str(y, b.data, 10);
    mpz_init(result);

    mpz_and(result, x, y);

    /* Get the result length and alloc bytes of that length */
    int len = gmp_printf("%Zd\n", result);
    res = (char *) malloc(len+1);

    gmp_snprintf(res, len, "%Zd", result);

    if (!enif_alloc_binary(strlen(res)+1, &res_bin))
        return enif_make_atom(env, "alloc_failed");

    strcpy((unsigned char*)res_bin.data, res);

    mpz_clear(x);
    mpz_clear(y);
    mpz_clear(result);

    return enif_make_binary(env, &res_bin);
}  

static ERL_NIF_TERM or(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[]) {
    char *res = NULL;
    ErlNifBinary a;
    ErlNifBinary b;
    ErlNifBinary res_bin;

    mpz_t x,y,result;

    /* Check argument count */
    if (argc != 2) {
        return enif_make_badarg(env);
    }

    memset(&a, 0, sizeof(ErlNifBinary));
    memset(&b, 0, sizeof(ErlNifBinary));
    memset(&res_bin, 0, sizeof(ErlNifBinary));

    if (!enif_inspect_iolist_as_binary(env, argv[0], &a))
        return enif_make_badarg(env);

    if (!enif_inspect_iolist_as_binary(env, argv[1], &b))
        return enif_make_badarg(env);

    mpz_init_set_str(x, a.data, 10);
    mpz_init_set_str(y, b.data, 10);
    mpz_init(result);

    mpz_ior(result, x, y);

    /* Get the result length and alloc bytes of that length */
    int len = gmp_printf("%Zd\n", result);
    res = (char *) malloc(len+1);

    gmp_snprintf(res, len, "%Zd", result);

    if (!enif_alloc_binary(strlen(res)+1, &res_bin))
        return enif_make_atom(env, "alloc_failed");

    strcpy((unsigned char*)res_bin.data, res);

    mpz_clear(x);
    mpz_clear(y);
    mpz_clear(result);

    return enif_make_binary(env, &res_bin);
}  


static ERL_NIF_TERM xor(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[]) {
    char *res = NULL;
    ErlNifBinary a;
    ErlNifBinary b;
    ErlNifBinary res_bin;

    mpz_t x,y,result;

    /* Check argument count */
    if (argc != 2) {
        return enif_make_badarg(env);
    }

    memset(&a, 0, sizeof(ErlNifBinary));
    memset(&b, 0, sizeof(ErlNifBinary));
    memset(&res_bin, 0, sizeof(ErlNifBinary));

    if (!enif_inspect_iolist_as_binary(env, argv[0], &a))
        return enif_make_badarg(env);

    if (!enif_inspect_iolist_as_binary(env, argv[1], &b))
        return enif_make_badarg(env);

    mpz_init_set_str(x, a.data, 10);
    mpz_init_set_str(y, b.data, 10);
    mpz_init(result);

    mpz_xor(result, x, y);

    /* Get the result length and alloc bytes of that length */
    int len = gmp_printf("%Zd\n", result);
    res = (char *) malloc(len+1);

    gmp_snprintf(res, len, "%Zd", result);

    if (!enif_alloc_binary(strlen(res)+1, &res_bin))
        return enif_make_atom(env, "alloc_failed");

    strcpy((unsigned char*)res_bin.data, res);

    mpz_clear(x);
    mpz_clear(y);
    mpz_clear(result);

    return enif_make_binary(env, &res_bin);
}  

static ERL_NIF_TERM setbit(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[]) {
    char *res = NULL;

    ErlNifBinary in_bin;
    ErlNifBinary res_bin;

    mp_bitcnt_t bit_index;

    mpz_t in_mpz;

    /* Check argument count */
    if (argc != 2) {
        return enif_make_badarg(env);
    }

    memset(&in_bin, 0, sizeof(ErlNifBinary));

    if (!enif_inspect_iolist_as_binary(env, argv[0], &in_bin))
        return enif_make_badarg(env);

    if (!enif_get_int64(env, argv[1], &bit_index))
        return enif_make_badarg(env);

    mpz_init_set_str(in_mpz, in_bin.data, 10);

    mpz_setbit(in_mpz, bit_index);

    /* Get the result length and alloc bytes of that length */
    int len = gmp_printf("%Zd\n", in_mpz);
    res = (char *) malloc(len+1);

    gmp_snprintf(res, len, "%Zd", in_mpz);

    if (!enif_alloc_binary(strlen(res)+1, &res_bin))
        return enif_make_atom(env, "alloc_failed");

    strcpy((unsigned char*)res_bin.data, res);

    mpz_clear(in_mpz);

    return enif_make_binary(env, &res_bin);
}  

static ERL_NIF_TERM clearbit(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[]) {
    char *res = NULL;

    ErlNifBinary in_bin;
    ErlNifBinary res_bin;

    mp_bitcnt_t bit_index;

    mpz_t in_mpz;

    /* Check argument count */
    if (argc != 2) {
        return enif_make_badarg(env);
    }

    memset(&in_bin, 0, sizeof(ErlNifBinary));

    if (!enif_inspect_iolist_as_binary(env, argv[0], &in_bin))
        return enif_make_badarg(env);

    if (!enif_get_int64(env, argv[1], &bit_index))
        return enif_make_badarg(env);

    mpz_init_set_str(in_mpz, in_bin.data, 10);

    mpz_clrbit(in_mpz, bit_index);

    /* Get the result length and alloc bytes of that length */
    int len = gmp_printf("%Zd\n", in_mpz);
    res = (char *) malloc(len+1);

    gmp_snprintf(res, len, "%Zd", in_mpz);

    if (!enif_alloc_binary(strlen(res)+1, &res_bin))
        return enif_make_atom(env, "alloc_failed");

    strcpy((unsigned char*)res_bin.data, res);

    mpz_clear(in_mpz);

    return enif_make_binary(env, &res_bin);
}  

static ERL_NIF_TERM bitcount(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[]) {
    ErlNifBinary in_bin;

    mp_bitcnt_t bit_count;

    mpz_t in_mpz;

    /* Check argument count */
    if (argc != 1) {
        return enif_make_badarg(env);
    }

    memset(&in_bin, 0, sizeof(ErlNifBinary));

    if (!enif_inspect_iolist_as_binary(env, argv[0], &in_bin))
        return enif_make_badarg(env);

    mpz_init_set_str(in_mpz, in_bin.data, 10);

    bit_count = mpz_popcount(in_mpz);

    mpz_clear(in_mpz);

    return enif_make_long(env, bit_count);
}  

static ERL_NIF_TERM countbitset(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[]) {
    ErlNifBinary in_bin;
    ERL_NIF_TERM list;

    mp_bitcnt_t bit_count;

    mpz_t in_mpz;

    /* Check argument count */
    if (argc != 1) {
        return enif_make_badarg(env);
    }

    memset(&in_bin, 0, sizeof(ErlNifBinary));

    if (!enif_inspect_iolist_as_binary(env, argv[0], &in_bin))
        return enif_make_badarg(env);

    mpz_init_set_str(in_mpz, in_bin.data, 10);

    int index = 0;
    list = enif_make_list(env, 0);


    int i = 10;

    /*
    while (i) {
        printf("Before %d\n", index);

        index = mpz_scan1(in_mpz, index);

        printf("After %d\n", index);

        i--;

        if (index == -1 || index == ULONG_MAX) {
            break;
        }

        list = enif_make_list_cell(env, enif_make_list(env, index), list);

        index++;
    }
*/
    int n = 10;
    list = enif_make_list(env, 0); /* NIL */
    while (n > 0 && index != -1 && index != ULONG_MAX) {
        index = mpz_scan1(in_mpz, index);

        if (index == -1) {
            break;
        }
        list = enif_make_list_cell(env, enif_make_int(env,index), list);
        index++;
        n--;
    }

    mpz_clear(in_mpz);

    return list;
}  




static ErlNifFunc nif_funcs[] = {
    {"big_add",         2, add},
    {"big_mul",         2, mul},
    {"big_and",         2, and},
    {"big_xor",         2, xor},
    {"big_or",          2, or},
    {"big_setbit",      2, setbit},
    {"big_clearbit",    2, clearbit},
    {"big_bitcount",    1, bitcount},
    {"big_countbitset", 1, countbitset}

};

ERL_NIF_INIT(egmp, nif_funcs, NULL, NULL, NULL, NULL)
