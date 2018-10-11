#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main() 
{

    //Deklarasi Variable
    int x;
   
    //Input user
    cout<<" Masukkan Suhu : " ;
	cin>>x;
    cout<<endl ;
   
    //Perhitungan suhu
    if (( x > 50 )) cout<<"Panas" ;
    if (( x < 50 )) cout<<"Dingin" ;
   
    return 0 ;
 
}
