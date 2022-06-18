#include<iostream>
using std::cout;
using std::cin;

void solve(){
  int n; cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  bool result = false;
  for(int i=0; i<n; i++){
    int sum = 0;
    for(int j=0; j<n; j++){
      if(j!=i)
        sum += arr[j];
    }
    if(sum / (n-1) == arr[i] && sum % (n-1) == 0){
      result = true;
      break;
    }
  }
  if(result)
    cout<<"YES\n";
  else
    cout<<"NO\n";
}

int main(){
  int T; cin>>T;
  while(T--)
    solve();
  return 0;
}
