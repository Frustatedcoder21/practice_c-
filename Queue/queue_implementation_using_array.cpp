#include<iostream>
using namespace std;

class queue {
public:
    int *arr;
    int front, rear, size;
    
    queue(int size) {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    
    bool IsEmpty() {
        if (front == -1) {
            return true;
        }
        return false;
    }
    
    bool IsFull() {
        if (rear == size - 1) {
            return true;
        }
        return false;
    }
    
    void push(int val) {
        if (IsFull()) {
            cout << "queue overflow\n";
        } else if (IsEmpty()) {
            front = rear = 0;
            arr[rear] = val;
            cout << arr[rear] << " is pushed\n";
        } else {  
            arr[++rear] = val;
            cout << arr[rear] << " is pushed\n";
        }
    }
    
    void pop() {
        if (IsEmpty()) {
            cout << "nothing to pop\n";
        } else if (front == rear) {
            cout << arr[front] << " is popped\n";
            front = rear = -1;
        } else {
            cout << arr[front] << " is popped\n";
            front++;
        }
    }
    
    ~queue() {
        delete[] arr;
    }
};

int main() {
    queue q(5);
    q.push(5);
    q.push(10);
    q.pop();
    q.pop();
    q.pop();
    return 0;
}
