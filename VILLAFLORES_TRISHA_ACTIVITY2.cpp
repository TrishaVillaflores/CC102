#include <iostream>

using namespace std;

int main () {

int ans;
cout << "Enter your age: ";
cin >> ans;

if (ans < 16 ) {
	cout << "Too young to drive." << endl;
	
}

else if (ans ==16) {
	cout << "Better to clear the road." << endl;
	
}

else {
	cout << "You are getting pretty old." << endl;
	
}
	return 0;
}

