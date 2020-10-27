#include<iostream>
using namespace std;
int main()
{
 int nilai;
 cout<<"=============";
 cout<<"\n|| Tugas 7 ||";
 cout<<"\n=============";
 cout<<"\n";
 cout<<"Masukkan Batas Nilai :";cin>>nilai;
    for(int a=1; a<=(nilai*2)-1; a++)
    {
     if (a <= nilai){
     for(int b = 1; b <= a; b++)
            cout<<b;
        }else{
        for(int c = 1; c <=nilai*2-a; c++)
            cout<<c;
     }
        cout<<endl;
    }
}

