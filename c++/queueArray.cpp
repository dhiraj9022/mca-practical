#include<iostream>
using namespace std;

int n;
int* queue = new int[n];
int front= -1, rear = -1;

void insert(int val) {
    if(rear == n-1){
        cout<<"overflow"<<endl;
    }else{
        if(front == -1){
            front=0;
        }
        rear = rear + 1;
        queue[rear] = val;
    }
}

void remove() {
    if (front == -1 || front > rear) {
        cout << "underflow" << endl;
    }
    else {
        cout << "popped" << endl;
        front++;
    }
}

void show() {
    if(front == -1){
        cout<<"empty"<<endl;
    }

    for (int i = front; i <= rear; i++) {
        cout << queue[i] << " ";
    }
    cout << endl;
}

int main() {
    cout << "enter the size :";
    cin >> n;
    cout << "1. insert \t 2. delete \t 3. show \t 4. exit\n";
    while (1) {
        int choice, val;
        cout << "enter your choice number :";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "enter the value to insert : ";
            cin >> val;
            insert(val);
            break;
        case 2:
            remove();
            break;
        case 3:
            show();
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
