#include <iostrem>
#include <vector>
using namespace std;
vector<int> productexceptself(vector<inty> nums) {
vector<int> right(nums.size(),1);

for(int i=num.size()-2; i>=0; i--)
  right[i]=right[i+1]*num[i+1]
  
int left =1;
for(int i =0; i<num.size(); i++){
  right[i] = right[i]*left;
  left=num[i];
  }
  return right;
  }
 
