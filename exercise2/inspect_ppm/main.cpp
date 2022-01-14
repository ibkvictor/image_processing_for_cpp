#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
double x = 12.0;
cout.precision(3); // Precision 2
cout << " By default: " << x << endl;
cout << " showpoint: " << showpoint << x << endl;
cout << " fixed: " << fixed << x << endl;
cout << " scientific: " << scientific << x << endl;
cout << cout.width(3) << cout.fill('*') << 34 <<endl;
cout << setw(4) << setfill(' ') << 1 <<endl;
cout << setw(10) << setfill('*') << left << setprecision(4) << showpoint << 2.0 <<endl;
return 0;
}
