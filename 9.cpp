#include<bits/stdc++.h>
using namespace std;

class Student 
{
    int id;
    string name;

    public:

    void readS()
    {
        cout<<endl;
        cout<<"enter roll no : ";
        cin>>id;
        cout<<"enter name : ";
        cin.ignore();
        getline(cin,name);
    }

    void showS()
    {
        cout<<endl;
        cout<<"Roll no : "<<id<<endl;
        cout<<"Name is : "<<name<<endl;
    }
    
};

class StudentExam : public Student
{
    float m1,m2,m3,m4,m5,m6;
    
    public:

    void readE()
    {
        readS();
        cout<<"enter marks of subject 1 : ";
        cin>>m1;
        cout<<"enter marks of subject 2 : ";
        cin>>m2;
        cout<<"enter marks of subject 3 : ";
        cin>>m3;
        cout<<"enter marks of subject 4 : ";
        cin>>m4;
        cout<<"enter marks of subject 5 : ";
        cin>>m5;
        cout<<"enter marks of subject 6 : ";
        cin>>m6;

    }

    void showE()
    {
        cout<<"marks of subject 1 : "<<m1<<endl;
        cout<<"marks of subject 2 : "<<m2<<endl;
        cout<<"marks of subject 3 : "<<m3<<endl;
        cout<<"marks of subject 4 : "<<m4<<endl;
        cout<<"marks of subject 5 : "<<m5<<endl;
        cout<<"marks of subject 6 : "<<m6<<endl;

    }

    float calculate_percentage()
    {
        cout<<"hello world"<<endl;
        return (m1+m2+m3+m4+m5+m6)/6;
    }

};

class StudentResult : public StudentExam
{
    float percentage;
    public:
   


    void show()
    {
        percentage=calculate_percentage();
        showS();
        showE();
        cout<<"percentage : "<<percentage<<endl;
    }


};

int main()
{
    int n;
    cout<<"enter the number of student you want : ";
    cin>>n;

    StudentResult r[n];

    int t=n;
    
    while(n--)
    {
       r[n].readE();
    }

    n=t;

    while(n--)
    {
        r[n].show();
    }

    return 0;

}