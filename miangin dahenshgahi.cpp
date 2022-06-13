#include <iostream>
#include <conio.h>
using namespace std ; 
main ()
{
	float nomre1 , nomre2 , nomre3 , vahed1 , vahed2,vahed3 , miangin;
	cout << "nomre ha v vahed haye har dars ra kenare ham vared konid   ";
	cin >>nomre1 >>vahed1 >>nomre2 >>vahed2 >>nomre3 >>vahed3; 
	miangin= (nomre1 * vahed1 + nomre2*vahed2 + nomre3*vahed3 ) / (vahed1+vahed2+vahed3);
	cout << "miangin dars haye shoma mishavad  "<<miangin;
	getch ();
}   