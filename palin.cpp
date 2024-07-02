#include<iostream>
using namespace std;
bool palin(string str, int i, int j){
    if(i>j){
        return false;

    }
    if(str[i]!=str[j]){
        return false;
    }
    else{
        return palin(str,i+1,j-1)
;
    }

}
int main(){
    string name="pratik";
    bool palindrome=palin(name,0,name.length()-1);
    if(palindrome){
        cout<<"the word is palin"<<endl;

    }
    else{
        cout<<"the world is not palindrome"<<endl;
    }

    return 0;

}