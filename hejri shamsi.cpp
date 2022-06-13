#include <iostream>
#include <fstream>
using namespace std;
int main (void) {
int y,m,d,day;
cout<<"Enter year mount day (yy/mm/dd): ";
cin>>y>>m>>d;
day = (m<=6) ? (m-1) *31+d: (m-1)*30+d+6;
cout<<"Days: "<<day;
}