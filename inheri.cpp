#include<bits/stdc++.h>

using namespace std;

// Types of inheritence 
    // Single Inheritance;
    // Multiple inheritance:- deviredd class with mpre then one base class;
    // Heirarchical Inheritance:- One papa and two children;
    // Multilevel inheritance:- one after one after one ;
    // Hybrid inhertance:- Multiple , Heirarchial and multilevel inhertance are combined;


class Employee{
   
    
    public:
    int id;
    float salary;
        Employee(int id){
            id=id;
            salary=34;

        }

};

//Derived class
class programmer : Employee{

public:

    int langCode=3;
    void getData(){
        cout<<id<<endl;
    }
};


int main(){
    Employee pratik(20), srushti(21);
    cout<<pratik.salary<<endl;
    cout<<srushti.salary<<endl;


    return 0;
}