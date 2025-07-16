#include<iostream> 
#include<vector>
#include<algorithm> 

using namespace std; 

class Solution{
public: 

     int trap(vector<int>& height) {
       int ans =0; 
       int l=0; 
       int r = height.size(); 
       int l_max = 0; 
       int r_max =0; 
       while(l<r){
         if(height[l]<height[r]){
           if(l_max<=height[l]) l_max = height[l]; 
           ans += (l_max - height[l]); 
           ++l; 
         }else {
           if(r_max<=height[r]) r_max = height[r]; 
           ans += r_max - height[r]; 
           --r; 
         }
       }
       return ans; 
     }
};
int main(){
  vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
  Solution sol; 
  cout << sol.trap(height) <<endl; 
  return 0; 
}
