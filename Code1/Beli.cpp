#include <iostream>
#include <conio.h>

using namespace std;

main(){
	int menu,pesan,total,harga,jumlah,diskon;
	
cout<<"\n No.    Nama Makanan           Harga  ";
cout<<"\n ------------------------------------ ";
cout<<"\n  1.    Soto Ayam           Rp.10.000 ";
cout<<"\n  2.    Ayam Bakar          Rp.20.000 ";
cout<<"\n  3.    Gule                Rp.25.000 ";
cout<<endl;

cout<<"Masukkan Pilihan Menu   = ";
cin>>menu;
cout<<"Masukkan Jumlah Pesan   = ";
cin>>pesan;

switch (menu) {
	case 1 :
		harga = 10000;
		cout<<"\n Nama Pesanan = Soto Ayam";
	break;
	case 2 :
		harga = 20000;
		cout<<"\n Nama Pesanan = Ayam Bakar";
	break;
	case 3 :
		harga = 25000;
		cout<<"\n Nama Pesanan = Gule";
	break;
}

total = pesan * harga;

if (pesan >= 10) {
	diskon = 20000;
}
else if (pesan == 1){
	diskon = 0;
}

jumlah = total - diskon;

cout<<"\n Jumlah Pesan = "<<pesan;
cout<<"\n Total Bayar  = Rp. "<<jumlah;

getch();
}


		
		
