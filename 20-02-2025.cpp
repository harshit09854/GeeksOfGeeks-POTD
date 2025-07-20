// class Solution {
//   public:
//     int countValid(int n, vector<int>& arr) {
//         // code here
//         // 9 * (10)^(n-1)
//         int total = 9*pow(10,n-1);
        
//         vector<bool> isInarr(10,false);
        
//         for (int d : arr) isInarr[d] = true;
        
//         vector<int> OtherDigits;
//         for(int i=0;i<=9;i++){
//             if(!isInarr[i]) OtherDigits.push_back(i);
//         }
        
        
//         int countWithoutArrDigits = 0;
//         int m = OtherDigits.size();
        
//          if (m == 0) {
//             countWithoutArrDigits = 0;
//         } else {
//             for (int i = 0; i < m; i++) {
//                 if (OtherDigits[i] == 0) continue;  
//                 int count = 1;
//                 for (int j = 1; j < n; j++) {
//                     count *= m;
//                 }
//                 countWithoutArrDigits += count;
//             }
//         }

//         return total - countWithoutArrDigits;
//     }
// };
