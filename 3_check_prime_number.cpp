#include<bits/stdc++.h>
using namespace std;

class is_prime{
    public:
    int i , number , count = 0 ;
    void getnumber();
    void check();
    void display();
};

void is_prime::getnumber(){
    cout << "Enter number : ";
    cin >> number ;
}

void is_prime::check(){
    for( i=1 ; i <= number/2 ; i++){
        if(number % i == 0 ){
            count++;
        }
    }
}

void is_prime::display(){
    if(count==1){
        cout << number << " is a prime number." << endl;
    }
    else{
        cout << number << " is not a prime number."<< endl;
    }
}

int main (){
    system("CLS");
    is_prime x ;
    x.getnumber();
    x.check();
    x.display();
    return 0;
}