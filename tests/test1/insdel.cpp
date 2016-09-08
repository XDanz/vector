//
// Created by danter on 2016-09-04.
//
#include <string>
#include <list>
#include <iostream>
using namespace std;
void showlist(const string &str , const list<int> &L) {
  cout << str << endl << "  ";
  for (auto i: L)
    cout << i << " ";
  cout << endl;
}

int main () {
  list<int> L;
  int x;
  cout << "Enter positive integers, followed by 0: \n";
  while (cin >> x, x != 0)
    L.push_back (x);
  showlist ("Initial list:" , L);

  L.push_front (123);
  showlist ("After inserting 123 at the bginning :", L);
  list<int>::iterator i = L.begin ();
  L.insert (++i, 456);
  showlist ("After inserting 456 at the second position :", L);
  i = L.end ();
  L.insert (--i, 999);
  showlist ("After inserting 999 just before the end:", L);
  i = L.begin (); x = *i;
  L.pop_front ();
  cout << "Del at the beginning: " << x << endl;
  showlist ("After deletion:", L);
  i = L.begin ();
  x = *++i; cout << " To be deleted :"  << x << endl;
  L.erase (i);
  showlist ("After this del  (second elem)", L);

}