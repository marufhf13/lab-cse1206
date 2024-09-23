#include<bits/stdc++.h>
using namespace std;

class matrix{
    public:
    int a[10][10] , t[10][10] , r , c , i , j ;
    void getmatrix();
    void transpose();
    void display();
};

void matrix::getmatrix(){
    cout << "Enter xthe number of Rows and Columns : ";
    cin >> r >> c ;
    cout << endl << "Enter the matrix : "<<endl;
    for(i=0 ; i< r ; i++){
        for(j=0 ; j < c ; j++){
            cin >> a [i] [j];
        }
    }
}

void matrix::transpose(){
    for(i=0 ; i< r ; i++){
        for(j=0 ; j < c ; j++){
            t[i][j] = a[j][i] ;
        }
    }
}

void matrix::display(){
    cout<< "The transpose matrix is : "<<endl;
    for(i=0 ; i< r ; i++){
        for(j=0 ; j < c ; j++){
            cout << t[i][j]<<"  ";
        }
        cout << endl;
    }
}

int main(){
    system("CLS");
    matrix x;
    x.getmatrix ();
    x.transpose ();
    x.display ();
    return 0;
}