#include <iostream>


void main() {

	int A[8] = { 0, 0, 1, 0, 1, 1, 0, 1 };
	int B[8] = { 0, 0, 1, 1, 0, 0, 1, 1 };
	int C[8] = {0 ,0 ,0 ,0 ,0 ,0 ,0 ,0};
	int Z[8] = { 0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 };

	for (int i = 0; i < 8; i++) {
		if (A[i] & B[i]) {
			C[i] = 1;
		}
		else {
			C[i] = 0;
		}
	}

	int temp = 0;
	for (int i = 7; i >= 0; i--) {
		Z[i] = (A[i] + B[i] + temp) % 2;
		if ((A[i] + B[i] + temp) > 1) {
			temp = 1;
		}
		else {
			temp = 0;
		}
	}

	for (int i = 0; i < 8; i++) {
		std::cout << Z[i] << " ";
	}

}