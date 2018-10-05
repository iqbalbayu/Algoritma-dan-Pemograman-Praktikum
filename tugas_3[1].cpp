#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
	int angka;
	
	cout<<"masukan angka : "; cin>>angka;
	cout<<endl;
	//seleksi pembandingan AND, kedua kondisi harus bernilai benar 
	if ((angka > 0) && (angka < 10))
	{
	cout<<"Anda memasuka antara 1 sampai 9";
	}else
	{
	cout<<"Yang anda masukan bukan  antara 1 sampai 9";
	}
	return 0;
}
