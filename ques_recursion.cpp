#include<iostream>
using namespace std;
int fact(int n){
    if(n==0 || n==1){
        return 1;

    }
    return fact(n-1)+fact(n-2);
    cout<<fact(n);
}
int main(){

    int n;
    cin>>n;
    //cout<<fact(n)<<endl;
    return 0;

}