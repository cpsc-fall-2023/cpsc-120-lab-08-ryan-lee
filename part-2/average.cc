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

  if (arguments.size() < 2) {
    cout << "error: you must supply at least one number.\n";
    return 1;
  }
  long double sum{};
  long double current_number{};
  for (string& current : arguments) {
    if (arguments.at(0) == current) {
      continue;
    }
    current_number = stod(current);
    sum += current_number;
  }
  cout << "average = " << sum / (arguments.size() - 1) << '\n';

  return 0;
}
