//https://www.urionlinejudge.com.br/judge/en/problems/view/1028
#include <stdio.h>
#include <string.h>
#include <iostream>

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main(int argc, char const *argv[]) {
  int N, F1, F2;
  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    scanf("%d %d", &F1, &F2);
    printf("%d\n", gcd(F1, F2));
  }
  return 0;
}
