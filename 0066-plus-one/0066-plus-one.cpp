
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int n=digits.size();
       for (int i=n-1;i>=0;i--){
        if(digits[i]<9){ //check if it(!= 9 ) then incerment the last index
        digits[i]++;
      return digits;
        }
        else if (digits[i]==9) // else if (=9) make a digit =0
            digits[i] = 0;
        }

      digits.insert(digits.begin(),1) ;// 
       return digits;

      
    }
};
