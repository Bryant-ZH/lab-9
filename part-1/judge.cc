// Isaac Flores
// Iflores2027@csu.fullerton.edu
// @IsaacFlores11
// Partners: @Bryant-ZH

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

// Calculate and return the Olympics average of scores.
// The return value is the average mean of all elements of scores, except for
// the minimum and maximum elements.
double JudgeAverage(std::vector<double>& scores) {
  if (scores.empty()) {
    return 0.0;
  }
  double sum = 0.0;
  for (double score : scores) {
    sum += score;
  }

  double min_score = *std::min_element(scores.begin(), scores.end());
  double max_score = *std::max_element(scores.begin(), scores.end());

  sum -= (min_score + max_score);
  int denominator = scores.size() - 2;

  double average = sum / denominator;
  return average;
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
