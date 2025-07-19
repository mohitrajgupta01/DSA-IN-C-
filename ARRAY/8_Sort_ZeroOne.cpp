#include<iostream>
using namespace std;

// is question me humko zero or one ko sort krna hai



void findzerone(int a[]){
    int countzero=0;
    int countone=0;
    for(int i=0;i<10;i++){
        if (a[i]==0)
        {
            countzero++;
        }
        if (a[i]==1)
        {
            countone++;
        }
        

    }
    cout << "value of countzero "<< countzero<<endl;
    cout << "value of countone "<< countone<<endl;



    for(int i=0;i<countzero;i++){
        a[i]=0;
    }

       for(int i=countzero;i<10;i++){
        a[i]=1;
    }

    
    
}

int main (){




    int a[10]={0,0,1,1,0,1,0,1,0,0};
    findzerone(a);

      for(int i=0;i<10;i++){
        cout<<a[i]<<"\t";
    }

  
}

