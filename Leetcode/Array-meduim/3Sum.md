### [15. 3Sum](https://leetcode.com/problems/3sum/)

#### Solution Approach:
<ol>
<li>Sort the array and run an initial loop, if the values in loop are repeated then skip them</li>
<li>Fix the first number from the 3 numbers, now you are left with to find the unique pairs of the 2 numbers whose sum is = -first term</li>
<li>Run another loop in which fix the second number as well and run binary search for the third number which will be the required number to make the whole sum 0</li>
<li>Here also, skip the duplicates value</li>
</ol>
<b>Alternate </b>
<ol>
<li>This sould also be solved using the hashmaps, instead of the binary search, we can make a map and use it</li>
</ol>

#### Code Solution: 
```
 vector<vector<int>> threeSum_binSearch(vector<int>& nums, int target = 0) 
    {
        cout << "threeSum_binSearch" << endl;
        
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        
        vector<vector<int>> res;
        for(int i = 0; i < n; i++)
        {
            if(i > 0 and nums[i] == nums[i - 1]) continue;
            
            int target2sum = target - nums[i];
            for(int j = i + 1; j < n; j++)
            {
                if(j > i + 1 and nums[j] == nums[j - 1]) continue;
                
                int third = target2sum - nums[j];
                if(binary_search(nums.begin() + j + 1, nums.end(), third))
                    res.push_back({nums[i], nums[j], third});
            }
        }
        
        return res;
    }
```
