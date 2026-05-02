#include <iostream>
#include<string>
#include<cmath>
#include <ctime>

using namespace std;

float readNumber() {
    float num;
    cout << "Enter The Number ?\n";
    cin >> num;
    return  num;
}

int myCeil(float num) {
    if (num == int(num)) {
        return num; 
    }

    if (num > 0) {
        return int(num) + 1;
    }

    return int(num);
}
void printResult(float num) {
    cout << "MyCeil Result : " << myCeil(num) << endl << "C++ Ceil Result : " << ceil(num) << endl;

}

int main()
{


    printResult(readNumber());

}
