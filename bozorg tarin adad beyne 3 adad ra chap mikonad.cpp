#include<iostream>
using namespace std;
int main()
{
    int numOne, numTwo, numThree, larg;
    cout<<"3 adad vared konid: ";
    cin>>numOne>>numTwo>>numThree;
    if(numOne>numTwo)
    {
        if(numTwo>numThree)
            larg = numOne;
        else
        {
            if(numThree>numOne)
                larg = numThree;
            else
                larg = numOne;
        }
    }
    else
    {
        if(numTwo>numThree)
            larg = numTwo;
        else
            larg = numThree;
    }
    cout<<"\nbozorgtrin adad  = "<<larg;
    cout<<endl;
    return 0;
}