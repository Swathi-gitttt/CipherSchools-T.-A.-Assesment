#include <bits/stdc++.h>
using namespace std;
void print_vector(vector<int> v){
   cout << "[";
   for(int i = 0; i<v.size(); i++){
      cout << v[i] << ", ";
   }
   cout << "]"<<endl;
}
class Solution {
   public:
      vector<int> sumZero(int n) {
         vector <int> ans(n);
         int x = 0;
         for(int i = 0; i < n - 1; i++){
            ans[i] = (i + 1);
            x += (i + 1);
         }
         ans[n - 1] = -x;
         return ans;
      }
};
main(){
   Solution ob;
   print_vector(ob.sumZero(10)) ;
}
