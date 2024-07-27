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

void Insertatmiddleafterwhichelement(node *& head, int location, int data)
{

    node *temp = new node(data);

    node *var = head;

    while(var->data!= location)
    {
        var = var->next;
        if(var==NULL)
        {
            cout<<"The location doesnt exist, chexk the location again "<<endl;
            return;
        }
    }

    temp->next = var->next;
    var->next = temp;
    
}

void deletenodeoflinkedlist(node *&head, int data)
{
    if(head->data == data)
    {
        cout<<"The head of te linked list is going to be deleted !! "<<endl;
        head = head->next;
        return;
    }

    node *temp;
    node *prev;
    temp = head;

    while(temp->data!=data)
    {
        prev=temp;
        temp = temp->next;
    }

    if(temp->next == NULL)
    {
        prev->next = NULL;
        return;
    }
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

    Insertatmiddleafterwhichelement(head,3,4);
    Insertatmiddleafterwhichelement(head,3,6);
    // Insertatmiddleafterwhichelement(head,100,101);

    deletenodeoflinkedlist(head,2);
    deletenodeoflinkedlist(head,10);
    deletenodeoflinkedlist(head,6);
    deletenodeoflinkedlist(head,100);

    printlinkedlist(head);

    return 0;
}