#include <iostream> 
#include<iomanip>
using namespace std; 
int main() { 
   float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4}; 
   char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"}; 
   //setw(2), setprecision(3), 
   cout  << setw(5) << "No" << setw(15) << "Name" << setw(10) << "Marks" << endl; 
   for (int r = 0; r < 5; r++) { 
       cout << setw(5) <<  r+1 <<setiosflags(ios::fixed)
            << setw(15) << setprecision(2) << names[r] 
            << setw(10) << marks[r]   << endl; 
   } 
} 
