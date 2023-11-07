# Dining 2-Philosophers Schedule

In this exercise, you will write a program that checks whether two schedules have no conflict.

## What to Do

1. With your partner, edit the `schedule.cc` source file using VS Code. Add the required header. Replace all the TODO comments with working code.
1. Compile your program with the `$ make` shell command. Use the **debug compile error** procedure to debug any compile errors.
1. Run your program with the `$ ./schedule` shell command.
1. Test that your program passes all of the test cases in the test suite above. If your program suffers a runtime error, use the **debug runtime error** procedure to debug the error. If your program does not produce the expected output, use the **debug logic error** procedure to debug the error.
1. Test your program against automated test with the `$ make test` command. Debug any runtime errors or logic errors using the same procedures.
1. Check your header with the `$ make header` shell command. Correct any errors.
1. Check for format errors with the `$ make format` shell command. Correct any errors.
1. Check for lint errors with the `$ make lint` shell command. Correct any errors.
1. After your program passes all of these tests and checks, push your code to GitHub. Use the usual trio of commands: `git add`, `git commit`, and `git push`.

## Introduction

In this program we test whether the two strings representing the eat-sleep schedule of two philosophers form a valid schedule (aka no conflict) or not. The two philosophers spend their entire life thinking, eating, and sleeping; each has their own room for sleeping and thinking, and use a common area for eating. But the philosophers do not like to socialize with each other, so they cannot eat at the same time in the common area.

Let us assume that the schedule of each philosopher is a string
that contains only the letters 'e' and 's' such that if the character at index 'i' is 's' it means that at hour 'i', the philosopher is either sleeping or thinking, and if the character at index 'i' is 'e' it means that at hour 'i', the philosopher is eating. For example, the schedule "ssees" means that the philosopher at hour 0 was sleeping/thinking, at hour 1 was also sleeping/thinking, at hours 2 and 3 was eating, and hour 4 was sleeping/thinking.

The input to our problem will be two strings that contains only the letters 'e' and 's' representing the sleep/think and eat schedule of each philosopher; the two strings can have different lengths. Ideally each string will have the length 24, representing the schedule for the entire day, but asking you to input two times 24 characters may be too much.

When checking whether the two strings represent a valid schedule, we only check that the two philosophers cannot eat at the same time, i.e. the strings do not contain an 'e' at the same index.

This problem is loosely based on the [Dining philosophers problem](https://en.wikipedia.org/wiki/Dining_philosophers_problem), in which no two concurrent processes executing the same program can access their common critical section at the same time. 

Our problem asks one to check whether the two strings over the alphabet {'e', 's'} represent a valid schedule, i.e. the strings do not contain an 'e' at the same index. 

For example "ese" and "ses" are valid schedules, but "sees" and "sseess" is not valid since at index 2 both strings have an 'e'.

In this exercise, we will write a short program that will prompt the computer user to enter two strings containing only the charcaters 'e' and 's', and then use the function _IsValid_ with the two strings as parameters to check whether the strings do not contain an 'e' at the same index. The funciton 'isValid' returns 'true' is the schedule is valid, 'false' otherwise, i.e. the strings do contain an 'e' at the same index.

From previous labs, you recall that in C++, we must `#include` the `string` header file to make use of the `std::string` type. This means that at the top of our source code we need to write `#include <string>` just like we write `#include <iostream>`.

To declare a string in C++, we need to prefix the `string` type with `std::` because strings are not part of the language. Strings are part of the [C++ standard library](https://en.cppreference.com/w/cpp/string). To compare two strsings, one uses the function [compare](https://cplusplus.com/reference/string/string/compare/). To extract the letter at index i, one uses the function [substr](https://cplusplus.com/reference/string/string/substr/).

C++ style and formatting is just as important in this lab as it was in the previous part so please review the information from the previous part regarding C++ style and formatting.

## Requirements

Review the C++ source files and identify all the TODOs.

To compile your program, you use the `clang++` command. If your program does not compile, it will receive a 0 score.

To verify that your formatting is conforming to the standards, use `check_formatting` to check the formatting of your project. Using the feedback from `check_formatting`, make changes to the source code. Continue editing your project until all warnings and errors have been addressed.

Formatting is graded according to the rubric.

## Example Input and Output

```
Please enter the schedule of Philosopher 1: ese
Please enter the schedule of Philosopher 2: ses
Valid schedule
```

```
Please enter the schedule of Philosopher 1: sees
Please enter the schedule of Philosopher 2: sseess
Invalid schedule
```

```
Please enter the schedule of Philosopher 1: eess
Please enter the schedule of Philosopher 2: eeeee
```

```
Please enter the schedule of Philosopher 1: e
Please enter the schedule of Philosopher 2: s
Valid schedule
```

## Next Steps

After you have pushed your code, you are done with this lab. You may ask your TA for permission to sign out and leave.
