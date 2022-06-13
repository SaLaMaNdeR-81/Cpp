#include <iostream.h>
#include <conio.h>
int main(){
float pencil , tc4 ,tavarom , expend ;
cout << " please price pen : " ;
cin >> pencil ;
cout << " \n please price a4 : " ;
cin >> tc4 ;
cout << " \n please %tavarom : " ;
cin >> tavarom ;
tavarom = tavarom / 100 ;
pencil = pencil + ( pencil * tavarom ) ;
tc4 = tc4 + ( tc4 * tavarom ) ;
expend = ( pencil * 150 ) + ( pa4 * 50 ) ;
cout << " expend for 1 year is " << expend ;
getch();
return 0 ;
}
