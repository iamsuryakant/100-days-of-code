#include <iostream>
using namespace std;


struct Node{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

//Normal Traversal of Linked List

/*void PrintLis(Node *head)
{
    Node *curr = head;
    
    while(curr != NULL)
    {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}*/

// Recursive Print of Linked List
void rPrintLis(Node *head)
{
    if(head == NULL)
        return;
        
    cout<<head->data<<" ";
    rPrintLis(head->next);
    
}



// Insert Element in the Start.
/*
Node *insertfirst(Node *head, int x)
{
    Node *temp = new Node(x);
    
    temp->next = head;
    return temp;
}

*/

// Insert End
/*

Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);

    if(head == NULL)
        return temp;
    

    Node *curr = head;

    while(curr ->next!=NULL)
    {
        curr = curr->next;
    }

    curr ->next = temp;

    return head;
}
*/


// Delete First Node of Linked List

/*
Node *Delete(Node *head)
{
    if (head == NULL)
        return NULL;

    else{
        Node *curr = head->next;
        delete head;

        return curr;
    }
}
*/


// Delete LastNode From of Linked List

/*
Node *DeleteLas(Node *head)
{
    if(head== NULL)
        return NULL;

    if(head->next == NULL){
        delete head;
        return NULL;

    }

    Node *curr = head;

    while(curr->next->next != NULL)
    {
        curr = curr->next;
    }

    delete (curr->next);
    curr->next = NULL;

    return head;
}

*/


// Insert at any position in the Linked List.
/*
Node *insertPos(Node *head, int pos, int data)
{
    Node *temp = new Node(data);
    if(pos == 1)
    {
        temp->next = head;
        return temp;
    }

    Node *curr = head;

    for(int i = 1; i<= pos-2 && curr != NULL; i++)
    {
        curr = curr->next;
    }

    if(curr == NULL)
        return head;
    
    temp->next = curr->next;
    curr->next = temp;
    return head;
}

*/


int Search(Node *head, int x)
{
   
   int pos = 1;
    Node *curr = head;
    while(curr != NULL)
    {
        if(curr->data == x)
        {
            return pos;
        }

        else{
            pos++;
            curr = curr->next;
        } 
    }
    return -1;
}

int main() {
    
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    rPrintLis(head);
    cout<<"\n";
    cout << Search(head,30)<<"\n";
	return 0;
}