#include<iostream>
using namespace std;
int main()
{
    int n,i,reverse[32];

    cin>>n;
    while(n>0){
        reverse[i]=n/2;
        n=n%2;
        for(int j=i-1;j>=0;j--){
            cout<<reverse[j];
        }




    }
    

    
    


    return 0;

}