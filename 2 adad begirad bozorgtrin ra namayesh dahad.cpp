#include<iostream>
using namespace std;
int main()
{
    int numOne, numTwo, larg;
    cout<<"2 Adad Vared Konid : ";
    cin>>numOne>>numTwo;
    if(numOne>numTwo)
        larg = numOne;
    else
        larg = numTwo;
    cout<<"\nadad bozorgtr  = "<<larg;
    cout<<endl;
    return 0;
}