#include<iostream>
using namespace std;


pair<int,int> cheaktosum(int a[],int target){
    pair<int,int> ans=make_pair(-1,-1);
    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++){
            if(a[i]+a[j]==target){
                 ans.first=i;
                 ans.second=j;
                 return ans;
            }
        }
    }
    return ans;
}


int main (){


int a[10]={10,89,45,36,78,12,36};
int target=55;
pair<int,int> ans=cheaktosum(a,target);

if (ans.first==-1&&ans.second==-1)
{
    cout << "pair not found";
}
else{

    cout << "pair found \t"  <<ans.first<<","<<ans.second;
}

}



