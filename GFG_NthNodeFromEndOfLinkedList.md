Q. Nth node from end of linked list

```
int getNthFromLast(Node *head, int n)
{
    Node* temp1=head;
    Node* temp2=head;
    int l=1;
    
    while(temp1->next){
        temp1=temp1->next;
        l++;
    }
    
    if(l<n)
        return -1;
    
    for(int i=0;i<l-n;i++){
        temp2=temp2->next;
    }
    
        
    return (temp2->data);
}
```
