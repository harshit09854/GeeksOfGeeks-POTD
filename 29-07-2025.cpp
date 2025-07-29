// class Solution {
//   public:
//     vector<int> asciirange(string& s) {
//         // code here
//         int n = s.size();
//         vector<int>firstOcc(26,-1);
//         vector<int>lastOcc(26,-1);
        
        
//         for(int i=0;i<n;i++){
//             int idx = s[i]-'a';
//             if(firstOcc[idx]==-1){
//                 firstOcc[idx] = i;
//             }
//             lastOcc[idx] = i;
//         }
//         vector<int>result;
//         for(int i=0;i<26;i++){
//             if(firstOcc[i]!=-1 && lastOcc[i]!=-1 && firstOcc[i]<lastOcc[i]){
//         int sum=0;
//                 for(int j = firstOcc[i]+1; j < lastOcc[i]; j++){
//                      sum += int(s[j]); 
                    
//                 }
//                    if (sum > 0) { 
//                     result.push_back(sum);
//                 }            }
//         }
        
        
//         return result;
        
    
//     }
// };