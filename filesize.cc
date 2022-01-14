#include <iostream>
#include <fstream>
using namespace std;

// output format to use IDENTICALLY:
//BSH:Saru> ./filesize input.3lines input.1line
//program: ./filesize
// input.3lines: 3
// input.1line: 1

int main( int argc, char* argv[] )
{
    // just to get you started, this is how to refer to the arguments that were passed
    ifstream in;
    for (int arg = 0; arg < argc; ++arg) {
            std::cout << "argv[" << arg << "]: " << argv[arg] << '\n' ;
      if(arg > 0) {
        in.open(argv[arg]);
        if(in.is_open()) {
          int count = 0;
          while(in.good()) {
            std::string temp;
            getline(in, temp);
            count++;
          }
          std::cout << count;
          in.close();
        }
        else {
          std::cout << "-1";
        }
      }
}


    exit(0); // this means that the program executed correctly!
}
