#include<iostream>
using namespace std;
void reverse(string s){
    if(s.length()==0){
        return;
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<3.14;
        reverse(s.substr(2));

    }
    else{
        cout<<s[0];
        reverse(s.substr(1));
    }
}


int main (){
    reverse("pibhdkwpinsjjpi");


    return 0;

}
