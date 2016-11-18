//https://www.urionlinejudge.com.br/judge/en/problems/view/1329
#include <bits/stdc++.h>
using namespace std;
#define MAXN 10000
int main(int argc, char const *argv[]) {
  int n, c1=0, c2=0, aux;
  cin>>n;
  while (n!=0) {
    for (size_t i = 0; i < n; i++) {
      cin>>aux;
      if(aux==0)
        c1++;
      else c2++;
    }
    printf("Mary won %d times and John won %d times\n", c1, c2 );
    c1 = c2 = 0;
    cin>>n;
  }
  return 0;
}
