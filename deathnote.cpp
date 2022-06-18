#include<iostream>
#include<vector>
using std::cout;
using std::cin;

void solve(){
  int n, m;
  std::vector<int> vec;
  cin>>n>>m;
  for(int i=0; i<n; i++){
    int value; cin>>value;
    vec.push_back(value);
  }
  int r = 0;
  for(int i=0; i<n; i++){
    int v = vec[i] + r;
    cout<<(v/m)<<' ';
    r = v%m;
  }
}

int main(){
  solve();
  return 0;
}
