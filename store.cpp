#include <iostream>
using namespace std;
int main(){
   int Acc{0};
   double b_balance{0};
   double t_charges{0};
   double t_credits{0};
   double c_limit{0};
   double n_balance{0};
   
   cout << "Enter account number(-1 to quit): ";
   cin >> Acc;

   while(Acc != -1){
      cout << "Enter beginning balance: ";
      cin >> b_balance;

      cout << "Enter total charges: ";
      cin >> t_charges;

      cout << "Enter total credits: ";
      cin >> t_credits;

      cout << "Enter credit limit: ";
      cin >> c_limit;

      n_balance = b_balance + t_charges - t_credits;
      cout << "New balance is: " << n_balance << "\n\n";
      
      if(n_balance > c_limit){
         cout << "Account:      " << Acc << endl;
         cout << "Credit limit: " << c_limit << endl;
         cout << "Balance:      " << n_balance << endl;
         cout << "Credit Limit Exceeded.\n\n";
         }

      cout << "Enter account number(-1 to quit): ";
      cin >> Acc;
      }
}