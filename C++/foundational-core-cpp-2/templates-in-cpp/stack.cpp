#include <iostream>
using namespace std;

template <typename T>
class Stack{
private:
    const static int defaultSize = 5;
    const int maxSize = 1000;
    int size;
    int top;
    T *stptr;
public:
    // Ctor and dtor
    Stack(int s = defaultSize) {
        if (s > 1000 || s < 1) {
            cout << "Invalid size." << endl;
        }
        size = s;
        stptr = new T[size];
        top = -1;
    }
    ~Stack() { delete[] stptr; }
    
    // methods and functions
    // push, pop, isEmpty, isFull, top
    bool isEmpty() { return top < 0; }
    bool isFull() { return top >= size-1; }
    T &push(const T &i) {
        if (isFull()) {
            cout << "stack is full." << endl;
        }
        return stptr[++top] = i;
    }
    
    T &pop() {
        if (isEmpty()) {
            cout << "stack is empty." << endl;
            return NULL;
        }
        return stptr[top--];
    }
    
    int length() {
        cout << "stack size is: " << this->size << endl;
        return size;
    }
    
    int recent() {
        cout << "stack top is: " << this->top << endl;
        return top;
    }
};



int main(int argc, char const *argv[]) {
    Stack<int> bookShelf;
    for (int i = 0; i < 4; i++) {
        bookShelf.push(i);
    }
    
    for (auto i : bookShelf) {
        cout << i << ' ';
    }
    
    
    return 0;
}