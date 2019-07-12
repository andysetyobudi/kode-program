#include <iostream>
#include <conio.h>

using namespace std;

main () {

int film,tiket,harga,total;
float jam,diskon,dis,jumlah;

cout<<"\n No.     Judul Film           Jam Tayang                  Studio    ";
cout<<"\n  1.    Logan            10.00 | 12.00 | 14.00         2D | 3D | 4Dx";
cout<<"\n  2.    Life             15.00 | 16.00 | 18.00         2D | 3D | 4Dx";
cout<<"\n  2.    Anjay            19.00 | 20.00 | 22.00         2D | 3D | 4Dx";
cout<<endl;
cout<<"\n Harga Studio";
cout<<"\n 2D   =  Rp. 35.000";
cout<<"\n 3D   =  Rp. 50.000";
cout<<"\n 4Dx  =  Rp. 80.000";
cout<<endl;
cout<<"\n Masukkan Pilihan Film    = ";
cin>>film;
cout<<"\n Masukkan Jam Tayang      = ";
cin>>jam;
cout<<"\n Masukkan Jumlah Tiket    = ";
cin>>tiket;

switch (film) {
	case 1 :
	cout<<"\n Judul Film    =  Logan";
	if (jam == 10.00){
		harga = 35000;
	}
	else if (jam == 12.00){
		harga = 50000;
	}
	else if (jam == 14.00){
		harga = 80000;
	}
	break;
	
	case 2 :
	cout<<"\n Judul Film    =  Life";
	if (jam == 15.00){
		harga = 35000;
	}
	else if (jam == 16.00){
		harga = 50000;
	}
	else if (jam == 18.00){
		harga = 80000;
	}
	break;
	
	case 3 :
	cout<<"\n Judul Film    = Anjay";
	if (jam == 19.00){
		harga = 35000;
	}
	else if (jam == 20.00){
		harga = 50000;
	}
	else if (jam == 22.00){
		harga = 80000;
	}
	break;
}

if (tiket >= 5){
	diskon = 0.05;
}
else {
	diskon = 0;
}

total = tiket * harga;
dis = total * diskon;
jumlah = total - dis;

cout<<"\n Total Pembayaran = Rp. "<<jumlah;
getch();
}

