#include <stdio.h>
#include <stdint.h>
#include <limits.h>
#include <string.h>

#define dumbass(i) i * i

void pissingmeoff(void) {
  int q1[4][3][2] = {
    { 1, },
    { 2, 3, },
    { 4, 5, 6, },
  };
  int q2[4][3][2] = {
    1, 0, 0, 0, 0, 0, 
    2, 3, 0, 0, 0, 0,
    4, 5, 6,
  };

  for (size_t r = 0; r < 4; ++r) {
    for (size_t c = 0; c < 3; ++c) {
      for (size_t d = 0; d < 2; ++d) {
        printf("[%zu][%zu][%zu]: %d ", r, c, d, q2[r][c][d]);
      }
    }
    putchar('\n');
  }
  putchar('\n');

  for (size_t r = 0; r < 4; ++r) {
    for (size_t c = 0; c < 3; ++c) {
      for (size_t d = 0; d < 2; ++d) {
        printf("[%zu][%zu][%zu]: %d ", r, c, d, q1[r][c][d]);
      }
    }
    putchar('\n');
  }
  putchar('\n');

  return;
}

void tda(void) {
  int q1[4][3][2] = {
    {1}
  };
  return;
}

int main(void) {
  printf("Hello World\n");

  pissingmeoff();

  int cafe = 0xCAFEBABE;
  printf("%08X\n", cafe);
  uint8_t * p1 = (uint8_t *) &cafe;
  uint8_t * p2 = p1 + 1;
  printf("%08X, byte 0: %02X, byte 1: %02X\n", cafe, *p1, *p2);
  *p1 ^= *p2;
  *p2 ^= *p1;
  *p1 ^= *p2;
  printf("%08X, byte 0: %02X, byte 1: %02X\n", cafe, *p1, *p2);
  p1 = p2 + 1;
  p2 = p1 + 1;
  printf("%08X, byte 2: %02X, byte 3: %02X\n", cafe, *p1, *p2);
  *p1 ^= *p2;
  *p2 ^= *p1;
  *p1 ^= *p2;
  printf("%08X, byte 2: %02X, byte 3: %02X\n", cafe, *p1, *p2);

  printf("%d\n", 81 / dumbass(3));

  printf("%zu\n", SIZE_MAX);
  printf("%lu\n", ULONG_MAX);
  printf("%lu\n", ULONG_MAX - 10 + 1);

  //  the magic of the comma operator...
  int a;
  #ifdef INTERACTIVE_
  printf("input a number: ");
  fflush(stdout);
  printf("%i %d\n", (scanf("%i", &a), a), a >= 0 ? 1 : 0);
  #else
  char const * twelve = "12";
  printf("%i %d\n", (sscanf(twelve, "%i", &a), a), a >= 0 ? 1 : 0);
  #endif
  
  return 0;
}
