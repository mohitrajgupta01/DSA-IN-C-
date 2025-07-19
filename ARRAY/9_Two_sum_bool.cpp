#include<iostream>
using namespace std;


bool cheaktosum(int a[],int target){
    int a[10];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(a[i]+a[j]==target){
                a[0]=i;
                a[1]=j;
                return true;
            }
        }
    }
    return false;
}


int main (){


int a[10]={10,89,45,36,78,12,36};
int target=48;
bool ans=cheaktosum(a,target);

if (ans==true)
{
    cout << "pair found";
}
else{
    cout << "pair not found";
}

}



