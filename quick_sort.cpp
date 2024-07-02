#include<iostream>
using namespace std;
int partion(int arr[],int s,int e){
    int pivot=arr[s];
    int cnt;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    int pivotindex =s+cnt;
    swap(arr[pivotindex],arr[s]);

    int i=s,j=e;
    while(i<pivotindex && j>pivotindex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotindex && j>pivotindex){
            swap(arr[i++],arr[j--]);
        }
    }
     return pivotindex;

}
void quicksort(int arr[], int s, int e)
{
    if(s>e){
        return;

    }
    int index=partion(arr,s,e);
    quicksort(arr,s,index-1);
    quicksort(arr,index+1,e);

}
int main(){
    int arr[]={4,1,7,9,6,5};
    int n=6;
    quicksort(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }


    return 0;
}