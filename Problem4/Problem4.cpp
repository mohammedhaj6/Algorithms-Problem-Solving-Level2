#include <iostream>
#include<string>

using namespace std;



int readNumber() {
	int num;
	cout << "Enter Your Number ?\n";
	cin >> num;
	return num;
}

int sumAllDivisor(int num) {
	int sum = 0;

	for (int i = 1; i < num; i++)
	{
		if (num % i == 0)
			
			sum += i;
	}
	return sum;
}

bool isPerfect(int num) {
	return sumAllDivisor(num) == num;
 }

void printPerfectNumbersFrom1ToN(int num) {
	for (int i = 1; i < num; i++)
	{
		if (isPerfect(i))
			cout << endl << i<<endl;
	}
	
}

int main()
{
	printPerfectNumbersFrom1ToN(readNumber());
}


