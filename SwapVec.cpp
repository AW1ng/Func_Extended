#include <iostream>
#include <vector>
using namespace std;


void SwapVec(vector<int> &vec, int *Array) {
	int t;
	for(int i = 0; i < vec.size(); i++) {
		t = Array[i];
		Array[i] = vec[i];
		vec[i] = t;
	}
	
}


int main() {
	vector<int> A = {1, 2, 3, 4};
	int B[]{22, 33, 45, 76};
	
	SwapVec(A, B);

	for(int i = 0; i < A.size(); i++) {
		cout << A[i] << " ";
	}
	
	cout << "\n";
	
	for(int i = 0; i < 4; i++) {
		cout << B[i] << " ";
	}
}


