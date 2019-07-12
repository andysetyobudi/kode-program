#include <iostream>
#include <conio.h>
#define novel 2000
#define komik 1000
#define majalah 1500
#define diskon 0.1

using namespace std;

main(){
	int buku,jml,total,disc;

   cout<<"\t\t==============================="<<endl;
   cout<<"\t\t    = Zahrani Rental Book  ="<<endl;
   cout<<"\t\t==============================="<<endl<<endl;
   cout<<"[1]Novel , biaya sewa 2000/buah"<<endl;
   cout<<"[2]Komik , biaya sewa 1000/buah"<<endl;
   cout<<"[3]Majalah , biaya sewa 1500/buah"<<endl;
   cout<<"\nPinjam lebih dari sama dengan 5,dapat diskon 10%" ;
   atas:
   cout<<"\n Masukkan Kode Buku = ";cin>>buku;

   switch(buku){
   	case 1:
      cout<<"\n Masukkan banyak buku yang ingin dipinjam : ";cin>>jml;
   if(jml>=5){
   	disc=jml*novel*diskon;
     total=(jml*novel)-disc;
   }
   else{
   	total=jml*novel;
   }
cout<<"\n Total Yang Harus dibayar : Rp."<<total<<endl;
   cout<<"\n Terima kasih sudah meminjam di Rental Buku Zahrani";
 break;
 case 2 :
 	cout<<"\n Masukkan banyak buku yang ingin dipinjam : ";cin>>jml;
 if(jml>=5){
 	disc=jml*komik*diskon;
 	total=(jml*komik)-disc;
 }
 else{
 	total=jml*komik;
 }

 cout<<"\n Total Yang Harus Dibayar : Rp. "<<total<<endl;
 cout<<"\n Terima Kasih sudah meminjam di Rental Buku Zahrani";
 break;

 case 3 :
 	cout<<"\n Masukkan banyak buku yang ingin di pinjam : ";cin>>jml;
 if(jml>=5){
 	disc=jml*majalah*diskon;
   total=(jml*majalah)-disc;
 }
 else{
 	total=jml*majalah;
 }
cout<<"\n Total yang harus di bayar : Rp. "<<total<<endl;
 cout<<"\n Terima Kasih sudah meminjam di Rental Buku Zahrani";
 break;

 default :
 	cout<<"Pilihan yang Anda inputkan tidak terdaftar"<<endl;
   cout<<"Silahkan Input Ulang. Terima Kasih";
   cout<<endl;
   goto atas;
   break;
   }
 getch();
 }
