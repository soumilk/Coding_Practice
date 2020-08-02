## Max Sum Contiguous Subarray

Problem: [Problem link](https://www.interviewbit.com/problems/max-sum-contiguous-subarray/)

This is a very famous question, yet a good problem. 

<strong>Thought Process: </strong>
<ol>
<li>Initially, I thought of a 2 pointer approach where they will track the maximum contiguous subarray and then I will add them and get the result</li>
<li>Later I realised that we need only the sum, not that sub array, so keeping the track of the sum would be ok.</li>
<li>As I tried some random cases, I found out that the negative numbers are a problem, my initial approach worked well on the positive numbers but negative numbers 
were a problem.</li>
<li>After some careful observation, I got it.</li>
</ol>

<strong>Solution:</strong>
* We know that we need to find the maximum sum possible and that first thing comes to mind is to keep adding the numbers and somehow store the maximum sum that 
has occured at each step of iteration.
* Suppose there is an array this [-3,-4,-7,-1] then, the answer is -1. 
* Now as it is intutive that we keep adding at each step and store the maximum, but in this case [-3,2,4], if we keep adding the sum, then the addition of negative
numbers will decrease the sum, i.e. why whenever the sum is less than 0, we reset the sum to be 0, because that wont impact our answer as we have already storede the 
maximum in another variable, and the addition of negative number is only gonna reduce the sum. 

