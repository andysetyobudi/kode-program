#include <iostream>
#include <conio.h>

using namespace std;

main (){
	
int harga,lama,bayar;
float diskon,jumlah,dis;

cout<<"\n Masukkan Harga Hotel   =  Rp. ";
cin>>harga;
cout<<"\n Masukkan Lama Menginap =  Rp. ";
cin>>lama;

bayar = harga * lama;

if (bayar >= 300000) {
		diskon = 0.3;
}
else if (bayar >= 200000){
		diskon = 0.2;
}
else if (bayar >= 100000) {
		diskon = 0.1;
}
else {
		diskon = 0;
}

dis = bayar * diskon;
jumlah = bayar - dis;
 
cout<<"\n Pembayaran Penginapan";
cout<<"\n Biaya Menginap   = Rp. "<<bayar;
cout<<"\n Diskon           = Rp. "<<dis;
cout<<"\n -------------------------------- -";
cout<<"\n Total Pembayaran = Rp. "<<jumlah;

getch();
}