#include <iostream>
using namespace std;

void fibonacci (int z=0) {
    int x=1, y=0, n=0;
    cin >>n;
    for (;z<=n;){
        z=x+y;
        x=y;
        y=z;
        if(z<=n){
            cout <<z <<endl;
        }
    }
}
int main(){
    fibonacci(0);
}
