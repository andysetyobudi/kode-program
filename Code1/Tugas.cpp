#include <iostream>
#include <conio.h>

using namespace std;

main (){
	int istri,anak,jam,T_istri,T_anak,lembur,gaji,T_gaji,jenjang,pajak,T_bayar;
	
	cout<<"\n Menghitung Gaji Karyawan";
	cout<<endl;
	cout<<"\n no.       Pendidikan         Gaji   ";
	cout<<"\n 1.            D3         Rp.1.000.000";
	cout<<"\n 2.            S1         Rp.1.500.000";
	cout<<"\n 3.            S2         Rp.2.000.000";
	cout<<endl;	
	cout<<"\n Masukkan Jenjang Pendidikan : ";
	cin>>jenjang;
	cout<<"\n Masukkan Jumlah Istri       : ";
	cin>>istri;
	cout<<"\n Masukkan Jumlah Anak        : ";
	cin>>anak;
	cout<<"\n Masukkan Jumlah Jam Lembur  : ";
	cin>>jam;
	
switch (jenjang) {
	case 1 :
		gaji = 1000000;
	break;
	case 2 :
		gaji = 1500000;
	break;
	case 3 :
		gaji = 2000000;
	break;
}
	
	if (istri >= 1) {
		T_istri = istri * 600000;
	}
	else if (istri == 0) {
		T_istri = 0;
	}
	
	if (anak >= 2){
		T_anak = 2 * 400000;
	}
	else if (anak <= 2) {
		T_anak = anak * 400000;
	}
	
	lembur = jam * 50000;
	
	T_gaji = gaji + T_istri + T_anak + lembur;
	pajak = T_gaji * 0.05;
	T_bayar = T_gaji - pajak;
	

	cout<<"\n Total Gaji : "<<T_bayar;
	getch();
}