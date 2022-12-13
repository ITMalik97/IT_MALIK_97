                                                                // Program for matrixes system //

#include <iostream>
using namespace std;

// declaration of global variables
int n, a, x, y, m, mat, rows, columns, b, ch, det, f, g;

// function declaration
void display(int, int);
void symmetric(int, int, int, int);
void identity(int, int, int);
void determinent(int, int);
void adjoint(int);
void inverse(int, int, int, float);
void solution(int, int, int, float, int, int);
int menu();

// main function
int main(){
    while(true){
        int p = menu();
            if (p == 1){  // display function
                display(n, a);  
            }
            else if (p == 2){   // symmetric function
                symmetric(m, n, x, y);
            }
            else if (p == 3){   // identity function
                identity(rows, columns, mat);
            }
            else if (p == 4){   // determinent function
                determinent(a, b);
            }
            else if (p == 5){   // adjoint function
                adjoint(ch);
            }
            else if (p == 6){   // inverse function
                inverse(ch, n, a, det);
            }
            else if (p == 7){   // solution function
                solution(ch, n, a, det, f, g);
            }
            else if (p == 8){   // function for quiting program
                cout << endl << endl << "********************  THANK YOU FOR USING THE PROGRAM  ********************"<<endl << endl << endl;
                break;
            }
            else 
            cout << "No other choice is availible"<<endl;
    }     
}

// menu function
int menu(){
    cout << endl << "**************************************************************"<<endl;
    cout << endl << "|                      MATRICES SYSYTEM                      |"<<endl;
    cout << endl << "|                Made by Muhammad Tabish Masood              |"<<endl;
    cout << endl << "**************************************************************"<<endl;
    cout << endl;
    cout << endl << "|------------------------=(WELCOME)=-------------------------|"<<endl;
    cout << endl << "| Menu :                                                     |"<<endl;
    cout << endl << "|------------------------------------------------------------|"<<endl;
    cout << endl << "|1:   Display matrix                                         |"<<endl;
    cout << endl << "|2:   Check the matrix is symmetric or not                   |"<<endl;
    cout << endl << "|3:   Check the matrix is identity or not                    |"<<endl;
    cout << endl << "|4:   Find determinent of matrix                             |"<<endl;
    cout << endl << "|5:   Find adjoint of matrix                                 |"<<endl;
    cout << endl << "|6:   Find inverse of matrix                                 |"<<endl;
    cout << endl << "|7:   Find solution of a matrix                              |"<<endl;

    cout << endl << "|8:   Exit the program                                       |"<<endl;
    cout << endl << "--------------------------------------------------------------"<<endl;
   
    // initialization of variable to control the menu above mentioned
    int p;  
    cout << "Enter your choice ( 1 - 8)  :  ";  
    cin >> p;
    cout << endl;

    return p;  
}

// Displaying martix
void display(int n, int a){
    cout << "Enter the order of matrix"<<endl;
	cin>>n>>a;
	int arr[n][a];
	cout << "Enter the elements of matrix"<<endl;
    for ( int i=0;i<n;i++){
		for (int j=0;j<a;j++){
			cin>> arr[i][j];
		}
	}
	// display of matrix
	cout <<endl << " Matrix is "<<endl;        
	for (int i=0;i<n;i++){
		for (int j=0;j<a;j++){
			cout <<"   "<< arr[i][j] <<" ";
		}
		cout << endl;
	}
}

// checking the matrix if it is symmetric or not
void symmetric(int m, int n, int x, int y){
    int A[10][10], i, j; 
    x = 0, y = 0;
    cout << "Enter order of matrix"<<endl;
    cin >> m >> n;
    cout << "Enter the matrix elements"<<endl;
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            cin >> A[i][j];
        }
    }
    cout << " the matrix is " << endl;
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            cout << " " << A[i][j] << " ";
        }
        cout << endl;
    }
    // checking the matrix wether it is symmetric or not
    for (i = 0; i < m; i++){
        for( j = 0; j < n; j++){
            if (A[i][j] != A[j][i])
                x = 1;
            else if (A[i][j] == -A[j][i])
                    y = 1;
        }
    }
    if (x == 0)
        cout << "The matrix is symmetric."<<endl;
    else
        cout << "It is not symetric."<<endl;
    for (i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }

