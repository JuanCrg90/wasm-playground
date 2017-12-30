#include <stdio.h>
#include <emscripten/emscripten.h>

int main(int argc, char *argv[]) {
  printf("Hello World\n");

  return 0;
}

void EMSCRIPTEN_KEEPALIVE myFunction(int argc, char *argv[]) {
  printf("Called Function\n");
}

