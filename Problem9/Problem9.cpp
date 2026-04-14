#include <iostream>
using namespace std;

int readNumber() {
    int num;
    cout << "Enter Your Number ?\n";
    cin >> num;
    return num;
}

int countDigitFrequency(int num, int digit) {
    int counter = 0;
    int remainder;

    while (num > 0) {
        remainder = num % 10;

        if (remainder == digit)
            counter++;

        num /= 10;
    }

    return counter;
}

void digitFrequencyInTheNumber(int num) {

    //11223399

    for (int i = 0; i <= 9; i++) {
        int freq = countDigitFrequency(num, i);

        if (freq > 0) {
            cout << "Digit " << i << " Frequency is "
                << freq << " Times(s)\n";
        }
    }
}

int main() {
    digitFrequencyInTheNumber(readNumber());
}