#include<iostream>
using namespace std;

//class node
class Node
{
    public:
    int key;
    int data;
    Node * link;
    Node()
    {
        key = 0;
        data = 0;
        link = NULL;
    }
    Node(int k,int d)
    {
        key = k;
        data = d;
    }
};
class linkedlist
{
    public:
    Node * head;
    linkedlist()
    {
        head = NULL;
    }
    linkedlist(Node * n)
    {
        head = n;
    }
    Node* nodeExist(int k)
    {
        Node* temp = NULL;
        Node* ptr = head;
        while(ptr != NULL)
        {
            if(ptr->key == k)
            {
                temp = ptr;
            }
            ptr = ptr -> link;
                
            
        }
        return temp;
    }
    void appendNode(Node* n)
    {
        if(nodeExist(n->key)!=NULL){
            cout <<"A node with the same key already exist, try to create a node with different key" << endl;
        }
        else
        {
            if(head == NULL)
            {
                head = n;
                cout << "Node is appended " << endl;
            } 
            else
            {
                Node * ptr = head;
                while(ptr -> link != NULL)
                {
                    ptr = ptr->link;
                } 
                ptr -> link = n;
                cout << "The node is appended "<< endl;
            }

        }
    }
    void prependNode(Node* n)
    {
        if(nodeExist(n->key)!= NULL)
        {
            cout << "A node already exist with same key try with different key "<<endl;
        }
        else
        {
            n -> link = head;
            head = n;
        }
    }
void fulllist() 
{
    if (head == NULL) {
        cout << "No Nodes in Singly Linked List";
    } 
    else 
    {
        cout << endl << "Singly Linked List Values : ";
        Node * temp = head;
        while (temp != NULL) 
        {
            cout <<"key-> " << temp -> key << " data-> " << temp -> data << endl;
            temp = temp -> link;
        }
    }
  }
    void singleNode(int k)
    {
        Node* cur = head;
        Node* temp;
        while(cur -> key != k )
        {
            cur = cur-> link;
        }
        if(cur != NULL)
        {
            cout << "key: " <<cur -> key << " data: "<<cur -> data<< endl;
        }
    }
};
int main()
{
    linkedlist l1;
    cout << "created the list " <<endl;
    int key,k,data,option;
    cout << "created the variables" << endl;
    do
    {   
        cout << "(1)-> Append Node" << endl;
        cout << "(2)-> Prepend Node "<< endl;
        cout << "(3)-> Does the node exist"<< endl;
        cout << "(4)-> Render List"<< endl;
        cout << "(5)-> Get single node"<< endl;
        cout << "(0)-> Exit the program "<< endl; 
        
        //Node* n1;
        cin >> option;
        Node * n1 = new Node();
        cout << "got the options "<< endl;
        switch (option)
        {
        case 0:
            cout << "Terminating the program....... " << endl;
            break;
        case 1:
            cout << "Enter the key "<< endl;
            cin >> key;
            cout << "Enter the data "<< endl;
            cin >> data;
            cout << "got the dataset" << endl;
            n1 ->key = key;
            n1 ->data = data;
            l1.appendNode(n1);
            cout << "Node appended "<< endl;
            break;
        case 2:
            cout << "Enter the key "<< endl;
            cin >> key;
            cout << "Enter the data "<< endl;
            cin >> data;
            n1 ->data = data;
            n1 ->key = key;
            cout << "assigned " << endl;
            l1.prependNode(n1);
            break;
        case 3:
            cout << "Enter the key "<< endl;
            cin >> k;
            l1.nodeExist(k);    
            break;
        case 4:
            l1.fulllist();
            break;
        case 5:
            cout << "Enter the key :";
            cin >> k;
            l1.singleNode(k);    
        default:
            cout << "Enter a valid number ";
            break;
        }
    } while (option != 0);
    
}