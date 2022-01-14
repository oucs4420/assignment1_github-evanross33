#include <iostream>
#include <fstream>
using namespace std;

// output format to use IDENTICALLY:
//BSH:Saru> ./filesize input.3lines input.1line
//program: ./filesize
// input.3lines: 3
// input.1line: 1

int finalCheck(int count, std::string line);

int main( int argc, char* argv[] )
{
    // just to get you started, this is how to refer to the arguments that were passed
    ifstream in;
    std::cout << "program: " << argv[0]<< '\n';
    for (int arg = 0; arg < argc; ++arg) {
      if(arg > 0) {
        in.open(argv[arg]);
        if(in.is_open()) {
          int count = 0;
          while(in.good()) {
            std::string temp;
            getline(in, temp);
            if(in.good()){count++;}
            else{
              count = finalCheck(count, temp);
            }
          }
          std::cout << argv[arg]<< ": " << count << '\n';
          in.close();
        }
        else {
          std::cout << -1;
        }
      }
}
    exit(0); // this means that the program executed correctly!
}

int finalCheck(int count, std::string line) {
  if(line == "") {
    return count;
  }
  else {
    return count+1;
  }

}
