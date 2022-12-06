#include <iostream>
using namespace std;
int main(){

    // adjoint of 2 by 2 and 3 by 3 matrix
    int A[10][10],i,j,t[10][10],ch;
    cout << endl << endl;
    cout <<"1 = adjoint of 2 by 2 matrix"<<endl;
    cout <<"2 = adjoint of 3 by 3 matrix"<<endl;
    cout<< "enter your choice = ";
    cin >> ch;
    //for 2 by 2 matrix
    if (ch==1){
        cout << "Enter the matrix elements"<<endl;
        for (i=0;i<2;i++){
            for (j=0;j<2;j++){
                cin >> A[i][j];
            }
        }
        // display of matrix
        cout << "entered matrix is = "<<endl;
        for ( i=0;i<2;i++){
            for (j=0;j<2;j++){
                cout << A[i][j]<< " ";
            }
            cout << endl;
        }
        cout << endl;
        // swaping
        t[0][0] = A[0][0];
        t[1][1] = A[1][1];
        A[0][0] = t[1][1];
        A[1][1] = t[0][0];
        
        // invertion of signs of elements not in daigonal
        A[0][1] = -A[0][1];
        A[1][0] = -A[1][0];
        cout << "Adjoint of matrix is "<<endl;
        cout << A[0][0]<<" "<<A[0][1]<<endl<<A[1][0]<<" "<<A[1][1]<<endl;
    }
    // for 3 by 3 matrix
    else if (ch ==2){
        cout << " Enter matrix elements "<<endl;
        for (i=0;i<3;i++){
            for (j=0;j<3;j++){
                cin >> A[i][j];
            }
        }
        cout << "entered matrix is "<<endl;
        for (i=0;i<3;i++){
            for (j=0;j<3;j++){
                cout << A[i][j]<<" ";
            }
            cout << endl;
        }
        cout << endl;

        // inversion of elements for adjoint
        t[0][0] = ((A[1][1]*A[2][2])-(A[2][1]*A[1][2]));
        t[0][1] = -((A[1][0]*A[2][2])-(A[2][0]*A[1][2]));
        t[0][2] = ((A[1][0]*A[2][1])-(A[2][0]*A[1][1]));
        t[1][0] = -((A[0][1]*A[2][2])-(A[2][1]*A[0][2]));
        t[1][1] = ((A[0][0]*A[2][2])-(A[2][0]*A[0][2]));
        t[1][2] = -((A[0][0]*A[2][1])-(A[2][0]*A[0][1]));
        t[2][0] = ((A[0][1]*A[1][2])-(A[1][1]*A[0][2]));
        t[2][1] = -((A[0][0]*A[1][2])-(A[1][0]*A[0][2]));
        t[2][2] = ((A[0][0]*A[1][1])-(A[1][0]*A[0][1]));

        // swaping
        A[0][0] = t[0][0];
        A[0][1] = t[1][0];
        A[0][2] = t[2][0];
        A[1][0] = t[0][1];
        A[1][1] = t[1][1];
        A[1][2] = t[2][1];
        A[2][0] = t[0][2];
        A[2][1] = t[1][2];
        A[2][2] = t[2][2];
        //displaying of matrix
        cout << "adjoint of matrix is"<<endl;
        cout << " " <<A[0][0]<<" "<<A[0][1]<<" "<<A[0][2]<<" "<<endl;
        cout << " " <<A[1][0]<<" "<<A[1][1]<<" "<<A[1][2]<<" "<<endl;
        cout << " " <<A[2][0]<<" "<<A[2][1]<<" "<<A[2][2]<<" "<<endl;
    }
    else 
    cout << "no choice is available"<<endl;
    cout << endl << endl;



    // determinent of 2 by 2 and 3 by 3 matrix
    float det; int n,a;
    cout << "enter the order of matrix"<<endl;;
    cin >> n >> a;
    if ((n==2.0 && a==2.0)||(n==3 && a==3)){
    float arr[n][a];
    cout << "enter the elements of matrix"<<endl;
    for (int i=0;i<n;i++){
        for (int j=0;j<a;j++){
            cin >> arr[i][j];
        }
    }
    cout << "the matrix is"<<endl;
    for (int i=0;i<n;i++){
        for (int j=0;j<a;j++){
            cout <<" "<< arr[i][j]<<" ";
        }
        cout << endl;
    }
    if (n==2&&a==2){  // for 2 by 2 matrix
        det = arr[0][0]*arr[1][1]-arr[1][0]*arr[0][1];
        cout << "the determinent = "<< det << endl;
    }
    else if (n==3&&a==3){  // for 3 by 3 matrix
        det = arr[0][0]*(arr[2][2]*arr[1][1]-arr[1][2]*arr[2][1])-arr[0][1]*(arr[1][0]*arr[2][1]-arr[2][0]*arr[1][2])+arr[0][2]*(arr[1][0]*arr[2][1]-arr[2][0]*arr[1][1]);
        cout << "the determinent = "<< det << endl<<endl;
    }
}
else
cout << "error"<<endl;

// display of inverse
cout << "the inverse of matrix is "<<endl;
    for (i=0;i<n;i++){
        for (j=0;j<a;j++){
            cout<<  A[i][j]/det<<"    ";
            } 
        cout<<endl;
    }
}