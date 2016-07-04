//https://www.urionlinejudge.com.br/judge/en/problems/view/1371
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
  int N;
  bool espaco;
  scanf("%d", &N);
  while (N!=0) {
    espaco = false;
    for (int i = 1; i*i <= N; i++) {
      printf( "%s%d", ( espaco ? " " : "" ), i*i ), espaco = true;
    }
    printf( "\n" );
    scanf("%d", &N);
  }
  return 0;
}
