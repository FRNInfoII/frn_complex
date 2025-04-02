#pragma once

struct Complex
{
    float re;
    float im;
};

struct Complex add(struct Complex z1,
                   struct Complex z2);

struct Complex sub(struct Complex z1,
                   struct Complex z2);

struct Complex mul(struct Complex z1,
                   struct Complex z2);

struct Complex div(struct Complex z1,
                   struct Complex z2);

struct Complex real_mul(struct Complex z1,
                        double scalar);

struct Complex real_div(struct Complex z1,
                        double scalar);
    
struct Complex conj(struct Complex z1);
      