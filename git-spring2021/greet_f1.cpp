// Copyright CSAIL 2020
// Adapted from MIT's Missing Semester Lecture 6 (Git)
// CC BY-NC-SA

#include <iostream>
#include <string>

std::string greeting() { return "Hello World!"; }

std::string cat() { return "Meow!"; }

int main(int ac, char *av[]) {
  std::cout << greeting() << std::endl << cat() << std::endl;
}
