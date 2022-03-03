// Expected Time Complexity:O(log N)
// Expected Auxiliary Space:O(1)

bool isPowerofTwo(long long n){
        
         bool ans= (n&(n-1))==0;
         if(n==0) return false;
         else if(ans==1 ) return true;
         else if(ans==0)
         return false;
}
