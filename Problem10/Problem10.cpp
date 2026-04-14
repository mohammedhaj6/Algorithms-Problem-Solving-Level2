#include <iostream>
using namespace std;

int readNumber() {
    int num;
    cout << "Enter Your Number ?\n";
    cin >> num;
    return num;
}


int numberReversed(int num) {

    int remainder, newNum = 0;
    while (num > 0) {
        remainder = num % 10;
        num = num / 10;
        newNum = newNum * 10 + remainder;

    }
    return newNum;



}


void printOrderFromLeftToRight(int num) {
    int remainder=0;

    while (num > 0) {
        remainder = num % 10;
        cout << remainder << endl;
        num /= 10;
    }

}

int main()
{
    printOrderFromLeftToRight(numberReversed(readNumber()));
}

