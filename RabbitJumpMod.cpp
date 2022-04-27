#include <iostream>

using namespace std;
#define MIN(x, y)  ((x) < (y) ? (x) : (y))

int RabbitLeap(int N, int K = 3) {
  	if(N == 0) return 1;
  	int Result = 0;
  	for(int i = MIN(N, K); i > 0; i--)
	  Result += RabbitLeap(N - i);
  	return Result;
}

int main() {
	cout << RabbitLeap(3, 2);
}


