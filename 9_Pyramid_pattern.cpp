#include<bits/stdc++.h>
using namespace std;

class pyramid{
    
    int n , i , j , k ;
    public:
    void getrow();
    void calculation();
    void display();
};

void pyramid::getrow(){
    cout << "Enter row of pyramid : ";
    cin >> n ;
}

void pyramid::calculation(){
    for(i=1 ; i<=n ; i++){
        for(k=(n-i) ; k > 0 ; k--){
            cout << " ";
        }
        for(j=1 ; j<=i ; j++){
            cout<<"* ";
        }
        cout << endl ;
    }
}

void pyramid::display(){
    cout << "The pyramid is : "<<endl;
}

int main(){
    system("CLS");
    pyramid x;
    x.getrow();
    x.display();
    x.calculation();
    return 0;
}
