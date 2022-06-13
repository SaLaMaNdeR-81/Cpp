#include <conio.h>
#include <iostream>
using namespace std;
int main(){ 
    int n , sum; 
    cout <<"Adad ro bde bezanim:";
    cin >>n;
    sum = 0;
    for(int i = 1; i <= n ; i++){
        if( n % i== 0 ){
            sum += i;
                
            if( i != n ){
                cout << i <<"+" ;
            }else{
                cout <<i;
            }        
        }
    }
    cout <<" = "<<sum;
    getch();
}