#include<iostream>
using namespace std;
int main() {
    //  logical operators are ( "&&"  "||"    "!" )
    //  && only executes if both condition satisfies
    //  || executes even with one condition satisfies
    //  ! will show opposite of result 
    bool a=1;
    bool b= !a;
    bool c = true;
    cout<<a<<", "<<b<<", "<<c;
    cout<<endl<<endl;
    
    bool first =(a&&c);
    cout<< first<<'\n';

    bool second =(a&&b&&c);
    cout<<second<<'\n';

    bool third = (a||b||c);
    cout<<third;


}