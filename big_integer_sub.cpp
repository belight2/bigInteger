#include <string>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
using namespace std;
bool cmp(string const &a, string const &b){
  if(a.size() != b.size()) return a.size() < b.size();
  int idx = 0;
  while(a[idx] == b[idx]) idx++;
  return a[idx] < b[idx];
}
string sub(const string &a, const string &b){
  string v1 = string(rall(a));
  string v2 = string(rall(b));
  string ans{}; 
  bool isneg{};
  while(v1.size() != v2.size()) v1.size() > v2.size() ? v2.pb('0') : v1.pb('0');
  if(cmp(a, b)){ swap(v1, v2); isneg = 1; }
  bool carry{};
  for(int idx = 0; idx < v1.size(); idx++){
    int num = v1[idx] - v2[idx];
    if(carry) num -= 1;
    carry = (num < 0) ? 1 : 0;
    if(carry) num += 10;
    ans.pb(num+'0');
  }
  ans = string(rall(ans));
  string tmp{}; int idx{};
  while(idx < ans.size() && ans[idx] == '0') idx++;
  for(int i = idx; i < ans.size(); i++) tmp.pb(ans[i]);
  return (tmp.empty()) ? "0" : (isneg) ? "-"+tmp : tmp;
}