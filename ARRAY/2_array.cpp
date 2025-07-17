#include<iostream>
using namespace std ;





void aa(int a[]){
    for (int i=0;i<5;i++){
        cin>>a[i];
    }
    return ;
}


int main (){

int a[10];

cout << "enter element";
aa(a);

for(int i=0;i<5;i++){
    cout << a[i]<<endl;
}



}