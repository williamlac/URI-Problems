//https://www.urionlinejudge.com.br/judge/en/problems/view/1307
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main(int argc, char const *argv[]) {
  int N;
  char x[30], y[30];
  scanf("%d", &N);
  for (int i = 0; i < N ; i++) {
    scanf("%s %s", x, y);
    int x1 = strtol(x, NULL, 2);
    int y1 = strtol(y, NULL, 2);
    if (gcd(x1, y1) != 1){
      printf("Pair #%d: All you need is love!\n", i+1);
    }
    else
      printf("Pair #%d: Love is not all you need!\n", i+1);
  }
  return 0;
}
