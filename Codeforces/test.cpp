#include <iostream>
using namespace std;

/// Function to make a string uppercase
void toUpper(char str[], int size){
    for(int i = 0; i < size; i++){
        if(str[i] >= 'a' and str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
    }
}
/// Function that print a given string
void printString(char str[], int size){
    for(int i = 0; i < size; i++){
        cout << str[i];
    }
    cout << "\n";
}
int main(){
    char str[6] = "abcd$";

    // Solution of Q1---------
    toUpper(str, 6); /// Make to upper string str[]
    printString(str, 6); /// Print str - ABCD$
}