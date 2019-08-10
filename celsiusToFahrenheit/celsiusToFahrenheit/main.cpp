#include <iostream>;

using namespace std;

int main(){
    double ctemp, ftemp;
    cout<<"Enter temperature in celsius"<<endl;
    cin>>ctemp;
    ftemp = (ctemp*1.8)+32;
    cout<<"temperature in fahrenheit is "<<ftemp<<endl;
    return 0;
}
