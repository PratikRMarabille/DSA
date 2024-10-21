#include<bits/stdc++.h>

using namespace std;

class Number{
    int a;
    public:
    // Constructor is a special typeof function which is called when object is created;

    Number(){
        cout<<"The empty constructor is called"<<endl;
    }
        Number(int num){

            a=num;
            cout<<"The default constructor is called"<<endl;


        }

        // compiler will create its own copy constructor if copy constructor is not there
        Number(Number &obj){
            a=obj.a;
            cout<<"The copy const is called"<<endl;
        }

        // Destructor never takes an argument 

        ~Number(){
            cout<<"This the time when distructor is called"<<endl;

        }
        void display(){

            cout<<"The number for this object"<<a<<endl;
        }

        
};

int main(){
    Number x(7),y(3);
    

    // Number z1(y);
    // z1.display();

    return 0;

}