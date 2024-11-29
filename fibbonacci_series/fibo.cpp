#include<iostream>
using namespace std;

int main ()
{ int arr[51],i;
   arr[0]= 0;
   arr[1]=1;
   for ( i=0;i<50;i++)
   { arr[i+2]= arr[i]+ arr[i+1];
     cout<< arr[i] << ",";
   }
return (0);
}
