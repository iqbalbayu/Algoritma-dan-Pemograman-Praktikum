#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;	
int main() 
{
   //Deklarasi Variable
    int bilangan;
   
    //Input user
    cout<<" Masukkan angka : " ;
	cin>>bilangan;
    cout<<endl ;
   
    string message ;
    message = bilangan % 2 == 0? "Genap" : "Ganjil" ;
    cout<<message ;
   
    return 0 ;
   
}
