#include <iostream>
#include<string>

using namespace std;

enum enIsNumberPerfectOrNotPerfect
{
	perfect=1,notPerfect=0
};

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


enIsNumberPerfectOrNotPerfect checkIfPerfectOrNotPerfect(int num) {
	if (sumAllDivisor(num) == num)
		return enIsNumberPerfectOrNotPerfect::perfect;
	else
		return enIsNumberPerfectOrNotPerfect::notPerfect;
}

void printResult(enIsNumberPerfectOrNotPerfect EnIsNumberPerfectOrNotPerfect) {
	if (EnIsNumberPerfectOrNotPerfect == enIsNumberPerfectOrNotPerfect::perfect)
		cout << "\nThe Number Is Perfect.\n";
	else
		cout << "\nThe Number Is Not Perfect.\n";
	
}

int main()
{
	
	printResult(checkIfPerfectOrNotPerfect(readNumber()));
}

