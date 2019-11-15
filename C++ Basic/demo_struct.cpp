#include <iostream>
#include <string.h>
#include <stdlib.h> 
using namespace std;
struct product {
	string name;
	float price;
};

int main() {
	product orange, apple;
	orange.name = "Qua cam";
	apple.name = "Qua tao";
	cout << orange.name;	
	return 0;
}


