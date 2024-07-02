#include<iostream>
using namespace std;

int main(){
    int n,array[100];
    cout<<"enter the limit"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter the elements"<<endl;
        cin>>array[i];
    }
for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
            if(array[j]<array[i]){
            int temp=array[j];
            array[j]==array[i];
            array[i]==temp;

        }
        
    }
   

}
for(int i=0;i<n;i++){
     cout<<array[i]<<endl;
}



  




    return 0;
}