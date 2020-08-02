## Min Steps in Infinite Grid 

Problem: [Problem link](https://www.interviewbit.com/problems/add-one-to-number/)

This problem is good for brain stroming, initially seems really easy but, actually we need to consider some corner cases. 

<strong>Thought Process: </strong>
<ol>
<li>Initially, I thought that its just addition of 1 to the last digit and thats all</li>
<li>As I did that, and submited without giving it much thought, it turned out to be wrong. Now after careful consideration, I figured out a case of [9,9,9]</li>
<li>As I tried some random cases, I found out there is a concept of carry involved.</li>
<li>So I ultimately reframed the question in my mind</li>
</ol>

<strong>Question:</strong> 
All it actually wants to say is: You are given an array of digits, now add 1 to the number and just imagine the way we do addition in actual math 
where you need to pass on the carry to next digits and remove any leading zeros which are irrevelent. 

<strong>Solution:</strong>
* To add 1 to the array number, first reverse the number so that we add one to the least significant digit.
* Make a new list and keep on appending the **sum%10** to it 
* Pass on the carry forward and remove the zeros in the end.
* Again reverse the answer vector and return.
