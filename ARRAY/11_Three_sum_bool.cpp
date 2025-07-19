#include<iostream>
using namespace std;


bool cheaktosum(int a[],int target){
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){  //isme j+1 likhne ka matlab hai ki unique pair milaga same repeat nhi hoga
            for(int k=j+1;k<7;k++){   //isme k+1 likhne ka matlab hai ki unique pair milaga same repeat nhi hoga
                if(a[i]+a[j]+a[k]==target){
                    cout << a[i]<<","<<a[j]<<","<<a[k]<<endl;
                return true;
                
            }
            }
        }
    }
    return false;
}


int main (){


int a[10]={10,89,45,36,78,12,36};
int target=14;
int ans=cheaktosum(a,target);


if (ans==1)
{
    cout << "pair found";
}
else{
    cout << "pair not found";
}

}



