#include <iostream>
using namespace std;
int main(){
   int x{0};
   int first_digit, second_digit, fourth_digit, fifth_digit;

   cout << "Please enter a 5 digit palindrome: ";
   cin >> x;

   fifth_digit = x % 10;
   x /= 10;
   fourth_digit =  x % 10;
   x /= 100;
   second_digit = x % 10;
   first_digit = x / 10;

   (fifth_digit == first_digit &&
    fourth_digit == second_digit?
      cout << "Digit is a palindrome!\n" :
      cout << "Digit is not a palindrome!\n");
}