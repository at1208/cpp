#include <iostream>;

using namespace std;

int main(){
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if(age>12 && age<18){
        cout<<"You are Teenager"<<endl;
    }else{
        cout<<"You are not Teenager"<<endl;
    }
    return 0;
}
