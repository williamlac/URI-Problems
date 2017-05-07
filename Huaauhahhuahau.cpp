//https://www.urionlinejudge.com.br/judge/en/problems/view/2242
#include<bits/stdc++.h>
using namespace std;
int main() {
	int i, j = 0;
	string s1, s2, s3;
	cin>>s1;
	for(i = 0; i < s1.size() ; i++) {
		switch(s1[i]) {
			case 'a': case 'e': case 'i': case 'o': case 'u':
				s2+= s1[i];
				j++;
				break;
		}
		//printf("For  %c   v->  %s\n", risada[i], vogais1 );
	}
	s2[j] = '\0';
	s3 = s2;
	reverse(s3.begin(), s3.end());
	if(s2.compare(s3) == 0) {
		printf("S\n");
	}
	else {
		printf("N\n");
	}

	return 0;
}
