#include<iostream>
using namespace std;
int binarysearch(int n,int array[100],int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(array[mid]==key){
            return mid;
        }
        else if(array[mid]>key){
            e=mid-1;
        

        }
        else{
            e=mid+1;
        }
        s++;
    }
    return -1;
}


int main(){
    int n,array[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>array[i];

    }
    int key;
    cin>>key;
    cout<<binarysearch(n,array,key)<<endl;

    return 0;

}