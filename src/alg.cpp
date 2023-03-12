// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double a = value;
  for (int j = 2; j <= n; j++)
    a *= value;
  return a;
}

uint64_t fact(uint16_t n) {
  uint16_t a = 1;
  for (int j = 2; j <= n; j++)
    a *= j;
  return a;
}

double calcItem(double x, uint16_t n) {
  return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {
  double a = 1;
  for (uint16_t j = 1; j <= count; j++)
    a += calcItem(x, j);
  return a;
}

double sinn(double x, uint16_t count) {
  double a = x;
  for (uint64_t j = 2; j <= count; j++)
    a += pown(-1, j-1) * calcItem(x, 2*j-1);
  return a;
}

double cosn(double x, uint16_t count) {
  double a = 1;
  for (uint64_t j = 2; j <= count; j++)
    a += pown(-1, j-1) * calcItem(x, 2*j-2);
  return a;
}
