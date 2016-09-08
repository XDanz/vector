//
// Created by danter on 2016-09-07.
//

#include <iostream>

void hello (std::pair<const char *, int> pair) {
  if (pair.second == -1)
    std::cerr << " Versta terret!" << std::endl;
  else if (pair.second == 0)
    std::cerr << " Hello world!" << std::endl;
  else {
      std::cout << "Hello ";
      for (int i = 0; i < pair.second; i++)
        std::cout << pair.first << " ";
      std::cout << "\n";
    }
}


std::pair<const char *, int> parse_args (int argc, char *argv[])
{
  if (argc == 0)
    return std::pair<const char *, int>{NULL, argc};
    else if (argc == 1)
    return std::pair<const char *, int>{argv[0], argc};
  else
    {
      return std::pair<const char *, int>{argv[0], atoi(argv[1])? atoi(argv[1]): -1 };
    }
}


