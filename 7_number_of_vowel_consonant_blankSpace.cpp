#include<bits/stdc++.h>
using namespace std;

class sentense{
    public:
    string s ;
    int vowel = 0 , consonant = 0 , space = 0 ;
    void get();
    void calculation();
    void display();
};

void sentense::get(){
    cout <<"Enter your Text : "<<endl;
    getline(cin , s);
}

void sentense::calculation(){
    for(int i = 0 ; s[i] != '\0' ; i++){
        if( s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]== 'U'){
            vowel++;
        }
        else if( s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'){
            consonant++;
        }
        else if( s[i] == ' '){
            space++;
        }
    }
}

void sentense::display(){
    cout << "Vowels = "<<vowel<<endl;
    cout << "consonents = "<<consonant<<endl;
    cout << "Blank Spaces = "<<space<<endl;
}

int main (){
    system("CLS");
    sentense x;
    x.get();
    x.calculation();
    x.display();
    return 0;
}