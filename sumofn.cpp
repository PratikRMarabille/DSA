#include<iostream>
using namespace std;
int sum(int n){
    int m=0;
    for(int i=0;i<=n;i++){
        m=m+i;
    }
    return m;
}
int main(){
    int n,ans;
    cin>>n;
    ans=sum(n);
    cout<<ans<<endl;

}
