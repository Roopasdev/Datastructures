#include <iostream>
using namespace std;
//stack class
class stack
{
    private:
    int top = -1;
    int arr[5];
    //default construtor
    public:
    stack()
    {
        for(int i = 0; i<=4;i++){
            arr[i] = 0;
        }
    }
    int read()
    {
        for(int i = 4;i>=0;i--)
        {
            cout<<arr[i]<<endl;
        }
    }
    bool isfull()
    {
        if(top == 4)
        {
            cout<<"The stack is full " << endl;
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isempty()
    {
        if(top == -1)
        {
            cout<< "The stack is empty" << endl;
            return true;
        }
        else
        {
            cout<<"has some elements"<<endl;
            return false;
        }     
    }
    void create(int val)
    {
        if(isfull())
        {
            cout<< "The stack is full so can not push elements into it" << endl;
        }
        else
        {
            top++;
            arr[top] = val;
        }
    }
    int del()
    {
        if(isempty())
        {
            cout << "The stack is empty "<< endl;
        }
        else
        {
            int popval = arr[top];
            arr[top] = 0;
            top--;
            return popval;
        }
    }
    void update(int val, int pos) {
        cout << "update function ";
        arr[pos] = val;

    }  
};
int main()
{
    stack sf;
    int option;
    do
    {
        cout << "Choose one option from 0-3"<<endl;
        cout << "(1)-> create" << endl;
        cout << "(2)-> is empty"<<endl;
        cout << "(3)-> if full"<<endl;
        cout << "(4)-> read"<<endl;
        cout << "(5)-> del"<<endl;
        cout << "(6)-> update"<<endl;
        cout << "(0)-> exit the program"<<endl;
        cout << "enter an option from 0-5 ";
        cin >> option;
        switch (option)
        {
        case 0:
            break;
        case 1:
            int val;
            cout << "enter a value to push ";
            cin >> val;
            sf.create(val);
            break;
        case 2:
            sf.isempty();
            break;
        case 3:
            sf.isfull();
            break;
        case 4:
            sf.read();
            break; 
        case 5:
            sf.del();
            break;  
        case 6:
            int uval,pos;
            cout<<"enter the value to update :";
            cin >> uval;
            cout << "enter the postion to be updated :";
            cin >> pos;
            sf.update(uval,pos);               
        default:
            cout<<"Enter a vaid number "<<endl; 
            break;
        }
    } while (option != 0);
    


}