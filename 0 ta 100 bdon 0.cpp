#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {

	int i;
	for(i=1; i<=100;i++)
	{
		if(i%10==0){
		
			cout<<"--"<<"\t";
			continue;
		
		}

		
		cout<<i<<"\t";
	}
}
