#include "frn_complex.h"

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