#include <iostream>
#include <conio.h>

using namespace std;

main(){
	
	int jammasuk,jamkeluar,lama;
	
cout<<"\n ===== Program Menghitung Jam Kerja =====";
cout<<"\n Jam Masuk  = ";
cin>>jammasuk;
cout<<"\n Jam Keluar = ";
cin>>jamkeluar;
cout<<"\n ========================================";
cout<<endl;

if (jamkeluar>=jammasuk){
	lama = jamkeluar - jammasuk;
}
else {
	lama = (12 - jammasuk) + jamkeluar;
}


cout<<"\n Lama = "<<lama;
getch();
}

