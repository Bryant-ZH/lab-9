// Isaac Flores
// Iflores2027@csu.fullerton.edu
// @IsaacFlores11
// Partners: @Bryant-ZH

#include <algorithm>
#include <iostream>
#include <string>

// Boolean function with two parameter strings that returns true
// if the strings do not contain an 'e' at the same index
// and false if the strings contain an 'e' at the same index.
bool IsValid(const std::string& schedule1, const std::string& schedule2) {
  bool is_valid = true;
  int max_length = std::min(schedule1.length(), schedule2.length());

  for (int i = 0; i < max_length; i++) {
    if (schedule1[i] == 'e' && schedule2[i] == 'e') {
      is_valid = false;
      break;
    }
  }

  return is_valid;  // You were missing this return statement.
}

int main(int argc, char const* argv[]) {
  std::string schedule1;
  std::string schedule2;

  std::cout << "Please enter the schedule of Philosopher 1: ";
  std::cin >> schedule1;

  std::cout << "Please enter the Schedule of Philosopher 2: ";
  std::cin >> schedule2;

  bool is_valid_schedule = true;

  is_valid_schedule = IsValid(schedule1, schedule2);

  if (is_valid_schedule) {
    std::cout << "Valid schedule" << std::endl;
  } else {
    std::cout << "Invalid schedule" << std::endl;
  }

  return 0;
}