#ifndef BAMBOO_01_2048_H_
#define BAMBOO_01_2048_H_

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
#include <avr/pgmspace.h>

#define BAMBOO_01_2048_NUM_CELLS 2048
#define BAMBOO_01_2048_SAMPLERATE 16384

const char __attribute__((section(".progmem.data"))) BAMBOO_01_2048_DATA []  = {0, 1, -1, 1, -1, 0, 1, -1, 0, -1, 0,
-2, 0, -1, -1, -7, -29, -71, -96, -72, -16, 15, 12, 13, 53, 104, 126, 109, 34,
-32, -50, -62, -46, -10, 29, 56, 29, -9, -56, -90, -72, -72, -28, 45, 82, 69, 1,
-57, -86, -60, 15, 47, 71, 60, 17, -28, -61, -27, 1, 26, 63, 49, 43, 12, -53,
-68, -39, 34, 84, 64, 19, -27, -41, -40, -30, -6, 6, 27, 17, -24, -35, -45, -30,
-12, 9, 25, 13, -5, -38, -44, -2, 19, 14, 9, 2, 5, 3, 4, 5, 13, 23, 20, 15, 7,
1, 1, -1, 5, 14, 12, 2, -22, -29, -9, 13, 12, -7, -25, -27, -22, -11, -15, -18,
-9, 1, -2, -10, -14, -15, -10, -1, 7, 15, 15, 7, 1, -1, 10, 12, 8, 9, 14, 22,
21, 10, -4, -10, -4, 3, 8, 10, 6, -4, -17, -24, -21, -14, 0, 3, 2, -2, -16, -31,
-36, -24, -1, 18, 19, 4, -8, -15, -10, -2, 10, 20, 23, 20, 8, -3, -10, -7, 5,
18, 29, 26, 13, -2, -13, -10, -3, 3, 4, 2, -4, -12, -22, -25, -19, -8, 1, 2, -3,
-11, -16, -14, -10, -4, -4, -6, -8, -4, -1, 7, 12, 13, 9, 6, 6, 5, 7, 7, 11, 14,
16, 9, 2, -2, -4, 0, 1, 1, -5, -13, -16, -15, -10, -8, -6, -10, -12, -10, -7,
-7, -10, -12, -9, -2, 2, 3, 0, 0, -3, -3, -1, 6, 14, 17, 19, 13, 8, 2, 1, 2, 8,
12, 9, 3, 0, -9, -10, -5, 0, 6, 0, -4, -11, -15, -16, -16, -13, -5, 0, -1, -6,
-16, -16, -13, -5, 5, 11, 13, 8, 2, -4, -2, 0, 9, 16, 18, 17, 10, 4, -3, -2, 2,
7, 10, 6, -1, -11, -13, -9, -5, -3, -6, -7, -7, -10, -13, -11, -12, -9, -8, -9,
-5, -5, -4, -3, -1, 0, 2, 1, 4, 9, 9, 6, 4, 5, 8, 9, 10, 7, 7, 4, 1, -1, 2, 2,
3, 1, -4, -7, -10, -10, -11, -9, -8, -7, -11, -10, -13, -13, -10, -4, 0, -3, -5,
-8, -4, 1, 7, 8, 8, 9, 7, 7, 6, 7, 9, 13, 12, 9, 7, 0, -2, -1, 1, 6, 2, 0, -4,
-9, -11, -14, -9, -3, -4, -5, -12, -16, -15, -12, -4, -2, 3, 1, -4, -4, -7, -2,
5, 11, 14, 11, 8, 3, 4, 6, 10, 12, 9, 6, 1, -2, -3, -1, 0, 3, -1, -1, -4, -6,
-8, -8, -6, -5, -7, -10, -13, -15, -12, -8, -4, 0, -2, -3, -4, -1, 0, 4, 3, 7,
7, 6, 1, -1, 1, 5, 9, 8, 9, 6, 5, 2, 3, 4, 1, 1, -2, -1, -6, -9, -10, -8, -8,
-6, -8, -8, -10, -11, -9, -8, -5, -5, -5, -4, -3, 0, 0, -1, 2, 4, 8, 9, 9, 7, 5,
7, 7, 7, 9, 5, 5, 2, 2, 0, 0, -1, -3, -4, -4, -8, -8, -9, -7, -7, -7, -7, -10,
-7, -7, -5, -4, -4, -3, -2, -1, 0, -1, 1, 1, 4, 5, 6, 5, 7, 5, 6, 6, 7, 9, 7, 5,
1, 0, -1, -2, -3, -1, 0, -2, -7, -10, -13, -10, -8, -4, -4, -7, -8, -10, -6, -4,
-4, -1, -3, 0, -1, 0, -1, 0, 3, 7, 7, 8, 6, 4, 6, 5, 6, 4, 6, 4, 3, 2, 0, -3,
-3, -5, -3, -5, -6, -6, -10, -9, -11, -7, -7, -6, -6, -6, -6, -4, -5, -2, -1, 2,
2, 2, 3, 2, 3, 4, 6, 7, 7, 5, 4, 3, 5, 5, 4, 4, 2, 1, -2, -2, -3, -5, -6, -6,
-3, -3, -5, -8, -9, -9, -5, -5, -4, -5, -5, -4, -5, -4, -3, -1, 4, 5, 4, 4, 3,
3, 5, 6, 7, 6, 4, 4, 3, 2, 2, 4, 3, 1, -2, -2, -4, -6, -5, -6, -5, -5, -7, -7,
-9, -7, -6, -5, -3, -1, -3, -3, -4, -3, -2, 0, 0, 3, 2, 4, 3, 4, 3, 5, 5, 6, 6,
3, 4, 1, 0, 1, 0, 1, -2, -3, -4, -5, -5, -6, -5, -6, -4, -5, -7, -9, -9, -7, -5,
-3, -1, -2, -2, -2, -2, 0, 0, 4, 6, 5, 5, 3, 4, 4, 3, 5, 5, 6, 3, 2, 2, 1, -1,
0, -2, -1, -3, -3, -6, -5, -6, -6, -6, -6, -7, -6, -5, -6, -4, -4, -3, -2, -2,
0, -1, 2, 2, 2, 3, 3, 4, 2, 3, 4, 5, 5, 5, 4, 2, 2, 1, 0, 0, -1, 0, -4, -4, -6,
-6, -8, -6, -6, -5, -4, -6, -6, -7, -6, -5, -4, -2, -1, 0, 0, -1, 0, 1, 2, 4, 5,
6, 5, 4, 3, 3, 3, 3, 4, 2, 3, 1, 0, -2, -2, -3, -2, -4, -4, -5, -5, -6, -7, -7,
-7, -4, -5, -4, -4, -4, -5, -4, -2, -1, 0, 1, 1, 3, 2, 3, 5, 5, 5, 5, 6, 4, 4,
4, 2, 2, 0, 0, -1, -1, -1, -3, -3, -3, -4, -4, -6, -6, -7, -6, -6, -5, -4, -5,
-4, -4, -4, -2, -1, 0, 1, 0, 1, 1, 1, 3, 3, 4, 6, 5, 4, 4, 2, 2, 1, 2, 2, 3, 1,
-2, -2, -5, -4, -5, -4, -5, -4, -4, -6, -5, -5, -4, -5, -4, -4, -4, -2, -2, -3,
-1, -1, 2, 2, 3, 2, 3, 2, 3, 4, 4, 5, 4, 3, 3, 2, 1, 1, 0, 0, -1, -1, -3, -3,
-3, -4, -3, -4, -5, -4, -5, -7, -4, -5, -3, -4, -3, -3, -1, -3, 0, -1, 0, 2, 2,
3, 2, 4, 4, 3, 5, 3, 4, 2, 2, 2, 0, 0, -1, -2, -1, -2, -2, -3, -4, -4, -3, -3,
-5, -4, -6, -6, -6, -3, -4, -3, -3, -2, -1, 0, -1, -1, 2, 2, 2, 2, 3, 1, 3, 4,
4, 4, 3, 3, 1, 0, 1, -1, 0, -1, 0, -2, -3, -4, -4, -3, -3, -3, -4, -5, -5, -6,
-4, -3, -3, -3, -2, -2, 0, -1, 0, 1, 1, 1, 2, 1, 1, 2, 3, 3, 4, 2, 1, 1, 1, 0,
1, 0, 0, -1, -2, -3, -3, -3, -3, -4, -3, -4, -4, -5, -5, -4, -4, -3, -2, -2, -2,
-1, 0, -1, 0, 1, 1, 2, 1, 1, 1, 1, 2, 3, 2, 2, 1, 1, 1, 0, 1, 0, 0, -1, -1, -2,
-3, -3, -3, -4, -4, -4, -4, -4, -4, -3, -4, -3, -3, -2, -1, -1, -1, 0, -1, 0, 1,
1, 2, 2, 2, 3, 1, 2, 2, 1, 1, 1, 0, 0, 0, 0, 0, -1, -1, -3, -3, -3, -4, -4, -4,
-4, -3, -4, -3, -3, -3, -3, -3, -2, -1, -1, 0, 0, 0, 0, 1, 1, 2, 2, 3, 2, 1, 1,
1, 2, 1, 1, 1, 0, -1, -1, -1, -2, -2, -2, -3, -3, -3, -4, -5, -4, -5, -4, -3,
-4, -3, -3, -2, -1, -1, -1, 0, 0, 0, 0, 1, 1, 2, 2, 2, 1, 2, 2, 1, 2, 1, 1, 0,
0, 0, -1, -1, -1, -3, -2, -3, -3, -4, -4, -4, -4, -4, -3, -3, -3, -3, -3, -1,
-1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 0, 0, 0, -1, -1, -2,
-3, -2, -3, -3, -3, -4, -3, -4, -4, -4, -3, -2, -2, -2, -2, -2, -1, -1, 0, 0, 0,
0, 1, 1, 0, 1, 1, 1, 2, 2, 1, 1, 0, 0, 0, -1, -1, 0, -1, -2, -2, -2, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -1, 0, -1, 0, 0, 0, 0, 0, 1, 1, 2, 2, 2,
2, 1, 0, 1, 0, 0, 0, 0, 0, -1, -1, -2, -2, -2, -3, -2, -3, -3, -3, -3, -3, -3,
-3, -3, -2, -2, -1, -1, 0, -1, 0, 0, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, -1,
0, -1, 0, -1, -1, -2, -2, -2, -2, -2, -3, -2, -2, -3, -2, -2, -2, -2, -2, -2,
-1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, -1, 0, 0, -1, -1,
-2, -2, -2, -2, -2, -2, -2, -2, -3, -2, -2, -2, -2, -2, -2, 0, -1, 0, -1, 0, 0,
0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 1, 0, 1,
1, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -2, -1, -2, -2, -2, -2, -2, -3, -2, -2,
-2, -2, -2, -2, -2, -2, -1, 0, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0,
0, 0, 0, 0, -1, -1, -1, -1, -1, -2, -1, -1, -1, -2, -1, -2, -1, -1, -1, -1, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -2, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-2, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -2, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
-1, -1, -1, -1, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0,
-1, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, 0, 0, 0,
0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, -1,
0, };

 #endif /* BAMBOO_01_2048_H_ */
