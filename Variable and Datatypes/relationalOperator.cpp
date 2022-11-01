#include<iostream>
using namespace std;
int main() {
    // relation operators are ( '=='    '>'   '<'  '>='  '<='  '!=')
    int a=5;
    int b =3;

    bool first = (a==b);
    cout<<first<<"\n";

    bool second = (a>b);
    cout<<second<<'\n';

    bool third = (a<b);
    cout<<third<<'\n';

    bool fourth = (a>=b);
    cout<<fourth<<'\n';

    bool fifth = (a<=b);
    cout<<fifth<<'\n';

    bool sixth = (a!=b);
    cout<<sixth<<'\n';
}