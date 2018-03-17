#include <string>
#include <iostream>
#include "cigarParser.h"

using namespace std;

int main() {
  string cig = "3M1I3M3D2M4P3H4N3S10X11=";
  cout << cig << endl;
  CigarParser cp(cig, true);
  for (int i = 0; i < cp.size(); ++i) {
    cout << cp.operation_at(i) << " - " << cp.length_at(i) << endl;
  }
  return 0;
}
