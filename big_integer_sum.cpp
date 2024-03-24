#include <string>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
using namespace std;
string sum(const string &a, const string &b){
  string v1 = string(rall(a));
  string v2 = string(rall(b));
  string ans{};
  while(v1.size() != v2.size()) v1.size() > v2.size() ? v2.pb('0') : v1.pb('0');
  int carry = 0;
  for(int idx = 0; idx < v1.size(); idx++){
    int tmp = v1[idx] - '0' + v2[idx] - '0'+carry;
    ans.pb((tmp%10) + '0');
    carry = tmp/10;
  }
  if(carry) ans.pb(carry+'0');
  return string(rall(ans));
}