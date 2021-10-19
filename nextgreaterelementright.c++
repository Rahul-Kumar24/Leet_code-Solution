#include<bits/stdc++.h>
using namespace std;
int main (){
          int t;
          cin >> t;
          while (t--){
                    int n;
                    cin >> n;
                    vector<int>ans, v(n);
                    stack<int>st;
                    for ( int i = 0; i < n; i++){
                              cin >> v[i];
                    }
                    for ( int i = n-1; i >=0; i--){
                              if(st.empty()){
                                        ans.push_back(-1);
                              }else{
                                        if(st.top()>v[i]){
                                                  ans.push_back(st.top());
                                        }else{
                                                  while(st.size()>0&&st.top()<=v[i]){
                                                            st.pop();
                                                  }
                                                  if(st.size()==0){
                                                            ans.push_back(-1);
                                                  }else{
                                                            ans.push_back(st.top());
                                                  }
                                        }
                              }
                              st.push(v[i]);
                    }
                    reverse(ans.begin(), ans.end());
                    for ( int i : ans ){
                              cout << i << " ";
                    }
          }
}