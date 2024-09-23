#include<bits/stdc++.h>
using namespace std;

class matrix{
    public:
    int a[100][100] , b[100][100] , sum[100][100] , r , c , i , j ;
    void getmatrix();
    void add();
    void display();
};

void matrix::getmatrix(){
    cout << "Enter the number of Rows and Columns : ";
    cin >> r >> c ;
    cout << endl << "Enter the  1st matrix : "<<endl;
    for(i=0 ; i< r ; i++){
        for(j=0 ; j < c ; j++){
            cin >> a [i] [j];
        }
    }
    cout << endl << "Enter the  2nd matrix : "<<endl;
    for(i=0 ; i< r ; i++){
        for(j=0 ; j < c ; j++){
            cin >> b [i] [j];
        }
    }

}

void matrix::add(){
    for(i=0 ; i< r ; i++){
        for(j=0 ; j < c ; j++){
            sum[i][j] = a[i][j]+ b[i][j] ;
        }
    }
}

void matrix::display(){
    cout<< "The resultant matrix is : "<<endl;
    for(i=0 ; i< r ; i++){
        for(j=0 ; j < c ; j++){
            cout << sum[i][j]<<"  ";
        }
        cout << endl;
    }
}

int main(){
    system("CLS");
    matrix x;
    x.getmatrix ();
    x.add ();
    x.display ();
    return 0;
}