#include <iostream>
#include<string>
#include<cmath>

using namespace std;

short readInput() {
    short num;
    cout << "Enter How Many Keys To Generate ?\n";
    cin >> num;
    cout << endl;
    return num;
}


int randomNumber(int from, int to) {
    int num = rand() % (to - from + 1) + from;
    return num;
}

enum enCharType
{
    smallLetter = 1, capitalLetter = 2, specialCharacter = 3, digit = 4

};


char printRandomCharacter(enCharType charType) {

    switch (charType) {
    case enCharType::smallLetter: {
        return char(randomNumber(97, 122));
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


string generateWord(enCharType charType ,short length) {

    string word = "";

    for (int i = 1; i <= length; i++)
    {

        word = word + printRandomCharacter(charType);

    }
    return word;

}

string generateKey() {

    string key = "";
    key = key + generateWord(enCharType::capitalLetter,4)+"-";
    key = key + generateWord(enCharType::capitalLetter, 4) + "-";
    key = key + generateWord(enCharType::capitalLetter, 4) + "-";
    key = key + generateWord(enCharType::capitalLetter, 4);
    return key;
}

void generateKeys(short numberOfKeys) {

    for (int i = 1; i <= numberOfKeys; i++) {
        cout << "Key" << "[" << i << "]"<<": ";
        cout << generateKey();
        cout << endl;2
    }
       
}









//int randomNumber(int from, int to) {
//    int num = rand() % (to - from + 1) + from;
//    return num;
//}
//
//char getKeys() {
//    return char(randomNumber(65, 90));
//}
//
//void printKeys(int num) {
//   
//    for (int i = 1; i <= num; i++)
//    { 
//        cout << "Key" <<"["<< i <<"]" << ":";
//        for (int k = 0; k < 4; k++)
//        {
//            for (int j = 0; j < 4; j++)
//            {
//                cout << getKeys();
//            }
//            if (k == 3) {
//                break;
//            }
//            cout << "-";
//        }
//        cout << endl;
//         
//    }
//
//
// }






int main()
{
    srand(time(0));
    generateKeys(readInput());
   /* printKeys(readInput());*/
}

