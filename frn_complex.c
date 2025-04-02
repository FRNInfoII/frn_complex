#include "frn_complex.h"
#include <stdio.h>

struct Complex add(struct Complex z1,
                   struct Complex z2)
{
    struct Complex res;
    res.re = z1.re + z2.re;
    res.im = z1.im + z2.im;
    return res;
}

struct Complex sub(struct Complex z1,
                   struct Complex z2)
{
    struct Complex res;
    res.re = z1.re - z2.re;
    res.im = z1.im - z2.im;
    return res;
}

struct Complex mul(struct Complex z1,
                   struct Complex z2)
{
    struct Complex res;
    res.re = z1.re * z2.re - z1.im * z2.im;
    res.im = z1.re * z2.im + z1.im * z2.re;
    return res;
}

struct Complex div(struct Complex z1,
                   struct Complex z2)
{
    struct Complex res = mul( z1 , conj(z2) );
    res = real_div( res, mul( z2 , conj(z2) ).re );
    return res;
}

struct Complex real_mul(struct Complex z1,float real)
{
    struct Complex res = z1;
    res.im *= real;
    res.re *= real;
    return res;
}
        
struct Complex real_div(struct Complex z1,float real)
{
    struct Complex res = z1;
    res.im /= real;
    res.re /= real;
    return res;
}

struct Complex conj(struct Complex z)
{
    struct Complex res = z;
    res.im = res.im * -1.0;
    return res;
}

void complex_print(struct Complex z)
{
    printf("%f + j%f\n",z.re,z.im);
}