#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the limit: ";
cin>>n;
int array[n];
for(int i=0;i<=n;i++){
 cin>>array[i];
}
int search;
cout<<"enter the search value: ";
cin>>search;
for(int i=0;i<n;i++){
    if(array[i]==search){
        cout<<i<<endl;
        break;

    }
  
}
 



    return 0;


}