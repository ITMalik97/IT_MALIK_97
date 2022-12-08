#include <iostream>
using namespace std;
int main(){
    int A[10][10],i,j,t[10][10],ch;
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
        cout << "entered matrix is = "<<endl;
        for ( i=0;i<2;i++){
            for (j=0;j<2;j++){
                cout << A[i][j]<< " ";
            }
            cout << endl;
        }
        cout << endl;
        t[0][0] = A[0][0];
        t[1][1] = A[1][1];
        A[0][0] = t[1][1];
        A[1][1] = t[0][0];

        // inersion of signs of elements other than daigonal
        A[0][1] = -A[0][1];
        A[1][0] = -A[1][0];
        // display of adjoint 
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
        t[0][0] = ((A[1][1]*A[2][2])-(A[2][1]*A[1][2]));
        t[0][1] = -((A[1][0]*A[2][2])-(A[2][0]*A[1][2]));
        t[0][2] = ((A[1][0]*A[2][1])-(A[2][0]*A[1][1]));
        t[1][0] = -((A[0][1]*A[2][2])-(A[2][1]*A[0][2]));
        t[1][1] = ((A[0][0]*A[2][2])-(A[2][0]*A[0][2]));
        t[1][2] = -((A[0][0]*A[2][1])-(A[2][0]*A[0][1]));
        t[2][0] = ((A[0][1]*A[1][2])-(A[1][1]*A[0][2]));
        t[2][1] = -((A[0][0]*A[1][2])-(A[1][0]*A[0][2]));
        t[2][2] = ((A[0][0]*A[1][1])-(A[1][0]*A[0][1]));

        // inversion of elements for adjoint 
        A[0][0] = t[0][0];
        A[0][1] = t[1][0];
        A[0][2] = t[2][0];
        A[1][0] = t[0][1];
        A[1][1] = t[1][1];
        A[1][2] = t[2][1];
        A[2][0] = t[0][2];
        A[2][1] = t[1][2];
        A[2][2] = t[2][2];
        //displaying of adjoint 
        cout << "adjoint of matrix is"<<endl;
        cout << " " <<A[0][0]<<" "<<A[0][1]<<" "<<A[0][2]<<" "<<endl;
        cout << " " <<A[1][0]<<" "<<A[1][1]<<" "<<A[1][2]<<" "<<endl;
        cout << " " <<A[2][0]<<" "<<A[2][1]<<" "<<A[2][2]<<" "<<endl;
    }
    else 
    cout << "no choice is available"<<endl;
}
