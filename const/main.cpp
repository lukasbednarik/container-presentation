
int main()
{
  const int x = 0;
  int * px;
  const int ** ppx = &px; // ERROR: conversion from 'int **' to 'const int **'
  *ppx = &x;              // OK. Assigning 'const int *' to 'const int *'.
  *px = 1;                // Modified a const object 'x' via non-const 'px'.

  return 0;
}
