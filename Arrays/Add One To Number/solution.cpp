vector<int> Solution::plusOne(vector<int> &A) {
    vector<int> ans;
    reverse (A.begin(), A.end());
    int carry = 1;
    for(int i=0;i<A.size();i++){
        int  sum=0;
        sum = A[i]+carry;
        ans.push_back(sum %10);
        carry = sum/10;
    }
    while(carry){
        ans.push_back(carry %10);
        carry= carry/10;
    }
    while(ans[ans.size() -1]==0 && ans.size()>1)
    {
        ans.pop_back();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
