// Submitted By: Arnold Panuelo
// Submitted To: Edper M. Castro
// Mini Project 1
#include <iostream>
#include <string>
using namespace std;

int main()
{
  //declare variables
   int month_;
   int demand_;
   int pad_;
   int forecast_;
   
   //declare constants
   double SMOOTHING_PAR_A_1 = 0.1;
   double SMOOTHING_PAR_A_2 = 0.2;
   int PF_ = 21;
   cout << "Input demand for month 1.";
   cout << endl;
   cin >> demand_;
   cout << endl;
   cout << "The predicted demand for month 1 is " << demand_ << endl; //Still confused as to what
   cout << endl;
    
   cout << "Input demand for month 2.";
   cin >> demand_;
   forecast_ = SMOOTHING_PAR_A_1 * demand_ + (1 - SMOOTHING_PAR_A_1) * demand_;
   for (demand_ = 21; demand_ < 43; demand_++) {
   cout << forecast_ << endl;
   }
  
   
  
   
 return 0;  
   
}
