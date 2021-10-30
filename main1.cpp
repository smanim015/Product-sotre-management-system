#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class product
{
 double buyingprice, sellingprice, profit, totalinvest;
    int totalquantity;

      public:
      product( double totalinvest ,int totalproducts ,double unitprice)
      {}

void sale(int sellingquantiy,double sellingprice )
{                 totalquantity -= sellingquantiy;
       profit=(sellingprice- buyingprice) * sellingquantiy ;         }
         void show_info()
      {
   cout<<" Available products : "<<totalquantity<<endl;
   cout<<" Current pofit : "<<profit<<endl;
            cout<<" Current balance : "<<totalquantity<<endl;
    }
    } ;
int main()
 {
         cout<<"#*#*#*# Welcome #*#*#*#"<<endl;
      cout<<"Product name "<<endl;
     char productname[100];
        cin>>productname;
 cout<< "The total Amount of Product"<<endl;
        int totalproducts;
        cin>>totalproducts;
       cout<<"Buying price of the Product"<<endl;
      int unitprice;
      cin>>unitprice;
     int totalinvest = totalproducts * unitprice;
      product aproduct(totalinvest,totalproducts,unitprice);
        cout<<"How many Product you want to sell"<<endl;
        int sellingammount;
     cin>>sellingammount;
    cout<<"Selling price"<<endl;
       int sellingprice;
     cin>>sellingprice;
        aproduct.sale(sellingammount, sellingprice);
       aproduct.show_info();

       getch();
 }
