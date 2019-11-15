#include <iostream>  // import thư viện vào ra iostream trong C++
#include <string>
using namespace std; // using namespace std
int odd(int a);
int even(int a);

int sum(int a, int b) {
	return a + b;
}
int sum_float(float a, float b) {
	return a + b;
}
void duplicate(int &a, int &b, int &c) {
	a = a*a;
	b = b*b;
	c = c*c;
}
void funny_greeting() {
	cout << "Hello Guy";
}
int main() {
	// KHai b�o bi?n
	char vchar = 'h'; 
	string vcharstar = "laskdfj";
	int vint = 12;
	cout << "Ki tu char "<< vchar <<"\n"; 
	cout << "Kieu string "<< vcharstar << "\n";
	cout << "Kieu int "<< vint << "\n";
	
	// Define
	#define PI 3.14
	cout << PI;
	// Declare
	const int width = 100;
	const int height = 200;
//	width = 10;

	// Input from keyboard, output to display screen
	int a;
	string your_name;
	cout << "a =" << endl;
	cin >> a;
	cout << "your name: " << endl;
	cin >> your_name;
	cout << "a = " << a << endl << "your name:" << your_name << endl;
	
	// If else
	int month = 1;
	if (month == 1) {
		cout << "month 1" << endl;
	} else if (month == 1){
		cout << "month 2" << endl;
	} else if (month == 3) {
		cout << "month 3" << endl;
	}
	
	for (int i = 0; i < 100; i ++) 
	{
		cout << i << " ";
	}
	
	// Switch case
	int monthv2 = 1;
	switch (monthv2) {
		case 1:
			cout << "This month is January";
			break;
		case 12:
			cout << "This month is December";
			break;
		default:
			cout << "No month is correct";
			break;
	}
	
	cout << sum(1, 2);
	cout << sum_float(2.2,3.4);
	funny_greeting();
	
	odd(12);
	return 0;

}
