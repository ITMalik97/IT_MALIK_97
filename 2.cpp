// Calculator Program

#include <iostream>
using namespace std;

// global variables
int a, b;

// functions
void add(int, int);
void sub(int, int);
void mul(int, int);
void divi(int, int);
int menu();
int input();

// input function for seperate inpu
int input(){
    cout << endl;
    cout << "enter the numbers"<<endl;
    cin >> a >> b;
    return a;
    return b;
}

int menu(){
    int c = input();
    cout << "MENU:"<<endl;
    cout << endl;
    cout << "1: |  Addition        |"<<endl<<endl;
    cout << "2: |  Subtraction     |"<<endl<<endl;
    cout << "3: |  Multiplication  |"<<endl<<endl;
    cout << "4: |  Division        |"<<endl<<endl;
    cout << "5: |  Exit            |"<<endl<<endl;

   
    int n;
    cout << endl;
    cout << "enter the number = ";
    cin >> n;

    return n;
    }

int main(){
    while(true){

    int n=menu();
    if (n == 1){
        add(a, b);
    }
    else if (n == 2){
        sub(a, b);
    }
    else if (n == 3){
        mul(a, b);
    }
    else if (n == 4){
        divi(a, b);
    }
    else if (n == 5){
        cout << endl;
        cout << "Thank you for using the program"<<endl;
        break;
    }
    else 
        cout << "no choice availible"<<endl;
    }
}

void add(int a, int b){
    int z = a + b;
    cout << "The sum is = "<< z << endl;
}

void sub(int a, int b){
    int z = a - b;
    cout << "the difference is = "<< z << endl;
}

void mul(int a, int b){
    int z = a * b;
    cout << "the product is = "<< z << endl;
}

void divi(int a, int b){
    int z = a / b;
    cout << "the answer is = "<< z << endl;
}