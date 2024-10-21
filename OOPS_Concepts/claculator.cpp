#include<bits/stdc++.h>


using namespace std;


class SimpleCalculator{
    int a,b;
    public:
        void getdataSimple()
{
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;


}
    void performOperationSimple(){
        cout<<"The value of a + b: "<< a+b<<endl;
        cout<<"The value of a - b: "<< a-b<<endl;
        cout<<"The value of a * b: "<< a*b<<endl;
        cout<<"The value of a / b: "<< a/b<<endl;

    }

};

class ScientificCalculator{
    int a,b;
    public:
        void getdataScientific()
{
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;


}
    void performOperationScientific(){
        cout<<"The value of cos fun: "<< cos(a)<<endl;
        cout<<"The value of sin fun: "<< sin(b)<<endl;
        cout<<"The value of tan fun: "<< tan(a+b)<<endl;
        cout<<"The value of cot function: "<< 1/(tan(1/b))<<endl;

    }



};

class HybridCal: public SimpleCalculator, public ScientificCalculator{


};

int main(){
    // SimpleCalculator cal;
    // cal.getdataSimple();
    // cal.performOperationSimple();
    // ScientificCalculator cal1;
    // cal1.getdataScientific();
    // cal1.performOperationScientific();
    HybridCal cal;
    cal.getdataScientific();
    cal.getdataSimple();
    cal.performOperationScientific();
    cal.performOperationSimple();

    return 0;

}