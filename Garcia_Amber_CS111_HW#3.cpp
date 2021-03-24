
//Amber Garcia HW # 3

#include <iostream>
using namespace std;
int main(){
	// Question 1
	double checking, savings;

	cout << " Enter checking amount: ";
	cin >> checking;
	cout << " Enter savings amount: ";
	cin >> savings;

	if(checking + savings <= 0){

		cout << "Bankrupt \n";
	}else if(checking + savings > 250000){

		cout << "Money Bags\n";
	}else{
		cout << "Total Checking: " << checking << endl;
		cout << "Total Savings: " << savings << endl;
	}

	// Question 2

	int x;
	int num1, num2, num3, sum;

	cout << "Enter positive three digit number: ";
	cin >> x;
	if( x < 100 || x >= 1000 ){

		cout << "ERROR ";
		return 0;

	}
	num1 = x%10;
	x/=10;
	num2 = x%10;
	x/=10;
	num3 = x%10;
	x/=10;
	sum = num1 + num2 + num3;
	cout << sum << endl;
	return 0;


}
