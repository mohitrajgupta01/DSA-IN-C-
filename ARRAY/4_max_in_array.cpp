#include<iostream>
#include<limits.h>
using namespace std ;



int findmax(int a[]){
    int maxNo=INT16_MIN;
    for(int i=0;i<10;i++){
        if(a[i]>maxNo){
            maxNo=a[i];
        }
    }
    return maxNo;
}

int main (){
    

    int a[100000]={23,585,5,589,59,2332332};

 

   

    int ans=findmax(a);

    cout <<ans;
}
