int Solution::solve(int A, vector<int> &B) {
    
    vector<int> prefixsum;
    int partsum=0;
    prefixsum.push_back(B[0]);
    for(int i=1;i<A;i++) prefixsum.push_back(prefixsum[i-1]+B[i]);
    if(prefixsum[A-1]%3==0) partsum=prefixsum[A-1]/3;
    else return 0;
    
    vector<int> prefixarr, suffixarr;
    int sum=0;
    for(int i=0;i<A;i++) {
        sum+=B[i];
        if(sum==partsum)
            prefixarr.push_back(i);
    }
    
    sum=0;
    for(int i=A-1;i>=0;i--) {
        sum+=B[i];
        if(sum==partsum)
            suffixarr.push_back(i);
    }
    int count=0;
    for(int i=0;i<prefixarr.size();i++){
        for(int j=0;j<suffixarr.size();j++){
                sum=0;
                int temp=0;
                for(int k=prefixarr[i]+1;k<suffixarr[j];k++){
                    temp+=B[k];
                    sum=1;
                }
                if(temp==partsum && sum==1) 
                    count+=1;
            }
        }
    // for(int i=0;i<A;i++){
    //     cout<<prefixsum[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<prefixarr.size();i++){
    //     cout<<prefixarr[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<suffixarr.size();i++){
    //     cout<<suffixarr[i]<<" ";
    // }
    return count;
}
