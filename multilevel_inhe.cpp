#include<bits/stdc++.h>

using namespace std;

class Student{

    protected:
        int roll_no;
    public:
        void set_roll_no(int);
        void get_roll_no(void);
    Student(){
        cout<<"Student constructor is called"<<endl;
    }
};

void Student :: set_roll_no(int r){
    roll_no=r;
}

void Student :: get_roll_no(){

    cout<<"The roll no is "<<roll_no<<endl;
}

class Exam : public Student{
    protected:
        float maths;
        float phy;
    public:
    void set_marks(float,float);
    void get_marks(void);
    Exam(){
        cout<<"Exam constructor is called"<<endl;
    }


};

void Exam :: set_marks(float mt, float py){
    maths=mt;
    phy=py;
}

void Exam :: get_marks(){
    cout<<"The marks ontained in maths is "<<maths<<endl;
     cout<<"The marks ontained in maths is "<<phy<<endl;

}

class Result : public Exam {

    float percentage;
    public:
        void display(){
            get_roll_no();
            get_marks();

            cout<<"Your percentage is "<<(maths+phy)/2<<endl;
        }
    Result(){
        cout<<"Result constructor is called"<<endl;
    }
};


int main(){
    Result pratik;
    // pratik.set_roll_no(20);
    // pratik.set_marks(99.0,99.0);
    // pratik.display();



    return 0;

}