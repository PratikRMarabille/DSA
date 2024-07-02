#include<iostream>
using namespace std;

int main()

{
    int n;
    cin>>n;
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"it is not a prime number"<<endl;
            break;

        }
       

        }
    if(n==i){
        cout<<"it is a prime"<<endl;

    }
    
     
   
    
    return 0;
}

