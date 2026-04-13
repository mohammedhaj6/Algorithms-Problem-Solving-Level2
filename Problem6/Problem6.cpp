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

void sumOfDigits(int num) {

	int remainder ,sum = 0;

	while (num > 0) {
		remainder = num % 10;
		sum += remainder;
		num = num / 10;
	}
	cout<<"The Sum Of Digits = " << sum << endl;
}


int main()
{
	sumOfDigits(readNumber());

}

