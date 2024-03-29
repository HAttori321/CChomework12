#include <iostream>
#include <string>
using namespace std;

//string RemoveSymbols(char* str, int index) {
//    if (index < 0) {
//        return str;
//    }
//    else {
//        string result;
//        for (int i = 0; str[i] != '\0'; ++i) {
//            if (i != index) {
//                result += str[i];
//            }
//        }
//        return result;
//    }
//}

//string RemoveEntering(char* str1, char ch) {
//    string result1;
//    for (int i = 0; str1[i] != '\0'; ++i) {
//        if (str1[i] != ch) {
//            result1 += str1[i];
//        }
//    }
//    return result1;
//}

//void EnterSymbols(char inString[], int position, char ch) {
//        int length = 0;
//        while (inString[length] != '\0') {
//            length++;
//        }
//        if (position < 0 || position > length) {
//            cout << "The position is out of line." << endl;
//            return;
//        }
//        for (int i = length; i >= position; i--) {
//            inString[i + 1] = inString[i];
//        }
//    
//    
//        inString[position] = ch;
//    }

int main() {
    //Task1
    /*char str[] = "0123456789";
    int RemoveNumIndex;
    cout << "Enter number to remove:(0-9) ";
    cin >> RemoveNumIndex;
    string result = RemoveSymbols(str, RemoveNumIndex);
    cout << "Result: " << result << endl;*/
    //Task2
    /*char str1[] = "112345677788899";
    char ToRemoveEntering;
    cout << "Enter entering to remove: ";
    cin >> ToRemoveEntering;
    string result1 = RemoveEntering(str1, ToRemoveEntering);
    cout << "Result: " << result1 << endl;*/
    //Task3
    /*int InsertPosition;
        char SymbolsInsert;
        char InputString[100] = "0123456789101112131415";
        cout << "Enter position,please : " << endl;
        cin >> InsertPosition;
        cout << "Enter symbol,please. : " << endl;
        cin >> SymbolsInsert;
    
    
        EnterSymbols(InputString, InsertPosition, SymbolsInsert);
        cout << "Result: " << InputString << endl;*/

    //Task4
    /*const int MaxLength = 1000;
    char string[MaxLength];
    cout << "Enter list: ";
    cin.getline(string, MaxLength);
    char symbolOklic = '!';
    
        for (int i = 0; string[i] != '\0'; ++i) {
            if (string[i] == '.'){
                string[i] = symbolOklic;
            }
        }
        cout<<  string << endl;*/

}