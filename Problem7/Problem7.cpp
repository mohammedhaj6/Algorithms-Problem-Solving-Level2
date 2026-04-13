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

void numberReversed(int num) {

	int remainder,newNum = 0;
	while (num > 0) {
		remainder = num % 10;
		num = num / 10;
		newNum = newNum * 10 + remainder;

	}
	cout << "\nReverse is:\n"<< newNum<<endl;

	 
	
}

int main()
{
	numberReversed(readNumber());
}

