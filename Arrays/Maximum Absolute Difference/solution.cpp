int Solution::maxArr(vector<int> &A) {
    int max1,max2,max3,max4;
    max1=max2=max3=max4= INT_MIN;
    int min1,min2,min3,min4;
    min1=min2=min3=min4=INT_MAX;
    for(int i=0;i<A.size();i++){
    max1 = max(max1,A[i] + i);
    max2 = max(max2,A[i] - i);
    max3 = max(max3,-A[i]+i);
    max4 = max(max4,-A[i]-i);

    min1 = min(min1,A[i] + i);
    min2 = min(min2,A[i] - i);
    min3 = min(min3,-A[i]+i);
    min4 = min(min4,-A[i]-i);
    }
    int ans = max(ans,max1 - min1);
    ans = max(ans,max2 - min2);
    ans = max(ans,max3 - min3);
    ans = max(ans,max4 - min4);
    return ans;
}
