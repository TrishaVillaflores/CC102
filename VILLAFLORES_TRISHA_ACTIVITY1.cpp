#include <iostream>

using namespace std;

int main() {
	int ans;

	cout << "Enter the temperature: ";
	cin >>  ans;
	
	if (ans < 32) {
		cout << "Bring a heavy jacket." << endl;
	}
	
	else if (ans >=32 & ans <=50) {
		cout << "Bring light jacket." << endl;
		}
else  {
			cout << "Do not bring any jacket." <<endl;
		}
return 0;
}

