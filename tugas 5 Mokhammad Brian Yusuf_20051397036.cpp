#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int a=0, c, jumlah=0, i, n;
    
    cout<<"====================================";
 	cout<<"\n|| Jumlah Deret Bilangan Beda = 4 ||";
	cout<<"\n====================================";
	cout<<"\n";
    cout<<"Masukkan bilangan awal : ";
    cin>>a;
    cout<<"Masukkan jumlah sampai deret ke-n : ";
    cin>>n;
    
    cout<<"Deret ke-"<<n<<" : ";
    cout<<a<<",";
    jumlah=jumlah+a; 
    for(i=0; i<n-1; i++){
             c=a+4;
             a=c;
             cout<<c<<",";
             jumlah=jumlah+c;                      
    }
    
    cout<<"\nJumlah deret ke-"<<n<<" : ";
    cout<<jumlah; 
    
    getch();
    return 0;    
}
