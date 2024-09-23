#include<bits/stdc++.h>
using namespace std;

class max_num{
    public:
    int i , j , n , a[1000] , max = 0 , position ;
    void getdata();
    void calculate();
    void display();
};

void max_num::getdata(){
    cout<<"Enter the number of numbers : ";
    cin >> n;
    cout << "Enter the numbers : " ;
    for (i=0 ; i<n ; i++){
        cin >> a[i] ;
    }
}

void max_num::calculate(){
    for(i=0;i<n;i++){
        if( a[i] > max ){
            max = a[i] ;
            position = i ;
        }
    }
}

void max_num::display(){
    cout << "The maximum number is : " << max << " , at index : " << position << endl ; 
}

int main(){
    system("CLS");
    max_num x;
    x.getdata();
    x.calculate();
    x.display();
    return 0;
}