// checking the matrix if it is identity or not
void identity(int rows, int columns, int mat){
    int i, j;
    mat = 1;
	
	cout << "Enter the order of matrix"<<endl;
	cin >> i >> j;
	
	int Matrix[i][j];
	
	cout << "Enter the elements of matrix"<<endl;
	for(rows = 0; rows < i; rows++){
		for(columns = 0; columns < i; columns++){
			cin >> Matrix[rows][columns];
		}		
	}
    	cout << "The matrix is "<<endl;
	for (rows=0;rows<i;rows++){
		for (columns=0;columns<j;columns++){
			cout << " " << Matrix[rows][columns] << " ";
		}
		cout << endl;
	}

 	for(rows = 0; rows < i; rows++){
   		for(columns = 0; columns < j; columns++){
			
            //checking the matrix wether the matrix is identity or not
    		if(Matrix[rows][columns] != 1 && Matrix[columns][rows] != 0)
    		{
    			mat = 0;
    			break;
			}
   	 	}
  	}
  	if(mat == 1){
  		cout << "The matrix is an identity matrix"<<endl;
	}
	else{
		cout << "The matrix is not an identity matrix"<<endl;
	}  	
}

// finding determinent of matrix
void determinent(int a, int b){
    int det;
    cout << "Enter the order of matrix"<<endl;;
    cin >> a >> b;
    int arr[a][b];
    cout << "Enter the elements of matrix"<<endl;
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            cin >> arr[i][j];
        }
    }
    // display of matrix
    cout << "The matrix is"<<endl;
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            cout <<" "<< arr[i][j]<<" ";
        }
        cout << endl;
    }
    // determinent of 2 by 2 matrix
    if (a==2&&b==2){
        det = arr[0][0]*arr[1][1]-arr[1][0]*arr[0][1];
        cout << "The determinent = "<< det << endl;
    }
    // determinent of 3 by 3 matrix
    else if (a==3&&b==3){
        det = arr[0][0]*(arr[2][2]*arr[1][1]-arr[1][2]*arr[2][1])-arr[0][1]*(arr[1][0]*arr[2][1]-arr[2][0]*arr[1][2])+arr[0][2]*(arr[1][0]*arr[2][1]-arr[2][0]*arr[1][1]);
        cout << "The determinent is : "<< det << endl;
    }
}

// finding adjoint of matrix
void adjoint(int ch){
    int A[10][10],i,j,t[10][10];
    cout <<"1 : Adjoint of 2 by 2 matrix"<<endl;
    cout <<"2 : Adjoint of 3 by 3 matrix"<<endl;
    cout<< "Enter your choice : ";
    cin >> ch;
    //for 2 by 2 matrix
    if (ch==1){
        cout << "Enter the matrix elements"<<endl;
        for (i=0;i<2;i++){
            for (j=0;j<2;j++){
                cin >> A[i][j];
            }
        }
        cout << "Entered matrix is"<<endl;
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
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            cout <<" "<< A[i][j] << " ";
        }
        cout << endl;
    }
    }
    // for 3 by 3 matrix
    else if (ch ==2){
        cout << " Enter matrix elements "<<endl;
        for (i=0;i<3;i++){
            for (j=0;j<3;j++){
                cin >> A[i][j];
            }
        }
        cout << "Entered matrix is "<<endl;
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

        // swaping of elements for adjoint 
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
        cout << "Adjoint of matrix is"<<endl;
        for (int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                cout << " " << A[i][j] << " ";
            }
            cout << endl;
        }
    }
    else 
    cout << "No choice is available"<<endl;
}

