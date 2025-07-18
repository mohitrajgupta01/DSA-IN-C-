#include<iostream>
using namespace std;


int main (){


int a[10]={10,50,78,36,45,25,41};
int n=7 ;
int i=0;
int j=n-1;


while(i<=j){
    if(i==j){
        cout <<a[i]<<" ";
        break;
    }
    cout << a[i]<<"\t";
    i++;
    cout << a[j]<<"\t ";
    j--;
}





}


