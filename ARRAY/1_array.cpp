#include<iostream>
using namespace std ;

int main (){
    int a[5];

    cout << "enter the value to be entered in array";
    for(int i=0;i<6;i++){
        cin >> a[i];
    }


    for(int i=0;i<6;i++){
        cout << "at index" <<i<<  endl;
        cout << a[i] <<"\n";
    }




}