#include <iostream>
using namespace std;

int main() {
   int x=1, y=0, z=0, n;
   cin >>n;
   while(z<=n){
       z=x+y;
       x=y;
       y=z;
       if(z<=n){
           cout <<z <<endl;
       }
   }
   return 0;
}
