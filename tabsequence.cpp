#include <iostream>
using namespace std;
int main(){
   int N{1};
   
   cout << "N\t5*N\t10*N\t15*N\n";

   while(N <= 12){
      cout << N << "\t" << 5*N << "\t";
      cout << 10*N << "\t" << 15*N << endl;

      ++N;
      }
}
 