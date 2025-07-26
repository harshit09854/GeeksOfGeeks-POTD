// time Complexity: O(n log n) due to sorting, space complexity: O(n) for the frequency map.
// class Solution {
//   public:
//     vector<int> findMajority(vector<int>& arr) {
//         int n = arr.size();
//         unordered_map<int,int> freq;
//         vector<int> ans;
        
//         for (int i = 0; i < n; i++) {
//             freq[arr[i]]++;
//         }

        
//         for (auto& it : freq) {
//             if (it.second > n / 3) {
//                 ans.push_back(it.first);
//             }
//         }

        
//         sort(ans.begin(), ans.end());
//         return ans;
//     }
// };



// second approach time complexity = O(n) time and O(1) space.

// class Solution {
//   public:
//     vector<int> findMajority(vector<int>& nums) {
//         int n = nums.size();
//         int count1 = 0, count2 = 0;
//         int candidate1 = -1, candidate2 = -1;

//         // 1st pass: Find possible candidates
//         for (int num : nums) {
//             if (num == candidate1) {
//                 count1++;
//             } else if (num == candidate2) {
//                 count2++;
//             } else if (count1 == 0) {
//                 candidate1 = num;
//                 count1 = 1;
//             } else if (count2 == 0) {
//                 candidate2 = num;
//                 count2 = 1;
//             } else {
//                 count1--;
//                 count2--;
//             }
//         }

//         // 2nd pass: Verify actual frequencies
//         count1 = 0, count2 = 0;
//         for (int num : nums) {
//             if (num == candidate1) count1++;
//             else if (num == candidate2) count2++;
//         }

//         vector<int> result;
//         if (count1 > n / 3) result.push_back(candidate1);
//         if (count2 > n / 3) result.push_back(candidate2);

//         sort(result.begin(), result.end()); // optional if sorted output needed
//         return result;
//     }
// };
