#include<iostream>

using namespace std;
int main()
{
   int arr[10], i;
   cout<<"10 adad zoj v fard vared konid ta fard hara chap konam : ";
   for(i=0; i<10; i++)
      cin>>arr[i];
   cout<<"\nList adad fard vared shode mosavi ast ba :\n";
   for(i=0; i<10; i++)
   {
      if(arr[i]%2!=0)
         cout<<arr[i]<<" ";
   }
   cout<<endl;
   return 0;
}