#include <emscripten.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divv(int a, int b); //why 'divv'? bcs div biw in the fucking stdio lib as a special keyword

EMSCRIPTEN_KEEPALIVE
int sumOfNInts(int n){
  //return n * (n + 1) / 2;
  return divv(mul(n, add(n, 1)), 2);
}
