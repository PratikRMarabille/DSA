#include<iostream>
using namespace std;

bool sorted(int arr[],int n){
    
    if (n==1){
        return true;
    }
    bool restarray=(arr+1,n-1);
    return (arr[0]<arr[1] && restarray);

    
}
int main(){
    int arr[]={1,9,4,5,6};
    cout<<sorted(arr,6)<<endl;

    return 0;
}