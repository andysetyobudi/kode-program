#include <iostream.h>
#include <conio.h>

main(){

int q,menucode,totalprice;

cout<<"1. American Pizza Premium"<<endl;
cout<<"2. American Pizza Reguler"<<endl;
cout<<"3. Italian Pizza Premium"<<endl;
cout<<"4. Italian Pizza Reguler"<<endl;
cout<<"Masukan  Kode Menu : ";
cin>>menucode;
cout<<"Masukan Jumlah : ";
cin>>q;

switch(menucode)
{
case 1:
totalprice=q*100000;
cout<<" Total : "<<totalprice<<" ";
break;

case 2:
totalprice=q*60000;
cout<<" Total : "<<totalprice<<" ";
break;

case 3:
totalprice=q*150000;
cout<<" Total : "<<totalprice<<" ";
break;

case 4:
totalprice=q*75000;
cout<<" Total : "<<totalprice<<" ";
break;
default:
cout<<"Masukan hanya angka 1-4";
}
getch();
}
