## Min Steps in Infinite Grid 

Problem: [Problem link](https://www.interviewbit.com/problems/min-steps-in-infinite-grid/)

This problem is not clear and even seems like tricky at once, 

<strong>Thought Process: </strong>
<ol>
<li>Initially as the problem wanted us to count the minimum number of steps, I thought it is an optimization problem</li>
<li>Now as it was given that it is a 2D matrix, so whenever there is a word like a 2D matrix, I usually imagine a graph paper</li>
<li>As I tried some random cases, I found out that it is a much simpler problem.</li>
<li>So I ultimately reframed the question in my mind</li>
</ol>

<strong>Question:</strong> 
All it actually wants to say is you are given a graph paper and multiple points on it(along with
the specified order in which you need to visit them) now, count the unit steps to visit all the points so that we need to cover minimum distance.

<strong>Solution:</strong>
* Imagine a graph paper, now take any random two points in it. Let them be (x1,y1), (x2,y2).
* Try to compute the distance we need to travel to reach the point, you will find out that the minimum possible distance we need to 
travel to reach the point is the maximum of the absolute difference in their x and y coordinates => **max(abs(x1-x2), abs(y1-y2))**
* All the motions that we will make to reach the points are allowed.  
