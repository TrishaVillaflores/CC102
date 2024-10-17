#include <iostream>

using namespace std;

int main ()
{
	float sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD;
	float sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
	float UsdToPhp, PoundstoPhp;
	float Total_cost, total_costToPhp;
	
	cout << "Enter the Price of Sugar: " ;
	cin >> sugarPriceUSD;
	cout << "Enter the Price of Rice: " ; 
	cin >> ricePricePound;
	cout << "Enter the Price od sardines: " ;
	cin >> sardinesPricePound;
	cout << "Enter the Price of coffee: " ;
	cin >> coffeePriceUSD;
	cout << "Enter the Price of Milk: " ;
	cin >> milkPriceUSD;
	cout << "********************************************************" << endl;
	cout << "Enter the Quantity of Sugar: " ;
	cin >> sugarQty;
	cout << "Enter the Quantity of Rice: " ;
	cin >> riceQty;
	cout << "Enter the Quantity of Sardines: " ;
	cin >> sardinesQty;
	cout << "Enter the Quantity of Coffee: " ;
	cin >> coffeeQty;
	cout << "Enter the Quantity of Milk: " ;
	cin >> milkQty;
	cout << "********************************************************" << endl;
	float total_cost = (sugarPriceUSD)*(sugarQty)+(ricePricePound)*(riceQty)+(sardinesPricePound)*(sardinesQty)+(coffeePriceUSD)*(coffeeQty)+(milkPriceUSD)*(milkQty);
	
	cout << "Total_cost in PHP: " << total_cost << endl;
	return 0;
}