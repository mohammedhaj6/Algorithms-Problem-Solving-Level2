#include <iostream>
#include<string>

using namespace std;


string readAText() {
    string text;
    cout << "Enter your Text ? \n";
    getline(cin, text);
    return text;
}


string encryptText(string text , short encryptionKey) {

    for (int i = 0; i<= text.length() ; i++)
    {
       
        text[i] = char((int)text[i] + encryptionKey);

    }
    return text;
    

}

string decryptText(string encryptText, short encryptionKey) {

    for (int i = 0; i <= encryptText.length(); i++)
    {

        encryptText[i] = char((int)encryptText[i] - encryptionKey);

    }
    return encryptText;


}




int main()
{

   string  encrypt =   encryptText(readAText(),2);
      string decrypt = decryptText(encrypt, 2);

      cout << "\nText After Encryption :" << encrypt<<endl;
      cout << "Text After Decryption :" << decrypt << endl;
         
    
}
