//Created by William Lacerda on September 21st, 2016
//https://www.urionlinejudge.com.br/judge/en/problems/view/1124

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
    int l, c, r1, r2;
    cin>>l>>c>>r1>>r2;
    while (l!=0) {
        if((min(l,c) >= 2*(max(r1,r2))) &&
            ( (l-(r1+r2))*(l-(r1+r2)) + (c-(r1+r2))*(c-(r1+r2)) >= (r1+r2)*(r1+r2) )){
            cout<<"S"<<endl;
        }
        else{
            cout<<"N"<<endl;
        }
        cin>>l>>c>>r1>>r2;
    }
    return 0;
}
