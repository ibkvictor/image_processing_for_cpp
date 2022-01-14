// fcopy1.cpp  :  Copies files.
// Call: fcopy1  source  [ destination ]
// ----------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
inline void openerror( const char *file)
{
  cerr << "Error on opening the file " << file << endl;
  exit(1);                // Ends program closing
}
void copy( istream& is, ostream& os);    // Prototype
int main(int argc, char *argv[])
{
  if( argc < 2 || argc > 3)
  {  cerr << "Call: fcopy1 source [ destination ]"
        << endl;
   return 1;
}
ifstream infile(argv[1]);
if( !infile)
   openerror( argv[1]);
if( argc == 2)
   copy( infile, cout);
else {
   ofstream outfile(argv[2]);
   if( !outfile )
      openerror( argv[2]);
   copy( infile, outfile);
   outfile.close();
     // or: exit(1);
     // Open 1st file
// Just one sourcefile.
// Source and destination
     // Open 2nd file
     // Unnecessary.
     // Unnecessary.
}
  infile.close();
return 0; }
// all opened files.
void copy( istream& is, ostream& os)  // Copy it to os.
{
   string s;
  while( getline(is, s) ){
	os<<s<<endl;      
	os.put('\n');            // or:  os << c ;
 }
}
