## Partitions

Problem: [Problem link](https://www.interviewbit.com/problems/partitions/)

<strong>Thought Process: </strong>
<ol>
<li>Initially, I got no clue,how to solve this question</li>
<li>Later I realised that, if I need to make 3 equal parts of the array then the total sum must be divisible by 3.</li>
<li>After that I thought that making a prefix sum is reuired in this question</li>
<li>But after that point I couldnt come up with the solution, so I took help</li>
</ol>

<strong>Solution:</strong>
* As I thought, all I needed to do is keep the track of indices where the sum equals the sum required in each part of the array.
* Needed to make 2 vectors, for prefix and suffix array.
* After that, we needed to find out that the sum in between the prefix and suffix array is also equal to the partial sum.

