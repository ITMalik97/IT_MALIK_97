#include <iostream>3
using namespace std;
int a,b;   // global variables
int main(){
    int det;
    cout << "enter the order of matrix"<<endl;;
    cin >> a >> b;
    int arr[a][b];
    cout << "enter the elements of matrix"<<endl;
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            cin >> arr[i][j];
        }
    }
    // display of matrix
    cout << "the matrix is"<<endl;
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            cout <<" "<< arr[i][j]<<" ";
        }
        cout << endl;
    }
    // determinent of 2 by 2 matrix
    if (a==2&&b==2){
        det = arr[0][0]*arr[1][1]-arr[1][0]*arr[0][1];
        cout << "the determinent = "<< det << endl;
    }
    // determinent of 3 by 3 matrix
    else if (a==3&&b==3){
        det = arr[0][0]*(arr[2][2]*arr[1][1]-arr[1][2]*arr[2][1])-arr[0][1]*(arr[1][0]*arr[2][1]-arr[2][0]*arr[1][2])+arr[0][2]*(arr[1][0]*arr[2][1]-arr[2][0]*arr[1][1]);
        cout << "the determinent = "<< det << endl;
    }
}