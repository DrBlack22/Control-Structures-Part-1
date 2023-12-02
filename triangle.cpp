#include <iostream>
using namespace std;
int main(){
   double x{0};
   double y{0};
   double z{0};
   char i{'y'};

   while(i == 'y'){
      cout << "Enter a number: \n";
      cin >> x;
 
      cout << "Enter a number: \n";
      cin >> y;
 
      cout << "Enter a number: \n";
      cin >> z;

     (x - y < z && x - z < y &&
      y - x < z && y - z < x &&
      z - x < y && z - y < x ?
      cout << "Yes! These could be sides of a triangle!\n\nEnter y to check again(n to quit)! ":
      cout << "No! These can't be sides of a triangle!\n\nEnter y to check again(n to quit)! ");
      
      cin >> i;
      }
}  