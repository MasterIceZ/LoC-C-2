#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr)->ios::sync_with_stdio(false);
  long long n, cnt = 0;
  cin >> n;
  for(long long i=5ll; i<=n; i*=5){
	  cnt += n / i;
  }
  cout << cnt;
  return 0;
}
