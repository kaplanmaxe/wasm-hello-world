#include <stdio.h>
#include <emscripten/emscripten.h>
#include <math.h>
#include <string.h>

using namespace std;

extern "C" {
  int main() {
    printf("Web assembly loaded!");
    return 0;
  }

  // Currently throws memory out of bounds error
  const char* sayName(const char* name) {
    char* str;
    strcpy(str, "Hello");
    strcat(str, name);
    return str;
  }

  int int_sqrt(int x) {
    return sqrt(x);
  }

  int wasmForLoop() {
    for (int i = 0; i < 1000000; i++) {
      bool test = i != 1;
    }
    return 0;
  }
}