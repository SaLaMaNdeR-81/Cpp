#include <iostream>
#include <fstream>
using namespace std;
int main (void) {
  int n, i ;
  cout<<"adad ro bde bezanim: ";
  cin>>n ;
  for( i = 1 ; i<=100 ; i++)
  { if(i%n == 0)
  continue;
  cout<<i<<"\t";
}
}