#include <iostream>;

using namespace std;

int main(){
    int num1 = 1, num2 = 1, nextnum = 0;
 
    
    while(nextnum < 200){
        nextnum = num1 + num2;
        cout<<nextnum<<endl;
        num1=num2;
        num2=nextnum;
       
    }
    return 0;
}
