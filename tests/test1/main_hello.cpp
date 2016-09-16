//
// Created by danter on 2016-09-08.
//

#include <utility>
#include "hello.h"

int
main (int argc, char* argv[])
{
    std::pair<const char*, int> p = parse_args (argc ,argv);

    if (p.second != -1)  //p.second  access the element
        hello (p);
}
