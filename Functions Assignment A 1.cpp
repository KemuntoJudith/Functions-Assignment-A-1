// Functions Assignment A 1
//Admission: 147683


#include <iostream>
using namespace std;

//Write a function called checkEven() that receives an integer as a parameter and returns true if the parameter is an even number and false otherwise (if the integer odd).

int evenCheck(int number) //function prototype
{
	return!(number & 1) ;
}
int main()
{
	int number;
	cout << "This program will check whether the number you give is Even or not." << endl; 
	cout << "\n\n"; 
	cout << "Please enter a number: "; //ask the user to input a number
	cin >> number;
	cout << "\n\n"; 

	evenCheck(number);   //calling the evenCheck function

	if (evenCheck (number))
	{
		cout << "True: This is an Even number" << endl; 
	}
	else
	{
		cout << "False: This is not an even number" << endl; 
	}
	return 0;
}
