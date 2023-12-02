#include <iostream>
using namespace std;
int main(){
   int new_line{8};
   
   while(new_line > 0) {
      if(new_line % 2 != 0)
         cout << ' ';

      int stars{8};

      while(stars > 0) {
         cout << "* ";
         --stars;}

   cout << endl;
   --new_line;}
}