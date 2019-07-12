#include <iostream>
#include <conio.h>
using namespace std;

int main(){

int jammasuk,jamkeluar,lama;

cout<<"===== Program Menghitung Jam Kerja ====="<<endl;
cout<<"Jam Masuk = ";
cin>>jammasuk;
cout<<"Jam Keluar = ";
cin>>jamkeluar;
cout<<"========================================"<<endl;

if (jamkeluar>=jammasuk)
{
lama=jamkeluar-jammasuk;
}
else
{
lama=(12-jammasuk)+jamkeluar;
}
cout<<"Lama = "<<lama<<" ";
getch();
}
