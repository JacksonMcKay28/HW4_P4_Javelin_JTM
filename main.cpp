#include <iostream>

using namespace std;

int main() {
  int * Lengths;
  int n = 0;
  cin >> n;

  Lengths = new int[n];

  for (int i = 0; i < n; i++) 
  {
    cin >> Lengths[i];
  }

  int sum = 0;

  for (int j = 0; j < n; j++) 
  {
    sum = sum + Lengths[j];
  }

  sum = sum - (n-1);
  cout << sum;
}