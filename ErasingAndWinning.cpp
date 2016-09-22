//Created by William Lacerda on September 21st, 2016
//https://www.urionlinejudge.com.br/judge/en/problems/view/1084

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
    int top, n, d;
    char s[100010], res[100010];
    cin>>n>>d;
    while (n!=0) {
        top = -1;
        cin>>s;
        for(int i = 0; i < n; i++){
            while ( d > 0 && top != -1 && res[top] < s[i] ){
                top--;
                d--;
            }
            res[++top] = s[i];
        }
        top -= d;
        res[top+1] = 0;
        cout<<res<<endl;
        cin>>n>>d;
    }

    return 0;
}
