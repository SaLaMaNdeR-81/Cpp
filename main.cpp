#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
    float n1 , n2 , n3 , m;
    int v1 , v2 , v3;
    std::cout << "6 adad vared konid:" << std::endl;
    std::cin >> n1>>v3>>n2>>v2>>n3>>v3;
    m=(n1*v1+n2*v2+n3*v3)/(v1+v2+v3);
    cout<<"miyangin="<<m;
    getch();
    

    return 0;
}
