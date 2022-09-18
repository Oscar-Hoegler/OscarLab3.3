/*Oscar Hoegler, September 8th 2022, Laboratory 3.3
 *OscarLab3.3, Based on hen quantity, output cartons required*/

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	
	long chickenCOUNT, cartonSIZE = 12, basketAMOUNT; 
	cout << "How many chickens? "; cin >> chickenCOUNT; 
	cout << "You need " << (chickenCOUNT - (chickenCOUNT % cartonSIZE)) / cartonSIZE << " cartons of size " << cartonSIZE << ", and will have " << chickenCOUNT % cartonSIZE << " left over for breakfast";

	return 0;
}