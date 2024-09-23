#include<bits/stdc++.h>
using namespace std;

class calculate_sum{
    public:
    int i , j , sum = 0 , count = 0;
    void calculate();
    void display();
};

void calculate_sum::calculate(){
    for(i=1 ; i<=100 ; i++ ){
        for(j=1 ; j<=i ; j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            sum+=i;
        }
        count = 0;
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