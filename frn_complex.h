#pragma once

struct Complex
{
    float re;
    float im;
};

struct Complex add(struct Complex z1,
                   struct Complex z2);