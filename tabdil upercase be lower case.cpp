#include<iostream>
using namespace std;
int main()
{
    char chUpper, chLower;
    int ascii;
    cout<<"Enter the Character: ";
    cin>>chUpper;
    if(chUpper>='A' && chUpper<='Z')
    {
        ascii = chUpper;
        ascii = ascii+32;
        chLower = ascii;
        cout<<"\nIts Lowercase: "<<chLower;
    }
    else if(chUpper>='a' && chUpper<='z')
        cout<<"\nalanam horof lowercase ast ";
    else
        cout<<"\nInvalid Input!";
    cout<<endl;
    return 0;
}


