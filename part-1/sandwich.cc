// Ryan Lee
// iuu@csu.fullerton.edu
// @kur3o0131
// Partners:

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() != 4) {
    cout << "error: you must supply three arguments.\n";
    return 1;
  }

  string protein = arguments.at(1);
  string bread = arguments.at(2);
  string condiement = arguments.at(3);
  cout << "Your order:\n"
       << "A " << protein << " sandwich on " << bread << " with " << condiement
       << ".\n";
  return 0;
}
