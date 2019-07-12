#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

main(){
	char nama[20];
   int jmltiket,harga,total,tujuan,kelas,totalbayar,pajak;

   cout<<" ==============Program Pembelian Tiket Pesawat ===========";
   cout<<"\n\n Silahkan Pilih Tujuan Anda : ";
   cout<<"\n [1]JAKARTA (JKT)";
   cout<<"\n [2]SURABAYA (SBY)";
   cout<<"\n [3]BANDUNG (BDG)";
   cout<<"\n [4]BATAM (BTM)";

   cout<<"\n Masukkan nama anda = ";gets(nama);
   cout<<"\n Masukkan kode tujuan = ";cin>>tujuan;

   cout<<"\n Silahkan Masukkan Kelas Tujuan Anda : ";
	cout<<"\n [1] EKONOMI";
   cout<<"\n [2] EKSEKUTIF";

   cout<<"\n\n Masukkan Kode Kelas = ";cin>>kelas;
   cout<<"\n Masukkan Jumlah Tiket = ";cin>>jmltiket;

	if(tujuan==1){
   	if(kelas==1){
      harga=250000;
      }else if(kelas==2){
      harga=400000;
      }
      cout<<"\n Harga Tiket = Rp. "<<harga;
   }

   else if(tujuan==2){
   	if(kelas==1){
      harga=200000;
      }else if(kelas==2){
harga=350000;
      }
      cout<<"\n Harga Tiket = Rp. "<<harga;
   }
   else if(tujuan==3){
   	if(kelas==1){
      harga=225000;
      }else if(kelas==2){
      harga=375000;
      }
      cout<<"\n Harga Tiket = Rp. "<<harga;
   }
   else if(tujuan==4){
   	if(kelas==1){
      harga=350000;
      }else if(kelas==2){
      harga=500000;
      }
      cout<<"\n Harga Tiket = Rp. "<<harga;
   }
   else{
   	cout<<"Anda Belum Memilih Tujuan";
   }

   total=harga*jmltiket;
   pajak=0.1*total;
   totalbayar=total+pajak;
 
   cout<<"\nNama Pemesan          = "<<nama;
   cout<<"\nTujuan Anda adalah    = "<<tujuan;
   cout<<"\nKelas perjalanan anda = "<<kelas;
   cout<<"\nJumlah Tiket          = "<<jmltiket;
   cout<<"\nTotal Pembayaran Anda = Rp. "<<totalbayar;

   getch();
}
