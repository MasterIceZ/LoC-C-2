#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr)->ios::sync_with_stdio(false);
  int n, maxx = -1e9, minn = 1e9;
  cin >> n;
  for(int i=1, x; i<=n; ++i){
    cin >> x;
    maxx = max(maxx, x);
    minn = min(minn, x);
  }
  cout << maxx - minn << "\n";
  return 0;
}