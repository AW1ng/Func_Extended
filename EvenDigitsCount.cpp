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

void _EvenCount(long long N, int &ans) {
	int modN;
	for(int i = 0; N > 0; i++) {
		modN = N % 10;
		N /= 10;
		if(modN % 2 == 0) ans++;
	}
	
	return;
}

void RecEvenCount(long long N, int &ans) {
	int modN = N % 10;
	if(N == 0) return;
	if(modN % 2 == 0) ans++;
	return RecEvenCount( N / 10, ans);
}

int main() {
	int ans;
	
//	EvenCount(9223372036854775806,ans);
//	cout <<"Answer is " << ans;

//	_EvenCount(9223372036854775806,ans);
//	cout <<"Answer is " << ans;

	RecEvenCount(9223372036854775806,ans);
	cout <<"Answer is " << ans;
	
}
