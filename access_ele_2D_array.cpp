#include <bits/stdc++.h>
using namespace std;

int main(){
    int r, c;
    cout<< "Enter Row and Column: ";
    cin>>r>>c;
    int arr[r][c];
    cout<< "Enter Array Data: "<<endl;
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            cout<<"Data["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }
    cout<<"\nAccess Element from the Array"<<endl;
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            cout<<"Element["<<i<<"]["<<j<<"]: "<<arr[i][j]<<endl;           
        }
    }
    return 0;
}