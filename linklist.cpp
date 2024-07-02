#include<iostream>
using namespace std;
class Student {
    int x;
    public:
    int roll;
    string name;
    string dob;


};
class student_2
{
    public:
    string name;
    string dob;
    int roll;

};
class mam {
public:
    string name;
    int id;
    mam(string name1, int id1){
        name=name1;
        id=id1;
    }


};
class abc{
    int x;
    public:
    void set(int n){
        x=n;
    }
    int get(){
        return x;

    }

};

int main(){
    Student Pratik;
    Pratik.name="Pratik Rajendra Marabille";
    Pratik.roll=21;
    Pratik.dob="16/11/2002";
    student_2 *abhi =new student_2;
    abhi->name="Abhi";
    abhi->dob="14/09/2003";
    abhi->roll=3; 
    mam Rashi("Rashi",36);
    abc obj1;
    obj1.set(5);
    cout<<obj1.get()<<endl;
    cout<<Rashi.name<<endl;
    cout<<Rashi.id<<endl;
    cout<<Pratik.name<<endl;
    cout<<Pratik.roll<<endl;
    cout<<Pratik.dob<<endl;
    cout<<abhi->name<<endl;
    cout<<abhi->dob<<endl;
    cout<<abhi->roll<<endl;


}