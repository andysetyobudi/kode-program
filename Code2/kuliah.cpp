#include <iostream>
#include <conio.h>

using namespace std;


int jenkel, tinggi;
char nama;

cout<<"\nInput Nama : ";
gets(nama);
cout<<"\nInput Jenis Kelamin ( L / P) : ";
cin>>jenkel;
cout<<"\nInput Tinggi Badan ; ";
cin>>tinggi;

if (jenkel=='L')
	{
	if (tinggi >= 170)
		cout<<"Selamat Anda Lulus !!";
	else
		cout<<" Maaf Anda Belum Lulus !!";
	}
else if (jenkel=='P')
	{
	if (tinggi >= 155)
		cout<<"Selamat Anda Lulus !!";
	else if
		cout<<" Maaf Anda Belum Lulus !!";
	}
else {
	cout<<" Masukkan !!";
}
getch();
}
