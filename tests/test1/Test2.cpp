//
// Created by danter on 2016-09-03.
//

#include <iostream>
#include <vector>

class A {
 protected:
  std::string name;
  std::size_t age;
 public:
  A (const std::string& name, size_t age)
      : name (name), age (age)
  { std::cout << "A::ctor " << this <<")"
              << "name:" << name
              << std::endl; }

  A (const A& test) {
    const A *t = &test;
    name = test.name; age = test.age;
    std::cout << "A::cpy(" << t << " to-> " << this << ")" << std::endl;
  }


  bool operator== (const A& rhs) const
  {
    return name == rhs.name &&
           age == rhs.age;
  }

  A& operator=(const A& rhs)
  {
    if (*this != rhs)
      {
        name = rhs.name;
        age = rhs.age;
      }
    std::cout << " A::assign ()" << std::endl;
    return *this;
  }

  A& operator=(A&& rhs)
  {

    name = rhs.name;
    age = rhs.age;
    std::cout << " A::move ()" << std::endl;
    return *this;
  }

  bool operator!= (const A& rhs) const
  {
    return !(rhs == *this);
  }

  const std::string& getName () const
  {
    return name;
  }

  size_t getAge () const
  {
    return age;
  }
  void setAge (size_t age)
  {
    A::age = age;
  }

  bool operator< (const A& rhs) const
  {
    if (name < rhs.name)
      return true;
    if (rhs.name < name)
      return false;
    return age < rhs.age;
  }
  bool operator> (const A& rhs) const
  {
    return rhs < *this;
  }
  bool operator<= (const A& rhs) const
  {
    return !(rhs < *this);
  }
  bool operator>= (const A& rhs) const
  {
    return !(*this < rhs);
  }

  virtual ~A ()
  {
    std::cout << "dstr(" << this << ") name:" << name << std::endl;
  }

};

class B: public A {
  int size;
 public:
  B (const std::string& name, size_t age, int size): A (name, age), size(size)
  { std::cout << "B::ctor " << this <<")"
              << "name:" << name << ", size:" << size
              << std::endl;}

  B (const B& b): A(b) {
    size = b.size;
  }

  int getSize () const
  {
    return size;
  }

  B& operator=(B&& rhs)
  {
    name = rhs.name;
    age = rhs.age;
    size = rhs.size;
    std::cout << " B::move ()" << std::endl;
    return *this;
  }
  B (): A("Daniel",39), size(167)
  {
    std::cout << "B::ctor(" << this <<")"
              << "name:" << name
              << std::endl;
  }
};

B getB() {
  return B{ "Dan", 40 , 167};
}


int main (int argc, char *argv[]) {
//
//  A t = {"Nisse", 22} ;
//  A t2(t);
//
//  t = t2;
  std::cout << " main() => " << std::endl;
  //B b{"Nils", 22, -3};
  B b2{"Dan1",38,167}, c2;
  //c2 = std::move (getB ());

  std::cout << " main() => done" << std::endl;


  return 0;
}
