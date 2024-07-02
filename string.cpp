#include<iostream>
#include<string>
using namespace std;
int main (){
    string s1;
    cin>>s1;
    for(int i=0;i<s1.size();i++){
        char temp=s1[i];
        s1[i]=s1[s1.size()-i];
        s1[s1.size()-i]=temp;
        cout<<s1[i];
        


    }
    



    return 0;
}