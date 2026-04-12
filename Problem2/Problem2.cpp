#include <iostream>
#include<string>

using namespace std;


enum enIsPrime
{
	prime = 1, NotPrime = 0
};

int readPositveNumber() {
	int num = 0;
	do
	{
		cout << "Enter A Positve Number  ?\n";
		cin >> num;
	} while (num <= 0);


	return num;
}

enIsPrime cheakIfPrimeOrNot(int num) {
	int m = sqrt(num);;

	for (int counter = 2; counter <= m; counter++)
	{
		if (num % counter == 0)
			return enIsPrime::NotPrime;
	}
	return enIsPrime::prime;
}

void printPrimeNumbersFrom1ToN(int num) {
	for (int i = 2; i <= num; i++)
	{
		if (cheakIfPrimeOrNot(i) == enIsPrime::prime)
			cout << endl << i << endl;
	}
}


int main()
{
	printPrimeNumbersFrom1ToN(readPositveNumber());
}
