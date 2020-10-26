ListNode* rev(ListNode *A){
      ListNode *prev=NULL;
    ListNode *curr=A;
    ListNode *next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
 }
ListNode* Solution::reverseBetween(ListNode* A, int m, int n) {
    
    if(m==n) return A;
    ListNode *temp=A,*first=A,*last=A,*prev=NULL;
    int i=1;
    for(;i<m;i++){
     prev=temp;
     temp=temp->next;
    }
   
   first=temp;
   
    for(;i<n;i++)
     temp=temp->next;
    last=temp;
    
    ListNode* next=last->next;
    last->next=NULL;
    
    first=rev(first);
    
    if(prev!=NULL)prev->next=first;
    else A=first;
    temp=first;
    while(temp->next!=NULL)
     temp=temp->next;
    
    temp->next=next;
    return A;
}