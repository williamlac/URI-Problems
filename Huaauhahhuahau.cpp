//https://www.urionlinejudge.com.br/judge/en/problems/view/2242
#include<bits/stdc++.h>
using namespace std;
int main() {
	string s1, s2, s3;
	cin>>s1;
	for(int i = 0; i < s1.size() ; i++) {
		if (s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u')
				s2+= s1[i];
	}
	s3 = s2;
	reverse(s3.begin(), s3.end());
	if(s2.compare(s3) == 0)
		cout >> 'S';
	else
		cout >> 'N';
	return 0;
}
