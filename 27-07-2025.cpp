// class Solution {
//   public:
//     void setMatrixZeroes(vector<vector<int>> &mat) {
//         // code here
//         int m = mat.size();
//         int n = mat[0].size();
        
//         vector<bool> ZeroInRow(m, false);
//         vector<bool> ZeroInCol(n, false);
        
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(mat[i][j]==0){
//                     ZeroInRow[i]=true;
//                     ZeroInCol[j]=true;
//                 }
//             }
//         }
        
//         for(int i=0;i<m;i++){
//             if(ZeroInRow[i]==true){
//                 for(int j=0;j<n;j++){
//                     mat[i][j]=0;
//                 }
//             }
//         }
        
//         for(int i=0;i<n;i++){
//             if(ZeroInCol[i]){
//                 for(int j =0;j<m;j++){
//                     mat[j][i]=0;
//                 }
//             }
//         }
//     }
// };