#include<bits/stdc++.h>
using namespace std ;

class fact {
    private: 
    int i , n , f ;
    public:
    void getdata(){
        cin >> n ;
    }

    void calculate() ;

    void display(){
        cout << "Factorial of "<< n <<" is : "<< f << endl ;
    }

};

void fact::calculate(){
    f=1;
    for(i=1;i<=n;i++){
        f=f*i;
    }
}

int main(){
    fact x ;
    x.getdata();
    x.calculate();
    x.display();
    return 0;
}
    