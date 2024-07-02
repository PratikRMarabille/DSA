#include<iostream>
using namespace std;
#include<climits>
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
                cin>>a[i];
    }
    int curr[n];
    curr[0]=0;
    for(int i=1;i<=n;i++){
        curr[i]=curr[i-1]+a[i-1];
    }
    int maxSum=INT_MIN;
    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=0;j<i;j++){
            sum=curr[i]-curr[j];
              maxSum=max(maxSum,sum);

        }
      
    }
    cout<<maxSum<<endl;
    
    return 0;
}