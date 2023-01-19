#include<bits/stdc++.h>
using namespace std;

class Person
{
    string name;
    string address;
    int phone_no;

    public:

    Person()
    {
        name="satyam ";
    }

    void read()
    {
        cin.ignore();
        cout<<"enter name : ";
        getline(cin,name);
        cout<<"enter address : ";
        getline(cin,address);
        cout<<"enter phone_no : ";
        cin>>phone_no;
    }

    string getName()
    {
        return name;
    }


};

class Employee : public Person
{
    int eno;
    
    public:

    void readE()
    {
        cout<<"enter Employee no : ";
        cin>>eno;
    }
};

class Manager : public Employee
{
    string designation;
    string department_name;
    float basic_salary;

    public:

    void readM()
    {
        readE();
        read();
        cin.ignore();
        cout<<"enter designation : ";
        getline(cin,designation);
        cout<<"enter department name : ";
        getline(cin,department_name);
        cout<<"enter basic salary : ";
        cin>>basic_salary;
    }

    float getSalary()
    {
        return basic_salary;
    }
};

int main()
{ 
    int n;
    puts("enter number of Managers");
    cin>>n;

    Manager m[n];
    int t=n;
    while(n--)
    {
        puts("enter details of manager ");
        puts("######################################");
        m[n].readM();
    }

    float max=INT_MIN;
    n=t;
    string s;
    for(int i=0;i<n;i++)
    {
        if(m[i].getSalary()>max)
        {
           max=m[i].getSalary();
           s=m[i].getName();
        }
    }

   cout<<"Manager with highest salary is ";
    cout<<max<<endl;
    cout<<"and name is ";
    cout<<s<<endl;

    

}