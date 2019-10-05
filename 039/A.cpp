#include <iostream>
#include <vector>
using namespace std;
 
struct suc {
  char c;
  long long num;
};
 
int main () {
  string S;
  long long N;
  cin >> S >> N;
  
  long len = S.size();
  vector<suc> V(len);
  
  char tmp = S[0];
  int itr = 0;
  V[itr].c = tmp;
  V[itr].num = 1;;
  
  f
