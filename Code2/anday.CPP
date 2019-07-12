#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
int main() {
    awal:
    float berat;
    char nama [30];
    char pil,yt;
    cout << "==========================================================================" << endl;
    cout << "                                                                          " << endl;
    cout << "                           Laundry Yogyakarta 	                           " << endl;
    cout << "                                                                          " << endl;
    cout << "========----------------------------------------------------------========" << endl;
    cout << "                                                                          " << endl;
    cout << " KODE          Kategori Laundry            Lama               Harga		   " << endl;
    cout << "  1.           - Cepat                     4 Jam              Rp. 7.000   " << endl;
    cout << "  2.           - One Day                   1 Hari             Rp. 4.500  	" << endl;
    cout << "  3.           - Biasa                     3 Hari             Rp. 3.000   " << endl;
    cout << "                                                                          " << endl;
    cout << "--------------------------------------------------------------------------" << endl;
    cout << "============================== Input Data ================================" << endl;
    cout << "\n Nama       : " ;gets(nama);
    cout << " Berat (Kg) : " ;cin>>berat;
    cout << " Kategori   : " ;cin>>pil;
    cout << "                                                                          " << endl;
    cout << "==========================================================================" << endl;


  if (pil=='1') {
    int harga,tot,bay,balik;
    harga=7000;
    tot=berat*harga;
    cout << "Nama             : " <<nama<< endl;
    cout << "Berat Baju       : " <<berat<<" kg"<< endl;
    cout << "Kategori Laundry : Cepat" << endl;
    cout << "Harga            : " <<harga<< endl;
    cout << "Total            : Rp " <<tot<<",-"<< endl;
    cout<<"==========================================================================" << endl;
    cout<<endl;
    cout << "--------------------------------------------------------------------------" << endl;
    cout<<"Uang Bayar   = Rp. ";cin>>bay;
    balik=bay-tot;
    cout<<"Uang Kembali = Rp. " <<balik<<",-"<< endl;
    }
    else if (pil=='2') {
    int harga,tot,bay,balik;
    harga=4500;
    tot=berat*harga;
    cout << "Nama             : " <<nama<< endl;
    cout << "Berat Baju       : " <<berat<<" kg"<< endl;
    cout << "Kategori Laundry : One Day" << endl;
    cout << "Harga            : " <<harga<< endl;
    cout << "Total            : Rp " <<tot<<",-"<< endl;
    cout<<"==========================================================================" << endl;
    cout<<endl;
    cout << "--------------------------------------------------------------------------" << endl;
    cout<<"Uang Bayar   = Rp. ";cin>>bay;
    balik=bay-tot;
    cout<<"Uang Kembali = Rp. " <<balik<<",-"<< endl;
    }
    else if (pil=='3') {
    int harga,tot,bay,balik;
    harga=3000;
    tot=berat*harga;
    cout << "Nama             : " <<nama<< endl;
    cout << "Berat Baju       : " <<berat<<" kg"<< endl;
    cout << "Kategori Laundry : Biasa" << endl;
    cout << "Harga            : " <<harga<< endl;
    cout << "Total            : Rp " <<tot<<",-"<< endl;
    cout<<"==========================================================================" << endl;
    cout<<endl;
    cout << "--------------------------------------------------------------------------" << endl;
    cout<<"Uang Bayar   = Rp. ";cin>>bay;
    balik=bay-tot;
    cout<<"Uang Kembali = Rp. " <<balik<<",-"<< endl;
    }
    else {
    cout<<"Tidak Bisa Dipersoses";
    cout<<endl;
    }
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
}