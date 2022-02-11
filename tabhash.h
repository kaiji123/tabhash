#ifndef TABHASH_H
#define TABHASH_H
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
uint64_t hash(uint64_t x);
uint64_t T[8][256];
void init_table();


#endif