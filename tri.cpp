#include <iostream>
using namespace std;
int main(){
   int rows;
   int columns;

   cout << "Enter rows of triangle: \n";
   cin >> rows;

   while(rows >= 1) {
      columns = rows;

      while(columns > 0) {
         cout << "*";
	 --columns;}

   cout << "\n";
   --rows;}
}