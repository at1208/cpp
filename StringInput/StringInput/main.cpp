#include <iostream>
#include <string>

using namespace std;

int main(){
    string firstname;
    string secondname;
    
    cout<<"enter your first name "<<endl;
    cin>>firstname;
    cout<<"enter your second name "<<endl;
    cin>>secondname;
    
    string fullname = firstname + " " + secondname;
    cout<<fullname<<endl;
    
}
