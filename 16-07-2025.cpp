// class Solution {
//   public:
//     int BinarySearch(vector<int> &arr, int val){
//         int l = 0;
//         int r = arr.size()-1;
//         while(l<=r){
//             int m = l+(r-l)/2;
//             if(arr[m] == val){
//                 return m;   
//             }
//             if(arr[m]>=val){
//                 r = m-1;   
//             }
//             if(arr[m]<val){
//                 l = m+1;
//             }
//         }
//         return r;
//     }
//     vector<int> GetPrimes(int N){
//         vector<bool> seives(N+1,1);
//         vector<int> primes;
//         int cnt = 1;
//         for(int i = 2;i<=N;i++){
//             if(seives[i]){
//                 primes.push_back(i);
//                 for(int j = i+i;j<=N;j+=i){
//                     seives[j] = 0;
//                 }
//             }
//         }
        
//         return primes;
//     }
//     int CheckPow8(int prime, int n){
//         long long N = n;
//         long long p = 1;
        
//         for(int i = 1;i<=8;i++){
//             p *= prime;
//             if(p > N)return 0;
//         }
        
//         return 1;
//     }
//     int countNumbers(int n) {
        
//         int cnt = 0;
//         vector<int> primes = GetPrimes(sqrt(n));
        
//         for(int i = 0;i<primes.size();i++){
//             int prime_num = primes[i];
           
        
//             cnt += CheckPow8(prime_num, n);
            
//             int sqrt_n_by_prime = sqrt(n)/prime_num;
            
//             if(prime_num >= sqrt_n_by_prime)break; 
            
//             auto upper_idx = BinarySearch(primes,sqrt_n_by_prime);
//             auto lower_idx = BinarySearch(primes,prime_num);
//             cnt +=  upper_idx - lower_idx;
            
//         }
        
//         return cnt;
//     }
// };