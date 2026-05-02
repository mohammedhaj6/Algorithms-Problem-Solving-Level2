#include <iostream>
#include<string>
#include<cmath>
#include <ctime>

using namespace std;

int readNumber() {
    int num;
    cout << "Enter The Number ?\n";
    cin >> num;
    return num;
}

int myAbs(int num) {
    if (num<0) {
        return -(num);
    }
    return num;

}
void printResult(int num) {
   cout <<"My Abs Result : " << myAbs(num) << endl <<"C++ Abs Result : " << abs(num)<<endl;
   
}

int main()
{
    printResult(readNumber());
}
