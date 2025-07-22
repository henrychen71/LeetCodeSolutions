// LeetCode Problem: 387. First Unique Character in a String (Easy)
// Description: Given a string s, find the first non-repeating character 
// and return its index. If it does not exist, return -1.

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq;  
        // Create a hash map to store frequency of each character

        for (char c : s) {
            freq[c]++;
            // Count the frequency of each character in the string
        }

        for (int i = 0; i < s.size(); i++) {
            if (freq[s[i]] == 1) {
                // Find the first character with frequency equal to 1
                return i;  // Return the index of the first unique character
            }
        }

        return -1;  // If no unique character is found, return -1
    }
};

// Simple test function
int main() {
    Solution solution;

    string test1 = "leetcode";
    string test2 = "loveleetcode";
    string test3 = "aabb";

    cout << "Input: " << test1 << " => Output: " << solution.firstUniqChar(test1) << endl;
    cout << "Input: " << test2 << " => Output: " << solution.firstUniqChar(test2) << endl;
    cout << "Input: " << test3 << " => Output: " << solution.firstUniqChar(test3) << endl;

    return 0;
}
