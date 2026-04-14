#include <iostream>
#include<string>
using namespace std;

int readNumber() {
	int num;
	cout << "Enter Your Number ?\n";
	cin >> num;
	cout << endl;
	return num;
}

int readDigit() {
	int digit;
	cout << "Enter Your Digit ?\n";
	cin >> digit;
	cout << endl;
	return digit;	
}

void CountDigitFrequency(int digit, int num) {
	int remainder,counter = 0;
	

	while (num > 0) {
		
		remainder = num % 10;
		num = num / 10;
		if (digit== remainder) {
			counter++;
		}
		

	}
	cout << "Digit " << digit <<" Frequency is "  << counter << " Times(s)\n";
}

int main() {
	CountDigitFrequency(readDigit(), readNumber());
}