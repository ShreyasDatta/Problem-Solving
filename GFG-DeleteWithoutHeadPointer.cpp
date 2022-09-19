// Q. You are given a pointer/ reference to the node which is to be deleted from the linked list of N nodes. The task is to delete the node. Pointer/ reference to head node is not given. 

void deleteNode(Node *del)
    {
       Node *temp;
       del->data = del->next->data;
       del->next=del->next->next;
    }
