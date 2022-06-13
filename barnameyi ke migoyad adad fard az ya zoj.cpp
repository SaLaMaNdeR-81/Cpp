#include<iostream>

using namespace std;
int main()
{
   int arr[5], eve=0, odd=0, i;
   cout<<"Enter 5 Array Elements: ";
   for(i=0; i<10; i++)
      cin>>arr[i];
   for(i=0; i<10; i++)
   {
      if(arr[i]%2==0)
         eve++;
      else
         odd++;
   }
   cout<<"\nTotal Number of Even Numbers = "<<eve;
   cout<<"\nTotal Number of Odd Numbers = "<<odd;
   cout<<endl;
   return 0;
}