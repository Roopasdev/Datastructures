//queue program
#include<iostream>
using namespace std;
//queue class
class queue
{
    private:
    int arr[5];
    int head;
    int tail;
    public:
    queue()
    {
        head = -1;
        tail = -1;
    }
    bool isEmpty()
    {
        if(head == -1 && tail == -1)
        {
            cout << "The queue is empty " << endl;
            return true;    
        }
        else
        {
            cout << "The queue has some elements "<< endl;
            return false;
        }
    }
    bool isFull()
    {
        if(tail == 4)
        {
            cout<< "The array is full "<< endl;
            return true;
        }
        else
        {
            cout << "The array is not full" << endl;
            return false;
        }
    }
    void enqueue(int value)
    {
        if(isFull())
        {
            cout << "The queue is full so you cannot add elements to it "<<endl;
        }
        else if(isEmpty())
        {
            head = tail = 0;
        }
        else
        {
            tail ++;
        }
        arr[tail] = value;
    }
    int dequeue()
    {
        int x;
        if(isEmpty())
        {
            cout << "The queue is already empty so you cannot take out the elements " << endl;
        }
        else if(head == tail)
        {
           x = arr[head];
           arr[head] = 0;
           head = tail = -1; 
        }
        else
        {
            x = arr[head];
            arr[head] = 0;
            head ++;    
        }
        return x;
    }
    void show()
    {
        for(int i = 0; i<=4;i++)
        {
            cout << arr[i] << endl;
        }
    }
};
int main()
{
    cout << "hello world "<< endl;
    int option;
    queue q1;
    do
    {
        cout << "(1)->Enqueue Adding elements"<< endl;
        cout << "(2)->Dequeue Removing elements"<< endl;
        cout << "(3)->isEmpty Checks if the queue is empty"<< endl;
        cout << "(4)->isFull Checks if the queue is full"<< endl;
        cout << "(5)->show printing the elements"<< endl;
        cout << "(0)->exit exit the program "<< endl;
        cout << endl;
        cout << "Enter an option from 0-5: ";
        cin >> option;
        switch (option)
        {
        case 0:
            cout<<"Terminating the program........ " << endl;
            break;
        case 1:
            int val;
            cout << "Enter a number to insert in the queue : "<< endl;
            cin >> val;
            q1.enqueue(val);
            break;
        case 2:
            cout << "Removing the first element...... "<< endl;
            q1.dequeue();
            break;    
        case 3:
            q1.isEmpty();
            break;
        case 4:
            q1.isFull();
            break;
        case 5:
            q1.show();
            break;            
        default:
            cout << "Enter a valid number" << endl;
            break;
        }
    } while (option != 0);   
}