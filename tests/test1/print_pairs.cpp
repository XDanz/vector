//
// Created by danter on 2016-09-07.
//

#include <utility>
#include <vector>
#include <iostream>

std::vector<std::pair<const char *,int>>* getPair(int argc, char *argv[]) {
  std::vector<std::pair<const char *,int>> * vec =
      new std::vector<std::pair<const char *,int>>();
  for (int i = 0; i < argc; i++) {
      vec->push_back (std::pair<const char *,int>{argv[i], i});
    }
  return vec;
};

int main (int argc, char *argv[])
{
  std::vector<std::pair<const char *, int>> *pairs = getPair (argc, argv);
  for (std::vector<std::pair<const char *, int>>::iterator it = pairs->begin (); it != pairs->end (); it++)
    {
      std::cout << "(" << it->first << "," << it->second << ")" << std::endl;
    }

  delete (pairs);
}