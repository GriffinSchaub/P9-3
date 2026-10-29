//
//
//
//
//

#include <iostream>
#include <string>

using namespace std;

int romanCharValue(char r);

int main(void) {

	char inputRomanNumeral ;



	while (true) {
		cout << "Enter a word and this program will count the words or enter Q or q to exit: ";
		cin >> inputRomanNumeral;
		if (inputRomanNumeral == 'Q' || inputRomanNumeral == 'q') break;
		cout << endl << romanCharValue( inputRomanNumeral) << endl;
	}

}


int romanCharValue(char r) {

	int value =0;

	if (r == 'I') {
		value = value + 1;
	}
	if (r == 'V') {
		value = value + 5;
	}
	if (r == 'X') {
		value = value + 10;
	}
	if (r == 'L') {
		value = value + 50;
	}
	if (r == 'C') {
		value = value + 100;
	}
	if (r == 'D') {
		value = value + 500;
	}
	if (r == 'M') {
		value = value + 1000;
	}
	return(value);
}
