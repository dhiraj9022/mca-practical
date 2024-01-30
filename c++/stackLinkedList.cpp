#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *link;

    Node(int n)
    {
        this->data = n;
        this->link = NULL;
    }
};

class Stack
{
    Node *top;

public:
    Stack() { top = NULL; }

    void push(int val)
    {
        Node *temp = new Node(val);
        if (!temp)
        {
            cout << "overflow" << endl;
        }
        temp->data = val;
        temp->link = top;
        top = temp;
    }

    void pop()
    {
        Node *temp;
        if (top == NULL)
            cout << "underflow" << endl;
        temp = top;
        top = top->link;
        free(temp);
    }

    bool isEmpty()
    {
        return top == NULL;
    }

    void show()
    {
        Node *temp;
        if (top == NULL)
            cout << "underflow" << endl;
        temp = top;
        while (temp != NULL)
        {
            cout << temp->data;
            temp = temp->link;
            if (temp != NULL)
            {
                cout << "<->";
            }
        }
    }
};

int main()
{
    Stack s; 
    cout << "1. push \t 2. pop \t 3. show \t 5. Empty \t 4. exit\n";
    while (1)
    {
        int choice, val;
        cout << "enter your choice number :";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "enter the value to push : ";
            cin >> val;
            s.push(val);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.show();
            break;
        case 5:
            s.isEmpty();
            break;
        case 4:
            cout << "exiting.....";
            exit(0);
        default:
            cout << "invalid";
            break;
        }
    }
    return 0;
}
