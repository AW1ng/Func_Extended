#include <iostream>
using namespace std;


void EvenCount(long long N, int &ans) {
	string S;
	S = to_string(N);
	for(int i = 0; i < S.length(); i++) {
		if(int(S[i] - '0') % 2 == 0) ans++;
	}
	
	return;
}


int main() {
	int ans;
	
	EvenCount(9223372036854775806,ans);
	cout <<"Answer is " << ans;
}

