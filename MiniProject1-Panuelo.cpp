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
   int actual_demand_;
   int pad_;
   int forecast_;
   
   //declare constants
   double SMOOTHING_PAR_A_1 = 0.1;
   double SMOOTHING_PAR_A_2 = 0.2;
   int PF_ = 21;
   
   
    while (month_ <= 12)
    {
      cout << "Input actual demand for month " << month_++ << ":";
      cin >> actual_demand_;
      
        cout << "Your prediction with 0.1 is:" << forecast_ << endl;
        forecast = SMOOTHING_PAR_A_1 * actual_demand + (1- SMOOTHING_PAR_A_1) * actual_demand_;
          cout.setf(ios fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);
    }
   }
  
   
  
   
 return 0;  
   
}
