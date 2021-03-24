// Amber Garcia Homework #2
#include <iostream>
using namespace std;
int main(){

	// Question 1

	double radius;
	double circumference;
	double area;
	double pi = 3.14159;

	cout << " Please enter radius of circle: ";
	cin >> radius;

	circumference = 2*(pi * radius);
	area = pi * (radius * radius);

	cout << " Total Area: " << area << endl;
	cout << " Total Circumference: " << circumference << endl;
	cout << "\n";

	// --------------------------------------------------------------

	// Question  2

	int penny, nickel, dime, quarter;
	int sum_of_change;
	cout << " Quarters? ";
	cin >> quarter;
	cout << " Dimes? ";
	cin >> dime;
	cout << " Nickels? ";
	cin >> nickel;
	cout << " Pennies? ";
	cin >> penny;

	sum_of_change = ( 25*quarter ) + ( 10*dime ) + ( 5*nickel )+penny;

	cout << " You have " << sum_of_change << " cent(s).\n";

	// Logic for making it into dollars
	// -----------------------------------------------------
	// If the sum of change when it is more than 100 [ pennies ]
	// To get the cent amount all you need to do is mod 100
	// the total amount. Then for the dollars you subtract
	// The cents to get an even number, divide the
	// amount by 100 to get the amount of dollars in
	// the sum of change.
	// -----------------------------------------------------
	// If the sum of change is equal to 100, then just say the user
	// only has one dollar and 0 cents
	// -----------------------------------------------------
	// If otherwise, just state the user has 0 dollars with the
	// sum of change
	// _____________________________________________________

	int dollar;
	int cent;
	if(sum_of_change > 100){

		cent = sum_of_change % 100;
		dollar = ( sum_of_change - cent ) / 100;

		cout << " You have " << dollar << " dollar(s)";
		cout << " and " << cent << " cent(s).\n";
	}else if( sum_of_change == 100 ){

		cout << " You only have a dollar and 0 cents! ";
	}else{

		cout <<" No dollars, just";
		cout  << " " << sum_of_change << " cent(s)\n";
	}
	return 0;
}
