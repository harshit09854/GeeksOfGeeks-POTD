// class Solution {
//   public:
//     int missingNumber(vector<int> &arr) {
//         // code here
//         int n = arr.size();
        
//         vector<int> nums(n+1,0);
        
//         for(int i=0;i<n;i++){
//             if(arr[i]>0&&arr[i]<=n){
//                 nums[arr[i]]=1;
//             }
//         }
        
        
//         for(int i=1;i<=n;i++){
//             if(!nums[i]){
//                 return i;
//             }
//         }
//         return n+1;
        
        
//     }
// };