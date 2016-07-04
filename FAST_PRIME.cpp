//https://www.urionlinejudge.com.br/judge/en/problems/view/1221
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int Prime(int a) {
    if (a == 2)
       return 1;
    if ((a % 2) == 0)
       return 0;

       for (int i=3;i<=sqrt(a);i+=2)
           if (a%i==0)
               return 0;
    return 1;
}
int main(int argc, char const *argv[]) {
  int N, x;
  scanf("%d", &N);
  for (int i = 0; i < N; i++){
    scanf("%d", &x);
    if (Prime(x)) {
      printf("Prime\n");
    }
    else
      printf("Not Prime\n");
  }
  return 0;
}
