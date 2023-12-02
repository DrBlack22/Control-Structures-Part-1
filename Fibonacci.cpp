#include <iostream>
using namespace std;
int main(){
   int a = 0;
   int b = 1;
   int x;

   while(true){
      x = a + b;
      
      cout << x << endl;
      
      a = b;
      b = x;
	}
}