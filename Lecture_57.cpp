#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    // char name;
    // bool temp;
    node * next;

    node(int data_input)
    {
        this->data = data_input;
        this->next = NULL;
    }
};

void printnode(node * & node)
{
    cout<<"value "<<node->data;
    cout<<"Address "<<node->next;
}

void printlinkedlist(node *  & head)
{
    if(head==NULL)
    {
        cout<<"The linked list is still empty! "<<endl;
        return;
    }
    
    node *temp;
    temp =head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" -->";
        temp = temp->next;
    }
    cout<<endl;
}

void Insertatstart(node * &head, int data)
{
    node * temp = new node(data);

    if(head==NULL)
    {
        head = temp;
        return;
    }

    temp->next = head;
    head = temp;
}

void Insertatend(node * &head, int data)
{
    node *temp = new node(data);

    if(head==NULL)
    {
        head = temp;
        return;
    }

    node *end;
    end = head;

    while(end->next!=NULL)
    {
        end = end->next;
    }

    end->next = temp;
}

int main()
{


    // node * node1 = new node(5);
    // head = node1;
    // // printlinkedlist(head);
    // // cout<<endl;

    // node * node2 = new node(7);
    // node1->next = node2;
    // // printlinkedlist(head);
    // // cout<<endl;

    // node * node3= new node(8);
    // node2->next = node3;
    // printlinkedlist(head);
    // cout<<endl;
    // cout<<node1->data;

    // printnode(node1);
    // printnode(node2);
    // printnode(node3);

    // node2->next = node3;

    // printnode(node1);
    // // cout<<endl<<node2<<endl;
    // // printnode(node2);
    // // cout<<endl<<node3<<endl;
    // // printnode(node3);
    // printnode(node1->next);
    // printnode(node1->next->next);

    node * head=NULL;
    
    // printlinkedlist(head);

    Insertatend(head,5);
    Insertatend(head,7);
    Insertatend(head,8);

    Insertatstart(head, 3);
    // printlinkedlist(head);
    Insertatstart(head,2);
    // printlinkedlist(head);
    Insertatend(head,9);
    Insertatend(head,10);

    printlinkedlist(head);

    return 0;
}