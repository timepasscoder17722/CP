#include<iostream>
#include<climits>
using std::cout;
using std::cin;

void solve(){
  int n, m;
  cin>>n>>m;
  long long sum = n, min_num = LLONG_MAX, max_num = LLONG_MIN;
  for(int i=0; i<n; i++){
    int value; cin>>value;
    if(min_num > value)
      min_num = value;
    if(max_num < value)
      max_num = value;
    sum+=value;
  }
  cout<<(sum-min_num+max_num <= m ? "YES" : "NO")<<'\n';
}

int main(){
  int T; cin>>T;
  while(T--)
    solve();
  return 0;
}
