#include<bits/stdc++.h>
using namespace std;

class calculate_sum{
    public:
    int i , sum = 0 ;
    void calculate();
    void display();
};

void calculate_sum::calculate(){
    for(i=2 ; i<=100 ; i+=2 ){
        sum += i;
    }
}

void calculate_sum::display(){
    cout << "The summation is : "<< sum << endl ;
}

int main(){
    system("CLS"); //for clear output screen 
    calculate_sum x;
    x.calculate();
    x.display();
    return 0;
}