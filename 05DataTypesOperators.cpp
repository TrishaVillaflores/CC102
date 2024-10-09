#include <iostream>

using namespapce std;

int main()
{
	int A, B;
	cout << "Enter the first number: ";
	cin >> A;
	cout << "Enter the second number: ";
	cin >> B;
	
	cout << "SUM: " << A << '+' << B << '=' << A+B << endl;
	cout << "DIFFERENCE: " << A << '-' << '=' << A-B << endl;
	cout << "QUOTIENT: " << A << '*' << '=' << A/B << endl;
	cout << "PRODUCT: " << A << '/' << '=' << A*B << endl;
	cout << "REMAINDER: " << A << '%' << '=' << A%B << endl;
	return 0;
}