#include<iostream>
using std::cout;
using std::cin;

void solve(){
  long long n; cin>>n;
  if(n > 6)
    cout<<((n+1)/2)*5LL<<'\n';
  else
    cout<<15<<'\n';
}

int main(){
  int T; cin>>T;
  while(T--)
    solve();
  return 0;
}
