#include <iostream>
#include<string>
#include<cmath>

using namespace std;

int randomNumber(int from, int to) {
    int num = rand() % (to - from + 1) + from;
    return num;
}


int main()
{
	srand(time(0));

cout << randomNumber(1,10)  << endl;
cout << randomNumber(1, 10) << endl;
cout << randomNumber(1, 10) << endl;


}

