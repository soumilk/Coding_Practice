### 11. [Container With Most Water](https://leetcode.com/problems/container-with-most-water/)


#### Solution Approach : 

This question can be solved using a two pointer approach.
<ol>
<li>Take a pointer from the front and back of the vector</li>
<li>Now at each iteration we calculate the maximum area possible and store it</li>
<li>After each calculation, as we want the maximum area, we try to either maximise the distance or the height of the container</li>
<li>At each iteration, we compare the heights of the container from start and end, and we increment the front pointer if the front container is smaller 
and decrement the end pointer if it is smaller, in the hope to find the longer containers in the array</li>
<li>We stop the iteration when the front and end pointer meet</li>
</ol>

#### Code: 
```
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea =0 ;
        int i=0;
        int j=height.size()-1;
        for( ; ; ){
            if(i==j)    break ;
            int area= min(height[j] , height[i])* (j-i);
            if(area>maxArea) maxArea = area;
            if(height[i] <= height[j])  i++;
            else    j--;
        }
        cout<<"Max Area: "<<maxArea<<endl;
        return maxArea;
    }
};
```
