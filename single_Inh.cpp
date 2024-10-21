#include<bits/stdc++.h>

using namespace std;

// 
class Base{
    int data1;
    public: 
        
        int data2;
        void setdata();
        int getdata1();
        int getdata2();

};

void Base :: setdata(){
    data1=10;
    data2=20;

}

int Base:: getdata1(){
    return data1;

}

class Derived: public Base{
    int data3;
    public:
    void process();
    void display();

};
void Derived:: process(){
    int data3=data2*200;

}


void Derived::display(){

    cout<<"The data is "<<getdata1()<<data3<<endl;


}
int main(){

    Derived der;
    der.getdata1();
    der.setdata();
    der.display();

    
    


    return 0;

}