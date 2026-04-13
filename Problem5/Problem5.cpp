#include <iostream>
#include<string>

using namespace std;


int readNumbers() {
	int num;
	cout << "Enter Your Numbers ?\n";
	cin >> num;
	cout << endl;
	return num;
}

void reversedOrder(int num) {
	int remainder = 0;
	while (num>0) {
		remainder = num % 10;
		num = num / 10;
		cout << remainder << endl;
	}
}

int main()
{
	reversedOrder(readNumbers());
 }



