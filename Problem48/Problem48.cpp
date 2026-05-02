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


int myFloor(float num) {

    if (num<0) {
        return num - 1;
    }
        return int(num);

}


void printResult(float num) {
    cout << "My Floor Result : " << myFloor(num) << endl << "C++ Floor Result : " << floor(num) << endl;

}


int main()
{


    printResult(readNumber());

}
