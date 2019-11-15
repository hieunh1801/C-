#include <iostream>
#include <string.h>
using namespace std;
// Define Prototype
int sum_array(int array[], int length);

int main(int argc, char** argv) {
	cout << "Hello World" << endl;
	int a[2] = {4, 2};
	cout << "Phisical Address of A" <<a << endl;
	cout << "sum array: " << sum_array(a, 2) << endl;
	char ss[100];
	strcpy(ss, "Nguyen Huu Hieu");
	cout << ss;
	return 0;
}

int sum_array(int array[], int length) {
	int sum = 0;
	for (int i = 0; i < length; i ++) {
		sum = sum + array[i];
	}
	return sum;
}
