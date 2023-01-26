#include <iostream>
#include <cctype>
using namespace std;

int main(){
    int lower = 0, upper = 0;
    string word;
    cin>>word;
    for(int i = 0; i < word.size();  i++){
        if(word[i] >= 'A' && word[i] <= 'Z'){
            upper++;
        }
        else if(word[i] >= 'a' && word[i] <= 'z'){
            lower++;
        }
    }
    if(upper == lower){
        for(int i = 0; i < word.size(); i++){
            putchar(tolower(word[i]));
        }
    }
    else if(upper > lower){
        for(int i = 0; i < word.size(); i++){
            putchar(toupper(word[i]));
        }
    }
    else if(upper < lower){
        for(int i = 0; i < word.size(); i++){
            putchar(tolower(word[i]));
        }
    }
    return 0;
}
