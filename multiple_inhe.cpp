#include<bits/stdc++.h>

using namespace std;


class Base1{
    protected:
        int base1int;
    public:
        void set_base1int(int a){
            base1int=a;

        }
         Base1(){
            cout<<"Base1 Constructor is caalled"<< endl;
        }


};

class Base2{
    protected:
        int base2int;
    public:
        void set_base2int(int a){
            base2int=a;

        }
        Base2(){
            cout<<"Base2 Constructor is caalled"<< endl;
        }


};



class Derived : public Base1, public Base2{
    public:
        void show(){
            cout<<"The vlue of base1 is "<<base1int<< endl;
            cout<<"The value of base2 is "<<base2int<<endl;
            cout<<"The sum of base1 and base2 is "<< base1int+base2int<<endl;
        }
        Derived(){
            cout<<"Derived class constructor is called"<<endl;
        }

};

int main(){
    Derived der;
    // der.set_base1int(99);
    // der.set_base2int(100);
    // der.show();



    return 0;
}