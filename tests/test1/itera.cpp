//
// Created by danter on 2016-09-04.
//
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
int main() {
  std::vector<std::string> v;
  std::cout << "Enter lines of text to be sorted,\n";
  std::cout << "followed by word stop:\n";

  for (;;) {
      std::string s;
      getline (std::cin, s);
      if (s == "stop")
        break;
      v.push_back (s);
    }
  std::cout << "The same lines before sorting;\n";
  for (auto &s : v) {
      std::cout << s << std::endl;
    }
  std::sort(v.begin (), v.end ());
  std::cout << "The same lines after sorting;\n";

  for (auto &s : v) {
      std::cout << s << std::endl;
    }
  return 0;
}