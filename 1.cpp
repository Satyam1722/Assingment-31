#include<bits/stdc++.h>
using namespace std;

class Person{
   string name;
   int age;

   public:

   void setName(string s)
   {
     name.assign(s);
   }

   void setAge(int a)
   { 
    age=a;
   }

   string getName()
   {
    return name;
   }

   int getAge()
   {
    return age;
   }
};

class Employee : public Person
{
    int empid;
    float salary;
    
    public:

    void setEmpid(int a)
     {
        empid=a;
     }
     
     void setSalary(float f)
     {
        salary=f;
     }

     int getEmpid()
     {
        return empid;
     }

     float setSalary()
     {
        return salary;
     }

};


int main()
{
   Employee e;
   
   return 0;
}