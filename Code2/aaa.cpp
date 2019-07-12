#include <iostream>
#include <conio.h>
using namespace std;
main() {
int jurusan,aku,aku1,aku3,bayar,jumlah;
cout<<"Masukan 1 untuk D3"<<endl;
cout<<"Masukan 2 untuk S1"<<endl;
cout<<"Masukan 3 untuk BCIS/BCIT"<<endl;
cout<<"Masukan jurusan = ";
cin>>jurusan;
cout<<"Masukan jumlah spp variable = ";
cin>>jumlah;

if (jurusan==1) {
bayar=900000; 
aku=jumlah*80000;
cout<<endl;
cout<<"SPP TETAP = 900000"<<endl;
cout<<"SPP VARIABEL = "<<aku;
cout<<endl;
cout<<"TOTAL = "<<aku+bayar;
}
else if(jurusan==2){
bayar=1200000; 
aku1=jumlah*90000;
cout<<endl;
cout<<"SPP TETAP = 1200000"<<endl;
cout<<"SPP VARIABEL = "<<bayar+aku1; }

else if(jurusan==3) {
bayar=2000000;
aku3=jumlah*120000;
cout<<endl;
cout<<"SPP TETAP = 2000000"<<endl;
cout<<"SPP VARIABEL = "<<bayar+aku3;
}
}


