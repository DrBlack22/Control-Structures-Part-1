#include <iostream>
#include <iomanip>
using namespace std;
int main(){
   double rad{0};

   cout << "Please enter sphere's radius: \n";
   cin >> rad;

   cout << "Circumference of the sphere is: " << 2 * 3.14159 * rad << "\n\n";
   cout << "Area of the sphere is: " << 4 * 3.14159 * (rad * rad) << "\n\n";
   cout << setprecision(2) << fixed;
   cout << "Volume of the sphere is: " << 1.33333 * (3.14159 * (rad *rad)) << "\n\n";

} 