#include<bits/stdc++.h>
using namespace std;

class Worker{
    protected:
   int code;
   string name;
   float salary;

   public:

   void readW()
   {
    cout<<endl;
    cout<<"enter code : ";
    cin>>code;
    cout<<"enter name : ";
    cin.ignore();
    getline(cin,name);
    cout<<"enter salary : ";
    cin>>salary;
   }

   void showW()
   {
    cout<<endl;
    cout<<"code : "<<code<<endl;
    cout<<"name : "<<name<<endl;
    cout<<"salary : "<<salary<<endl;
   }

};

class Officer{
    protected:
     float DA;
     float HRA;
     public:

     void readO()
     {
        cout<<"enter DA : ";
        cin>>DA;
        cout<<"enter HRA : ";
        cin>>HRA;
     }

     void showO()
     {
        cout<<"DA : "<<DA<<endl;
        cout<<"HRA : "<<HRA<<endl;
     }


};

class Manager: public Worker,public Officer
{
   float TA;
   float gross_salary;

   public:

   void readM()
   {
    readW();
    readO();
     TA=salary*.10;
     gross_salary=TA+DA+HRA;
   }

   void show()
   {
    showW();
    showO();
    cout<<"TA : "<<TA<<endl;
    cout<<"gross salary : "<<gross_salary<<endl;
   }
};

int main()
{
    int n;
    cout<<"enter manager count : ";
    cin>>n;

    Manager m[n];

    int t=n;

    while(n--)
    {
        m[n].readM();
    }
      
      n=t;
    while(n--)
    {
        m[n].show();
    }


    return 0;
}