//https://www.urionlinejudge.com.br/judge/en/problems/view/1367
#include <bits/stdc++.h>
using namespace std;
#define MAXN 10000
int main(int argc, char const *argv[]) {
  int N, T, pen[30], certo[30],totP=0, tot=0;
  char s[30];
  char c;
  cin>>N;
  while (N!=0) {
    memset(pen, 0, sizeof(pen));
    memset(certo, 0, sizeof(certo));
    getchar();
    for (size_t i = 0; i < N; i++) {
      scanf("%c %d %s\n", &c, &T, s);
      if (s[0] == 'i') {
        pen[c-'A']+=20;
      }
      else{
        pen[c-'A']+=T;
        certo[c-'A']=1;
      }

    }
    for (int i = 0; i < 31; i++) {
      if(certo[i]==1){
        totP+=pen[i];
        tot++;
      }
    }
    printf("%d %d\n",tot, totP );
    tot=totP=0;
    cin>>N;
  }
  return 0;
}
