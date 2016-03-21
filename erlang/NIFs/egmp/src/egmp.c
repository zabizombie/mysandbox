#include <gmp.h>
#include <string.h>
#include <stdio.h>
#include <string.h>

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

static ErlNifFunc nif_funcs[] = {
    {"add",  2, add},
    {"mul",  2, mul}
};

ERL_NIF_INIT(egmp, nif_funcs, NULL, NULL, NULL, NULL)
