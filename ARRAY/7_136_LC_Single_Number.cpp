#include<iostream>
using namespace std;

/*is questin me aisa hai ki har element 2 bar repet ho raha hai 
par ek aisa element hai jo sirf 1 bar hai wahi fetch krna hai or wahi answer
hai isme XOR ka use ho raha hai 


{kyu ki XOR use krne par same element cut ho jaiga single wala bach jaiga}


EX=[5,5,3,6,6,9,9]
ans=3

*/

/*

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans =0;
        int n=nums.size();

        for(int i=0;i<n;i++){
            ans=ans^nums[i];
        }
        return ans;
        
    }
};

*/
int singlenumber(int a[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^a[i];
    }
    return ans;
}


int main (){
    int a[50]={2,2,5,6,6,7,7};
    int size=8;

    int ans=singlenumber(a,size);
    cout << ans <<endl;

}