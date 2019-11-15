#include <iostream>

using namespace std;
int main() {
	cout << "POINTER";
	
	int a = 1000;
	int *pointer;
	pointer = &a;
	cout << "a = " << a << endl;
	cout << "phiscal of a: " << &a << endl;
	cout << "value of pointer: " << *pointer << endl;
	cout << "pointer tro toi< " << pointer << endl;
	*pointer = 2000;
	cout << " new value of a when assign a across pointer: " << a << endl;
	
	int *b;
	b = &a - 1;
	cout << *b;
	
	
	return 0;
}