// finding inverse of a matrix
void inverse(int ch, int n, int a, float det){
        // adjoint of 2 by 2 and 3 by 3 matrix
    int A[10][10],i,j,t[10][10];
    cout << endl << endl;
    cout <<"1 : Adjoint of 2 by 2 matrix"<<endl;
    cout <<"2 : Adjoint of 3 by 3 matrix"<<endl;
    cout<< "Enter your choice = ";
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
        cout << "Entered matrix is"<<endl;
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
        for (int i=0;i<2;i++){
            for (int j=0;j<2;j++){
                cout << " " << A[i][j] << " " ;
            }
            cout << endl;
        }
    }
    // for 3 by 3 matrix
    else if (ch ==2){
        cout << " Enter matrix elements "<<endl;
        for (i=0;i<3;i++){
            for (j=0;j<3;j++){
                cin >> A[i][j];
            }
        }
        cout << "Entered matrix is "<<endl;
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
        cout << "Adjoint of matrix is"<<endl;
        for (int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                cout << " " << A[i][j] << " " ;
            }
            cout << endl;
        }
    }
    else 
    cout << "No choice is available"<<endl;
    cout << endl << endl;

    // determinent of 2 by 2 and 3 by 3 matrix
    cout << "Enter the order of matrix"<<endl;;
    cin >> n >> a;
    if ((n==2.0 && a==2.0)||(n==3 && a==3)){
    float arr[n][a];
    cout << "Enter the elements of matrix"<<endl;
    for (int i=0;i<n;i++){
        for (int j=0;j<a;j++){
            cin >> arr[i][j];
        }
    }
    cout << "The matrix is"<<endl;
    for (int i=0;i<n;i++){
        for (int j=0;j<a;j++){
            cout <<" "<< arr[i][j]<<" ";
        }
        cout << endl;
    }
    if (n==2&&a==2){  // for 2 by 2 matrix
        det = arr[0][0]*arr[1][1]-arr[1][0]*arr[0][1];
        cout << "The determinent is : "<< det << endl;
    }
    else if (n==3&&a==3){  // for 3 by 3 matrix
        det = arr[0][0]*(arr[2][2]*arr[1][1]-arr[1][2]*arr[2][1])-arr[0][1]*(arr[1][0]*arr[2][1]-arr[2][0]*arr[1][2])+arr[0][2]*(arr[1][0]*arr[2][1]-arr[2][0]*arr[1][1]);
        cout << "The determinent is : "<< det << endl<<endl;
    }
}
else
cout << "Error"<<endl;

// display of inverse
cout << "The inverse of matrix is "<<endl;
    for (i=0;i<n;i++){
        for (j=0;j<a;j++){
            cout<<  A[i][j]/det<<"    ";
            } 
        cout<<endl;
    }
}

