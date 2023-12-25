#include<bits/stdc++.h>
 using namespace std;
 string longestCommonPrefix(vector<string>& strs) {
        
      int n = strs.size();
      if(strs.empty()){
          return "";
      }

      string prefix = strs[0];

      for(int i=0; i<n; i++){
          int j=0;

          while(j<prefix.length() && j<strs[i].length() && prefix[j] == strs[i][j]){
              j++;
          }

          prefix = prefix.substr(0, j);

          if(prefix.empty()){
              break;
          }
      }
      return prefix;
    }


int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
        vector<string> strings(n);
         for(int i=0; i<n; i++){
            cin>> strings[i] ;
         }
        string result = longestCommonPrefix(strings);
        cout<< result << endl;  
    }
return 0;}
