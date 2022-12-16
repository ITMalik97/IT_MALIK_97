#include <iostream>
using namespace std;
int main(){
    int n, i;
    float num[100], sum=0.0, average;
    cout << "Enter the numbers of data: ";
    cin >> n;
    while (n > 100 || n <= 0){
        cout << "Error!"<<endl;
        cout << "number should in range of (1 to 100)" << endl;
        cout << "Enter the number again"<<endl;
        cin >> n;
    }
        cout << "Enter number" << endl;
        for(i = 0; i < n; ++i){
            cin >> num[i];
            sum += num[i];
    }
    average = sum / n;
    cout << "Average = " << average;
}