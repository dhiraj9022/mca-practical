#include<iostream>
using namespace std;

int n;
int* stack = new int[n];
int top = -1;

void push(int val) {
    if (top == n - 1) {
        cout << "overflow" << endl;
    }
    else {
        stack[++top] = val;
    }
}

void pop() {
    if (top < 0) {
        cout << "underflow" << endl;
    }
    else {
        top--;
        cout << "popped" << endl;
    }
}

void isEmpty() {
    if (top == -1) {
        cout << "empty" << endl;
    }
}

void show() {
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " ";
    }
    cout << endl;
}

int main() {
    cout << "enter the size :";
    cin >> n;
    int* a = new int[n];
    cout << "enter the array elements :";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "1. push \t 2. pop \t 3. show \t 5. Empty \t 4. exit\n";
    while (1) {
        int choice, val;
        cout << "enter your choice number :";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "enter the value to push : ";
            cin >> val;
            push(val);
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 5:
            isEmpty();
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
