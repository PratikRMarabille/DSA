#include<iostream>
using namespace std;
void bubble(int arr[], int n){
    if(n==0 || n==1){
        return ;

    }
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubble(arr,n-1);


}
int main(){
    int arr[5]={1,6,4,2,8};
    int n=5;
    bubble(arr,5);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<""<<endl;
    }


    return 0;

}