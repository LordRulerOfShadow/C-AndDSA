#include<iostream>
using namespace std;
int main() {
    int a=5;
    cout<<a<<'\n';
    int sizeInt=sizeof(a);

    char b='v';
    cout <<b<<'\n';
    int sizeChar=sizeof(b);

    bool bl=true;
    cout<<bl<<'\n';
    int sizeBool=sizeof(bl);

    float f=1.2;
    cout<<f<<'\n';
    int sizeFloat=sizeof(f);

    double d=1.23;
    cout<<d<<'\n';
    int sizeDouble=sizeof(d);

    cout<<"size of int is "<<sizeInt<<"."<<endl<<"size of char is "<<sizeChar<<"."<<endl<<"size of bool is "<<sizeBool<<"."<< endl<<
    "size of float is "<<sizeFloat<<"."<<endl<<"size if double is "<<sizeDouble<<"."<<endl;
   return 0;
}