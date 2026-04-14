#include <iostream>
#include<string>

using namespace std;

int readNumber() {
    int num;
    cout << "Enter Your Number ?\n";
    cin >> num;
    return num;
}
 
int reversedNum(int num) {
    int remainder, newNum=0;

    while (num > 0) {
        remainder = num % 10;
        num /= 10;
        newNum = newNum * 10 + remainder;
    }
    return newNum;
    
}

void ifPalindromeNumber(int num) {
    if (num == reversedNum(num))
        cout << "\nYes , it is a palindrome number.\n";
    else
        cout << "\nNo , it is not a palindrome number.\n";
}

int main()
{
    ifPalindromeNumber(readNumber());
}

