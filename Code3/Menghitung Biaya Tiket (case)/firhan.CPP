#include <iostream.h>
#include <conio.h>

main(){

int q,menucode,totalprice,bay,balik;
char yt;

awal:
cout<<"======== Pemesanan Tiket Travel ==========="<<endl;
cout<<endl;
cout<<"1.  Yogyakarta - Jakarta"<<endl;
cout<<"2.  Yogyakarta - Surabaya"<<endl;
cout<<"3.  Yogyakarta - Solo"<<endl;
cout<<"4.  Yogyakarta - Semarang"<<endl;
cout<<"5.  Yogyakarta - Magelang"<<endl;
cout<<"6.  Yogyakarta - Purworejo"<<endl;
cout<<"7.  Yogyakarta - Bali"<<endl;
cout<<"8.  Yogyakarta - Pacitan"<<endl;
cout<<"9.  Yogyakarta - Bogor"<<endl;
cout<<"10. Yogyakarta - Malang"<<endl;
cout<<endl;
cout<<"==========================================="<<endl;
cout<<"Masukan  Kode Tiket : ";
cin>>menucode;
cout<<"Masukan Jumlah : ";
cin>>q;

switch(menucode)
{
case 1:
totalprice=q*250000;
cout<<" Total : Rp."<<totalprice<<" ";
break;

case 2:
totalprice=q*150000;
cout<<" Total : Rp."<<totalprice<<" ";
break;

case 3:
totalprice=q*50000;
cout<<" Total : Rp."<<totalprice<<" ";
break;

case 4:
totalprice=q*60000;
cout<<" Total : Rp."<<totalprice<<" ";
break;

case 5:
totalprice=q*30000;
cout<<" Total : Rp."<<totalprice<<" ";
break;

case 6:
totalprice=q*80000;
cout<<" Total : Rp."<<totalprice<<" ";
break;

case 7:
totalprice=q*275000;
cout<<" Total : Rp."<<totalprice<<" ";
break;

case 8:
totalprice=q*40000;
cout<<" Total : Rp."<<totalprice<<" ";
break;

case 9:
totalprice=q*160000;
cout<<" Total : Rp."<<totalprice<<" ";
break;

case 10:
totalprice=q*120000;
cout<<" ------------------------"<<endl;
cout<<" Total : Rp."<<totalprice<<" ";
break;
default:
cout<<"Masukan hanya angka 1-10";
}
cout<<endl;
cout<<"Uang Bayar   = Rp. ";cin>>bay;
balik=bay-totalprice;
cout<<"Uang Kembali = Rp. " <<balik<<",-"<< endl;
cout<<endl;

cout<<"Apakah anda ingin mengulang ? [Y/T] : ";
cin>>yt;
cout<<endl;
if(yt=='Y' || yt=='y')
{goto awal;}
if(yt=='T' || yt=='t')
{goto selesai;}

selesai:
return 0;
getch();
}
