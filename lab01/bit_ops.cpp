#include "bit_ops.h"

// Возвращает бит номер n числа x.
// Предполагается 0 <= n <= 31
unsigned get_bit(unsigned x,
                 unsigned n) {
                 return (1 & x >> n);
}
// Выставляет значение v в бите номер n
// Предполагается что 0 <= n <= 31 и v равно 0 или 1
void set_bit(unsigned *x,
             unsigned n,
             unsigned v) {
             unsigned mask = 1 << n;
             *x = (*x & ~mask) | (v << n);
}
// Меняет значение бита номер n на противоположное.
// Предполагается что 0 <= n <= 31
void flip_bit(unsigned *x,
              unsigned n) {
              unsigned mask = 1 << n;
              *x = (*x ^= mask);
}
