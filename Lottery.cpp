// https://www.urionlinejudge.com.br/judge/en/problems/view/1694

#include <bits/stdc++.h>
using namespace std;
int primos[2510];
void crivo(){
  int parada = sqrt(2510);
  for (int i = 2; i < parada+1; i++) {
    if(primos[i]==1){
      for (int j = i*i; j < 2510; j+=i) {
        primos[j]=0;
      }
    }
  }
}
long long int comb( int n, int k )
{
    if (k * 2 > n) k = n-k;
    if (k == 0) return 1;

    long long int res = n;
    for( int i = 2; i <= k; ++i ) {
        res *= (n-i+1);
        res /= i;
    }
    return res;
}

int main(int argc, char const *argv[]) {
  int M, N, K, n;
  long long int total=0, fat1=0, fat2=0;
  for(int i = 0; i<2511;i++){
    if(i >1)
      primos[i]=1;
    else
      primos[i]=0;
  }
  crivo();
  cin >>N>>M>>K;
  while(M){
    total=0;
    for (int i = 0; i < N; i++) {
      n=M;
      for(int j = 0; j<M;j++){
        if(primos[(i*M)+j]==1){n--;}
      }
      if(n>=K){
        total+= comb(n,K);
      }
    }
    if(K!=1){
      for (int i = 0; i < M; i++) {
        n=N;
        for(int j = 0; j<N;j++){
          if(primos[(j*M)+i]==1) n--;
        }
        if(n>=K){
          total+=comb(n,K);
        }
      }
    }
    cout<<total<<endl;
    cin >>N>>M>>K;
  }
  return 0;
}