// finding solution of matrix
// by matrix inversion method
void solution(int ch, int n, int a, float det, int f, int g){
     // adjoint of 2 by 2 and 3 by 3 matrix
    int A[10][10],i,j,t[10][10];
    cout << endl << endl;
    cout <<"1 : Adjoint of 2 by 2 matrix"<<endl;
    cout <<"2 : Adjoint of 3 by 3 matrix"<<endl;
    cout<< "Enter your choice = ";
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
        cout << "Entered matrix is"<<endl;
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
        for (int i=0;i<2;i++){
            for (int j=0;j<2;j++){
                cout << " " << A[i][j] << " ";
            }
            cout << endl;
        }
    }
    // for 3 by 3 matrix
    else if (ch ==2){
        cout << " Enter matrix elements "<<endl;
        for (i=0;i<3;i++){
            for (j=0;j<3;j++){
                cin >> A[i][j];
            }
        }
        cout << "Entered matrix is "<<endl;
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
        cout << "Adjoint of matrix is"<<endl;
        for (int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                cout << " " << A[i][j] << " ";
            }
            cout << endl;
        }
    }
    else 
    cout << "No choice is available"<<endl;
    cout << endl << endl;

    // determinent of 2 by 2 and 3 by 3 matrix
    cout << "Enter the order of matrix"<<endl;;
    cin >> n >> a;
        int B[n][a];
    if ((n==2.0 && a==2.0)||(n==3 && a==3)){
    float arr[n][a];
    cout << "Enter the elements of matrix"<<endl;
    for (int i=0;i<n;i++){
        for (int j=0;j<a;j++){
            cin >> arr[i][j];
        }
    }
    cout << "The matrix is"<<endl;
    for (int i=0;i<n;i++){
        for (int j=0;j<a;j++){
            cout <<" "<< arr[i][j]<<" ";
        }
        cout << endl;
    }
    if (n==2&&a==2){  // for 2 by 2 matrix
        det = arr[0][0]*arr[1][1]-arr[1][0]*arr[0][1];
        cout << "The determinent is :"<< det << endl;
    }
    else if (n==3&&a==3){  // for 3 by 3 matrix
        det = arr[0][0]*(arr[2][2]*arr[1][1]-arr[1][2]*arr[2][1])-arr[0][1]*(arr[1][0]*arr[2][1]-arr[2][0]*arr[1][2])+arr[0][2]*(arr[1][0]*arr[2][1]-arr[2][0]*arr[1][1]);
        cout << "The determinent is : "<< det << endl<<endl;
    }
}
else
cout << "Error"<<endl;

int inverse[n][a];   //creating matrix for storing inverse
// display of inverse
cout << "The inverse of matrix is "<<endl;
    for (i=0;i<n;i++){  
        for (j=0;j<a;j++){
            cout<<  A[i][j]/det<<"    ";
           inverse[i][j]=A[i][j]/det; 
           } 
        cout<<endl;
    }

    // matix inversion method 
    cout << "Enter matrix (B) order"<<endl;
    cin >> f >> g;
    float arr[f][g];
    cout << "Enter matrix(B) elements"<<endl;
    if (f==2&&g==1){
        for (int i=0;i<f;i++){
            for (int j=0;j<g;j++){
                cin>> arr[i][j];
            }
        }
        cout <<endl<< "The matrx (B) is "<<endl;
        cout << endl;
        for (int i=0;i<f;i++){
            for (int j=0;j<g;j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    else if (f==3 && g==1){
         for (int i=0;i<f;i++){
            for (int j=0;j<g;j++){
                cin>> arr[i][j];
            }
        }
        cout <<endl<< "The matrx (B) is "<<endl;
        cout << endl;
        for (int i=0;i<f;i++){
            for (int j=0;j<g;j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    else {
        cout << "Error"<<endl;
        cout << " Enter matrix (B) order"<<endl;
        cin >> f >> g;
        int arr[f][g];
        cout << "Enter matrix(B) elements"<<endl;
    if (f==2 && g==1){
        for (int i=0;i<f;i++){
            for (int j=0;j<g;j++){
                cin>> arr[i][j];
            }
        }
        cout << endl;

        cout <<endl<< "The matrix (B) is "<< endl;
        for (int i=0;i<f;i++){
            for (int j=0;j<g;j++){
                cout << arr[i][j] << " ";
                B[i][j] = arr[i][j];
            }
            cout << endl;
            }
        }
        if (f==3 && g==1){
         for (int i=0;i<f;i++){
            for (int j=0;j<g;j++){
                cin>> arr[i][j];
            }
        }
        cout <<endl<< "The matrx (B) is "<<endl;
        cout << endl;
        for (int i=0;i<f;i++){
            for (int j=0;j<g;j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    }
    cout << "The value of X is "<<endl;
    for(int i=0; i<n; i++){
    cout << inverse[i][1]*B[1][i] + inverse[i][1]*B[1][i]<<" ";
    cout<<endl;
    }
}

                                                            // ------------ End Of Project ------------ //
