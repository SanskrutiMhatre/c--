#include <iostream>
using namespace std;

int main() {
  int count=1;
  for (int k = 1; k <= 5; k++) {
    for (int i = 5; i > k; i--) {
      cout << " ";
    }
    for (int j = 1; j <= k; j++) {
      cout << "1 ";
    }
    cout << endl;
  }

  return 0;
}
