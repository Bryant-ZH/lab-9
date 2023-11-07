// TODO: Add the required header

#include <iostream>
#include <string>
#include <vector>

// Calculate and return the Olympics average of scores.
// The return value is the average mean of all elements of scores, except for
// the minimum and maximum elements.
double JudgeAverage(std::vector<double>& scores) {
  // TODO: Compute the sum of all elements

  // TODO: Compute the minimum and maximum

  // TODO: Adjust the sum by eliminating the minimum and maximum

  // TODO: Compute the denominators

  // TODO: Compute the average meand and return it

  // TODO: Remove the return statement below
  return 0;
}

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments(argv, argv + argc);

  if (arguments.size() < 4) {
    std::cout << "error: you must give at least three scores\n";
    return 1;
  }

  std::vector<double> scores;
  for (int i = 1; i < arguments.size(); ++i) {
    scores.push_back(std::stod(arguments.at(i)));
  }

  double average{JudgeAverage(scores)};

  std::cout << "average is " << average << "\n";

  return 0;
}
