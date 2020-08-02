int Solution::maxSubArray(const vector<int> &A) {
    int cursum =INT_MIN;
    int sum=0;
    for(int i=0; i<A.size();i++){
        sum+=A[i];
        cursum= max(cursum, sum);
         
        if (sum<0){
            sum=0;
        }
    }
    return cursum;
}
