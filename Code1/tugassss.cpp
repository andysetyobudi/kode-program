#include <iostream>

using namespace std;

int main(){
	int a = 10;
	int b;
	
	do {
		b=1;
		do{
			cout<<b*a<<' ';
			b++;
		} while (b <= a);
	cout<<'\n';
	a--;
	} while (a>=1);
}