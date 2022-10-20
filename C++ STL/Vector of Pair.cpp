#include<bits/stdc++.h>
using namespace std;

int main(){
  //initializing vector of pair
  vector<pair<int, int>> v;
  //storing value to vector of pair
  for(int i=0; i<5; i++){
      v.push_back({i, i+1});
  }
                
  //displaying values
  for(int i=0; i<5; i++)
      cout<<v[i].first<<" "<<v[i].second<<endl;

  return 0;
}
                  
