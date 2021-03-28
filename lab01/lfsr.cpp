#include <iostream>
#include "lfsr.h"

void lfsr_calculate(uint16_t *reg) {
    uint16_t &x = *reg;
    uint16_t x1 = (x << 15) >> 15;
    uint16_t x2 = (x << 13) >> 15;
    uint16_t x3 = (x << 12) >> 15;
    uint16_t x4 = (x << 10) >> 15;
    uint16_t res = x1 ^ x2 ^ x3 ^ x4;
    x = (x >> 1) + (res << 15);
}

/*void lfsr_calculate(uint16_t *reg) {
    uint16_t bit;
    	bit = ((*reg >> 0) ^ (*reg >> 2) ^ (*reg >> 3) ^ (*reg >> 5) ) & 1;
    	*reg = (*reg >> 1) | (bit << 15);
}*/
