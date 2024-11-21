#include <iostream>
using namespace std;

int main() {
    int age;
    char withParent;
    double money;

    cout << "Enter your age: ";
    cin >> age;
    cout << "With a parent? (y/n): ";
    cin >> withParent;
    cout << "Money available ($): ";
    cin >> money;
    string movieType;
    if (age < 13) {
        movieType = (withParent == 'y' || withParent == 'Y') ? "G, PG" : "G";
    } else if (age < 16) {
        movieType = (withParent == 'y' || withParent == 'Y') ? "G, PG, R" : "G, PG";
    } else {
        movieType = "G, PG, R";
    }
    if (money >= 10.50) {
        cout << "You can watch an evening movie. Available ratings: " << movieType << endl;
    } else if (money >= 7.50) {
        cout << "You can watch a matinee movie. Available ratings: " << movieType << endl;
    } else {
        cout << "You do not have enough money to buy a movie ticket." << endl;
    }
    return 0;
}