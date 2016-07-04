//https://www.urionlinejudge.com.br/judge/pt/problems/view/1582
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main(int argc, char const *argv[]) {
  int n[3], div;
  while(scanf("%d %d %d",&n[0],&n[1],&n[2])!=EOF){
    sort(n, n+3);
    div = gcd(gcd(n[0],n[1]), n[2]);
    if (div == 1){
      if (n[2]*n[2] == (n[1]*n[1])+(n[0]*n[0])){
        printf("tripla pitagorica primitiva\n");
      }
      else
        printf("tripla\n");
    }
    else {
      n[0]/=div;
      n[1]/=div;
      n[2]/=div;
      if (n[2]*n[2] == (n[1]*n[1])+(n[0]*n[0])){
        printf("tripla pitagorica\n");
      }
      else
        printf("tripla\n");
    }
  }
  return 0;
}
