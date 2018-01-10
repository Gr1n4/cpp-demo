#include <iostream>
#include <curses.h>
#include "util.h"
#include "array.h"

using namespace std;

int main() {
  Array test(5);
  test.push(6);
  cout << test.length() << endl;
  test.push(7);
  test.push(8);
  int count = test.length();
  cout << count << endl;
  int* values = test.get();
  for (int i = 0; i < count; i++) {
    cout << values[i] << endl;
  }

  
  //getch();
  return 0;
}
