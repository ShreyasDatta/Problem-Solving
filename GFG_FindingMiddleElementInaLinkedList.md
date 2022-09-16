Q. Find Middle element of a linked list

> Using slow and fast pointer

```
class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        Node* fast = head;
        Node* slow = head;
        
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        
        return (slow->data);
    }
};
```
