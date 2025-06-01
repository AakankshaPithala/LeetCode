// class Solution {
// public:
//     long long distributeCandies(int n, int limit) {
//         long long result = 0;
//         for(int i=0;i<=limit ; i++ ){
//             for(int j=0;j<=limit; j++){
//                 int k = n - i - j;
//                 if (k >= 0 && k<= limit){
//                     result++ ;
//                 }
//                 // for(int k=0;k<=limit ; k++){
//                 //     if( i+j+k == n){
//                 //         result += 1;
//                 //         cout<< i << " "<<j<<" "<<k<<endl;
//                 //     }

//                 // }
//             }
//         }
//         return result;
//     }
// };


class Solution {
public:
    long long distributeCandies(int n, int limit) {
        long long result = 0;
        for ( int i=0; i<= min(n,limit); i++){
            if(n-i > 2*limit){
                continue;
            }
            int N = n-i;
            result += min(N, limit) - max(0,(N-limit)) + 1;

        }
        return result;
    }
};