#include<iostream>
#include<math.h>
using namespace std;
class interest
{ public :
          float C,p,s,temp,temp1,temp2,temp3;
           int r,t,n,t2;
           void getdetails_1()
           { cout<<"Enter the principal amount : ";
             cin>> p;
             cout<<"Enter the rate of interest : ";
             cin>>r;
             cout<<"Enter the time period in years : ";
             cin>>t;
             }
           void getdetails_2()
           {cout<<"enter the principal amount:";
            cin>>p;
            cout<<"Enter the rate of interest : ";
            cin>>r;
            cout<<"Enter the time period in years :";
            cin>>t;
            cout<<" Enter the no. of times interest is compounded :";
            cin>>n;}
           void simple()
           { temp = p*r*t;
             s = temp/100;
            cout<<"The simple interest for given details is :"<< s << endl; }
           void compound()
           {temp1 = r/n;
            temp2 = 1+temp1;
            t2 = n*t;
            temp3 = pow(temp2,t2);
            C = p*temp3;
            cout<<"The compound interest for given details is "<< C <<endl;
 }
};
int main()
{ interest I;
  int choice;
  cout<<"enter the choice :"<<endl;
   cout<<"1.Simple interest"<<endl;
   cout<<"2.Compound interest"<<endl;
   cin>>choice;
  switch(choice){
   case (1): I.getdetails_1();
             I.simple();
             break;
    case(2): I.getdetails_2();
             I.compound();
             break;
             }
             return(0);
             }
