#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
	float starting_balance;
	float annual_interest_rate;
	cout<<"Interest Calculation Program \n";
	cout<<"Enter starting balance: ";
	cin>>starting_balance;
	cout<<"Enter annual interest: ";
	cin>>annual_interest_rate;
	long long first_balance = (starting_balance * (annual_interest_rate / 100)) + starting_balance;
	cout<<"Balance after one year: "<<first_balance << endl;
	long long second_balance;
	first_balance = second_balance;
	long long after_balance = (second_balance * (annual_interest_rate / 100)) + second_balance;
	cout<<"Balance after two years: "<<after_balance;
	
	
}



// if statement and conditional statement for ca test
// seventh week for the test and it will be a live coding test