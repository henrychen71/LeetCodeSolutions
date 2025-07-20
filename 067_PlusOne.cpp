#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i= digits.size()-1; i >=0; i--){
            if(digits[i] <9){
                digits[i]+=1;
                return digits;
            }else{
                digits[i] =0;
            }
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};

int main() {
    Solution sol;
    vector<int> digits = {9, 9, 9};
    vector<int> result = sol.plusOne(digits);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
