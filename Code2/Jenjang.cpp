#include <iostream>
#include <conio.h>
#define d3 50000
#define s1 80000
#define bc 1200000
#define t1 1500000
#define t2 2000000
#define t3 3000000

using namespace std;

int jenjang,sks,jsks,total,tetap,pil;

main(){
cout<<"\n                Kategori Jenjang Pendidikan             ";
cout<<"\n--------------------------------------------------------------";
cout<<"\n| No. |     Pendidikan     |   SPP Tetap     |   SPP Variabel  |";
cout<<"\n *************************************************************";
cout<<"\n| 1.  |  D3 MI atau D3 TI  |  Rp. 1.500.000  |  Rp.    50.000  |";
cout<<"\n| 2.  |  S1 SI atau S1 TI  |  Rp. 2.000.000  |  Rp.    80.000  |";
cout<<"\n| 3.  |  BCIS  atau BCIT   |  Rp. 3.000.000  |  Rp. 1.200.000  |";
cout<<"\n--------------------------------------------------------------";
cout<<endl;
cout<<"\nMasukan Jenjang Pendidikan ( 1 - 3) = ";
cin>>jenjang;
cout<<"\nMasukkan Jumlah SKS = ";
cin>>sks;

if (jenjang == 1) {
	if (sks >= 24) {
	jsks = 24 * d3; 
	tetap = t1;
	total = jsks + t1;
	}
	else if (sks <= 24) {
	jsks = sks * d3;
	tetap = t1;
	total = jsks + t1;
	}
}
else if (jenjang == 2) {
	if (sks >= 24) {
	jsks = 24 * s1;
	tetap = t2;
	total = jsks + t2;
	}
	else if (sks <= 24) {
	jsks = sks * s1;
	tetap = t2;
	total = jsks + t2;
	}
}
else if (jenjang == 3) {
	if (sks >= 24) {
	jsks = 24 * bc;
	tetap = t3;
	total = jsks + t3;
	}
	else if (sks <= 24) {
	jsks = sks * bc;
	tetap = t3;
	total = jsks + t3;
	}
}
else {
	cout<<"\nTidak Tersedia !! ";
}
cout<<"\nTotal Pembayaran Biaya Kuliah";
cout<<"\nHarga SPP Tetap    = "<<tetap;
cout<<"\nHarga SPP Variabel = "<<jsks;
cout<<"\n                   ------------- + ";
cout<<"\nTotal Pembayaran   = "<<total;
getch();
}

	



