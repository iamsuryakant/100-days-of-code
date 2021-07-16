#include<bits/stdc++.h>

using namespace std;


struct Node{
    int data;
    Node *next = NULL;

    Node(int x){
        data = x;
        next = NULL;
    }
};

void PrintLis(Node *head)
{
    Node *curr = head;

    while(curr != NULL)
    {
        cout <<(curr->data)<<" ";
        curr = curr->next;
    }
    cout<<endl;
}


// Remove element from linked list

Node *removeElement(Node *head, int val)
{
    while(head && head->data == val)
    {
        head = head->next;
    }

    if(head== NULL)
    {
        return head;
    }

    Node *curr = head;
    // Node *temp = curr->next;
    while(curr->next)
    {
        if(curr->next->data == val)
        {
            curr->next = curr->next->next;
        }
        else{
            curr = curr->next;
        }
        // curr = curr->next;
    }
    return head;
}

int main()
{
        Node *head=new Node(1);
        head->next = new Node(2);
        head->next->next = new Node(6);
        head->next->next->next=new Node(3);
        head->next->next->next->next = new Node(4);
        head->next->next->next->next->next=new Node(5);
        head->next->next->next->next->next->next = new Node(6);
        head = removeElement(head,6);
        PrintLis(head);
}