#include <iostream>
#include <string>
using namespace std;
const char nl = '\n';
string sum(const string &a, const string &b);
string sub(const string &a, const string &b);
int main() {
  string a, b;
  cout << "First number\t>> "; cin >> a;
  cout << "Second number\t>> "; cin >> b;
  cout << "Sum\t>> " << sum(a, b) << nl;
  cout << "Sub\t>> " << sub(a, b);
}