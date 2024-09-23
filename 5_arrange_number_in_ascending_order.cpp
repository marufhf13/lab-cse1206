#include<bits/stdc++.h>
using namespace std;

class arrange{
    public:
    int i , j , n , a[1000];
    void getdata();
    void calculate();
    void display();
};

void arrange::getdata(){
    cout<<"Enter the number of numbers : ";
    cin >> n;
    cout << "Enter the numbers : " ;
    for (i=0 ; i<n ; i++){
        cin >> a[i] ;
    }
}

void arrange::calculate(){
    for(i=0;i<n;i++){
        for(j=0;j<(n-i);j++){
            if(a[j]>a[j+1]){
                swap( a[j] , a[j+1]);
            }
            
        }
        
    }
}

void arrange::display(){
    for ( i = 0; i < n; i++)
    {
        cout << a[i] << " " ;
    }
    cout << endl ;  
}

int main(){
    system("CLS");
    arrange x;
    x.getdata();
    x.calculate();
    x.display();
    return 0;
}

