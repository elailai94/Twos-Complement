#include <iostream>
#include <string>

using namespace std;

bool isSignMagNegative(unsigned int n) {
   unsigned int signBit = ((n >> 31) & 0x1);
   if (signBit == 1) {
     cout << "true" << endl;
     return true;
   } else {
     cout << "false" << endl;
     return false;
   }
}

unsigned int toTwosComplement(unsigned int n) {
   if (isSignMagNegative(n) == true) {
      unsigned int twosComplement = ((~(n & 0x7fffffff)) + 1);
      return twosComplement;
   } else {
      return w;
   }
}

int main() {
   unsigned int n = 0;
   cin >> n;
   toTwosComplement(n);
}
