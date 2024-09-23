#include<bits/stdc++.h>
using namespace std;

class matrix{
    public:
    int a[10][10] , b[10][10] , m[10][10] , r1 , c1 , r2 , c2 , i , j , k , sum ;
    void getmatrix();
    void calculation();
    void display();
};

void matrix::getmatrix(){
    cout << "Enter rows and columns for first matrix : ";
    cin >> r1 >> c1 ;
    cout << "Enter first matrix :" << endl ;
    for(i=0 ; i<r1 ; i++){
        for(j=0; j<c1 ;j++){
            cin >> a[i][j];
        }
    }
    cout << "Enter rows and columns for second matrix : ";
    cin >> r2 >> c2 ;
    cout << "Enter second matrix :" << endl ;
    for(i=0 ; i<r2 ; i++){
        for(j=0; j<c2 ;j++){
            cin >> b[i][j];
        }
    }
    if( c1 != r2){
        cout << "Multiplication is not possible !!" <<endl ;
    }
}

void matrix::calculation(){
    for(i=0 ; i < r1 ; i++){
        for(j=0 ; j < c2 ; j++){
            sum=0;
            for ( k=0 ; k < r1 ; k++){
                sum = sum + a[i][k]*b[k][j];
                m[i][j]=sum;
            }
        }
    }
}

void matrix::display(){
    if(c1==r2){
    cout << "The resultant matrix is : "<<endl;
    for(i=0 ; i < r1 ; i++ ){
        for(j=0 ; j < c2 ;j++){
            cout << m[i][j] << "  ";
        }
        cout << endl;
    }
    }
}

int main (){
    system("CLS");
    matrix x ;
    x.getmatrix();
    x.calculation();
    x.display();
    return 0;
}