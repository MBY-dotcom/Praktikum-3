#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int a=0, kubik,jumbil,jumkubik, jumlah=0, i;
    
    cout<<"=================================";
 	cout<<"\n|| Jumlah Deret Bilangan Kubik ||";
	cout<<"\n=================================";
	cout<<"\n";
    cout<<"Masukkan bilangan awal : ";
    cin>>a;
    
    
    jumbil=0;
	jumkubik=0;
	for (i=a;i<=a+5;i++) {
		kubik=i*i*i;
		jumbil=jumbil+i;
		jumkubik=jumkubik+kubik;
		cout << i<<" "<<kubik<<endl;
		}
	cout <<"================================== \n";
	cout <<jumbil<<" "<<jumkubik;
	getch();
	}
