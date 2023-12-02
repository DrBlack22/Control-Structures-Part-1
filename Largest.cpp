#include <iostream>
using namespace std;
int main(){
   int counter{1};
   int largest{0};
   int s_largest{0};

   cout << "Enter units sold: \n";
   cin >> largest;
	
   while(counter < 10){
      int number{0};
      cout << "Enter units sold: \n";
      cin >> number;

      if(number > largest){
         s_largest = largest;
         largest = number;}
            else if(number > s_largest)
               s_largest = number;
               ++counter;}

   cout << "Mxaimum units sold so far: " << largest << endl;
   cout << "2nd max units sold so far: " << s_largest << endl;
}
		
		
		