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

float myAbs(float num) {
    if (num < 0) {
        return -(num);
    }
    return num;

}

int myRound(float  num) {
  
   
       float newNum = myAbs(num)  - int(myAbs(num));
   
   

       if (newNum >= .5) {
           if (num < 0) {
               return int((num) - 1);
           }
           else
           {
               return int(myAbs(num) + 1);
           }
       }
       else
       {
           return int(num);
       }
      
   
}
void printResult(float num) {
    cout << "My Round Result : " << myRound(num) << endl << "C++ Round Result : " << round(num) << endl;

}

int main()
{

 
    printResult(readNumber());
  
}
