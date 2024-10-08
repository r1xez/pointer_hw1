#include <iostream>
using namespace std;

int main() {

	int a, b;

	cout << "Enter value of a: ";
	cin >> a;
	cout << "Enter value of b: ";
	cin >> b;

	int* p1 = &a;
	int* p2 = &b;

	int* temp = p1;
	p1 = p2;
	p2 = temp;

	cout << "a: " << *p1 << endl;


	return 0;
}