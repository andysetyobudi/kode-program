#include <iostream>
#include <conio.h>

using namespace std;

main (){

int jenjang,sks,variabel,total,tetap;

cout<<"\n                Kategori Jenjang Pendidikan                   ";
cout<<"\n--------------------------------------------------------------";
cout<<"\n No. |     Pendidikan     |   SPP Tetap     |   SPP Variabel  ";
cout<<"\n *************************************************************";
cout<<"\n 1.  |  D3 MI atau D3 TI  |  Rp. 1.500.000  |  Rp.    50.000  ";
cout<<"\n 2.  |  S1 SI atau S1 TI  |  Rp. 2.000.000  |  Rp.    80.000  ";
cout<<"\n 3.  |  BCIS  atau BCIT   |  Rp. 3.000.000  |  Rp.   120.000  ";
cout<<"\n--------------------------------------------------------------";
cout<<endl;
cout<<"\n Masukkan Pilihan Jenjang = ";
cin>>jenjang;
cout<<"\n Masukkan Jumlah SKS      = ";
cin>>sks;

if (jenjang == 1) {
	if (sks >= 24) {
		variabel = 24 * 50000;
		tetap = 1500000;
	}
	else if (sks <= 24) {
		variabel = sks * 50000;
		tetap = 1500000;
	}
}
else if (jenjang == 2) {
	if (sks >= 24) {
		variabel = 24 * 80000;
		tetap = 2000000;
	}
	else if (sks <= 24) {
		variabel = sks * 80000;
		tetap = 2000000;
	}
}
else if (jenjang == 2) 	{
	if (sks >= 24) {
		variabel = 24 * 120000;
		tetap = 3000000;
	}
	else if (sks <= 24) {
		variabel = sks * 120000;
		tetap = 3000000;
	}
}

total = tetap + variabel;

cout<<"\n Total Pembayaran         = Rp. "<<total;

getch();
}


