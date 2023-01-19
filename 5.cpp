#include<bits/stdc++.h>

using namespace std;

class Item{
 int no;
 string name;
 float price;

 public:

 void readi()
 {
    cout<<endl;
    cout<<"enter item no : ";
    cin>>no;
    cout<<"enter item name : ";
    cin.ignore();
    getline(cin,name);
    cout<<"enter item price : ";
    cin>>price;
 }

 void showi()
 {
    cout<<endl;
    cout<<"item no : "<<no<<endl;
    cout<<"item name : "<<name<<endl;
    cout<<"item price : "<<price<<endl;

 }

 float getPrice()
 {
    return price;
 }


};

class Discount_item : public Item
{
     float discout_percentage;
     float discount_price;
     float discount;
     public:

     void read()
     {
        readi();
        cout<<"enter discount percentage : ";
        cin>>discout_percentage;
        
        discount=(getPrice()/100)*discout_percentage;
        discount_price=getPrice()-discount;

     }

     void show()
     {
        showi();
        cout<<"discount percentage : "<<discout_percentage<<endl;
        cout<<"discount price : "<<discount_price<<endl;
     }

     float getDiscount()
     {
        return discount;
     }
     

};

int main()
{
    int n;
    cout<<"how many item you want to enter : ";
    cin>>n;
    float total_price=0,total_discount=0;
    Discount_item d[n];
    int t=n;

    while(n--)
    {
        d[n].read();
    }

   
    n=t;

    while(n--)
    {
        d[n].show();
    }
    n=t;
    while(n--)
    {
        total_price+=d[n].getPrice();
        total_discount+=d[n].getDiscount();
    }

    cout<<endl<<"total price : "<<total_price<<endl;
    cout<<"toatl discount : "<<total_discount<<endl;

    return 0;
}