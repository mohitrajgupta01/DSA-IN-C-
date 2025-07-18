#include<iostream>
using namespace std;


int main (){


int a[10]={0,1,0,1,1,0,0};

int i,j,k;
j=0;
k=0;

for(i=0;i<7;i++){
    if (a[i]==0)
    {
        j++;
    }
    if (a[i]==1)
    {
        k++;
    }
}
cout << "total no of 0 is "<<j<<endl;
cout << "total no of 1 is "<<k<<endl;


}


