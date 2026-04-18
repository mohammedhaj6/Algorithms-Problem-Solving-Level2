#include <iostream>
#include<string>
#include<cmath>

using namespace std;

int randomNumber(int from, int to) {
    int num = rand() % (to - from + 1) + from;
    return num;
}

enum enCharType
{
    smallLetter = 1,capitalLetter = 2, specialCharacter = 3 ,digit = 4

};


char printRandomCharacter(enCharType charType) {

    switch (charType) {
    case enCharType::smallLetter: {
        return char (randomNumber(97, 122));
        break;
    }
    case enCharType::capitalLetter: {
        return char(randomNumber(65, 90));
        break;
    }
    case enCharType::specialCharacter: {
        return char(randomNumber(33, 47));
        break;
    }
    case enCharType::digit: {
        return char(randomNumber(48, 57));
        break;
    }
    }

}
int main()
{
    srand(time(0));
   cout<< printRandomCharacter(enCharType::smallLetter) <<endl;
   cout << printRandomCharacter(enCharType::capitalLetter) << endl;
   cout << printRandomCharacter(enCharType::specialCharacter) << endl;
   cout << printRandomCharacter(enCharType::digit) << endl;
 

}

