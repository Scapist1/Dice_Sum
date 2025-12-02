#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int counts[13] = {0}; // array (all initial 0)
  srand(time(NULL));

  int diceSums;
  int roll = 50;

  for (int i = 1; i <= roll; i++) {
    diceSums = (rand() % 6 + 1) +
               (rand() % 6 + 1); // Rand produce very large random number
    counts[diceSums]++; // ++ the number in array dice sum matches
  }

  for (int s = 2; s <= 12; s++) {
    printf("%d: %d\n", s, counts[s]); // print out destributions
  }

}