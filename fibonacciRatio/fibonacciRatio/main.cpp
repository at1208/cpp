#include <iostream>;

using namespace std;

int main(){
    int num1 = 1, num2 = 1, nextnum = 0;
    double rnum;
    while(nextnum< 200){
        nextnum = num1 + num2;
        rnum = nextnum/static_cast<double>(num2);
        cout<<rnum<<endl;
        num1 = num2;
        num2 = nextnum;
        
    }
    
    return 0;
}
