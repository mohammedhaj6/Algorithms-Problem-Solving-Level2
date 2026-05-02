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

int mySqrt(float num) {
  
    return pow(num, 0.5);


}
void printResult(float num) {
    cout << "mySqrt Result : " << mySqrt(num) << endl << "C++ Sqrt Result : " << sqrt(num) << endl;

}

int main()
{


    printResult(readNumber());

}
