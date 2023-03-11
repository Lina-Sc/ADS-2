// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double a = value;
  for (uint16_t i = 2; i <= n; ++i)
      value *= a;
}

uint64_t fact(uint16_t n) {
  uint16_t b = 1;
  for (uint16_t j = n; j >= 1; --j) {
    b *=j;
    return b;
  }
}

double calcItem(double x, uint16_t n) {
  return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {
  double c = 1;
  for (uint16_t k = 1; k <= count; ++k)
    c += calcItem(x, k);
  return c;
}

double sinn(double x, uint16_t count) {
  double d = x;
  for (uint16_t l = 2; l <= count; ++l)
    d += pown (-1, l-1) * calcItem(x, 2*l - 1);
  return d;
}

double cosn(double x, uint16_t count) {
  double f = 1;
  for (uint16_t m 2; m <= count; ++m)
    f += pown(-1, i - 1) * calcItem(x, 2*i - 2);
  return f;
}
