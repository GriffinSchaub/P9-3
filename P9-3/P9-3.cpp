//
//
//
//
//

#include <iostream>
#include <string>

using namespace std;

int romanCharValue(string s);

int main(void) {

	string inputRomanNumeral ;



	while (true) {
		cout << "Enter a word and this program will count the words or enter Q or q to exit: ";
		cin >> inputRomanNumeral;
		if (inputRomanNumeral == "Q" || inputRomanNumeral == "q") break;
		cout << endl << "the Roman Numeral: " << inputRomanNumeral << " = " << romanCharValue(inputRomanNumeral) << endl;
	}

}



int romanCharValue(string s) {

	int value = 0;
	int firstNum =0;
	int secondNum =0;

	while (s[0] != false) {

		if (s[0] == 'I') {
			firstNum = 1;
		}
		if (s[0] == 'V') {
			firstNum =5;
		}
		if (s[0] == 'X') {
			firstNum =10;
		}
		if (s[0] == 'L') {
			firstNum = 50;
		}
		if (s[0] == 'C') {
			firstNum = 100;
		}
		if (s[0] == 'D') {
			firstNum = 500;
		}
		if (s[0] == 'M') {
			firstNum = 1000;
		}


		if (s[1] == 'I') {
			secondNum = 1;
		}
		if (s[1] == 'V') {
			secondNum = 5;
		}
		if (s[1] == 'X') {
			secondNum = 10;
		}
		if (s[1] == 'L') {
			secondNum = 50;
		}
		if (s[1] == 'C') {
			secondNum = 100;
		}
		if (s[1] == 'D') {
			secondNum = 500;
		}
		if (s[1] == 'M') {
			secondNum = 1000;
		}
	

		if (firstNum >= secondNum || secondNum == false) { // cases for adding or subtracting
			value = value + firstNum;
		}
		else {
			value = value - firstNum;
		}
		s.erase(0, 1);
	}

	return(value); // returning value
}
