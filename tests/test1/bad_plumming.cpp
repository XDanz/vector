//
// Created by danter on 2016-09-08.
//

#include "bad_plumming.h"

Data ** foo(Data ** v, int x) {
  for (int i = 0; i < x; i++)
    if (v[i] != 0)
      v[i] = new Data;
  return v;
}

int main () {
  const int size = 5;
  Data ** v = new Data * [size];
  foo(v, size);
}