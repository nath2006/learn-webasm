#include <stdio.h>
#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int addNums(int a, int b){
  return a + b;
}

EMSCRIPTEN_KEEPALIVE
int subtractNums(int a, int b){
  return a - b;
}

EMSCRIPTEN_KEEPALIVE
int main(){
  printf("Hello Word!, %d\n", addNums(10,10));
  return 0;
}
