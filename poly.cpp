#include<bits/stdc++.h>

using namespace std;

class Base{
    public:
        int a;
        virtual void display(){

            cout<<"The base class is called"<<endl;
        }
};

class Derived: public Base{

    public:
        int b;
    void display(){

        cout<<"The drived class is called "<<endl;
    }
};



int main(){
    // POlymorphism
    // One function different exercies.
    //types:: Run time and Compile tiime poly.
    //Compile time(early bind): at the time of compilation only it defined which function is going to execute;
    //        Two types of compile time poly: Function and operating overoading
    // Runtime : Virtual function are used.

    Base *Baseptr;
    Base base_obj;
    Derived De_obj;
    Baseptr=&De_obj;
    Baseptr->display();

    



    return 0;
}