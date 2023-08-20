#include <iostream>
#include <string>
#include <exception>
using namespace std;

/*
HERE, WE WILL BE USING TEMPLATE FOR CONTAINER PURPOSE ~ STACK ~ last in first out... (ex: bunch of books on each other)
IMPLEMENTATION OF STACK
*/
// CREATING EXCEPTION CLASS
class E : public std::exception {
public:
    // once you do explicit, then operator overloading and other methods will only work if TYPE of lhs == rhs , (lhs = your object) and rhs = another object you are comparing with
    // otherwise you need to typecast one of them and make both of them as same type (USER DEFINED TYPE)
    explicit E(const char *s) throw() : msg(s) {}  // CTOR with explicit
    const char * what() const throw() { return msg; }
private:
    E(){};  // cannot use default CTOR
    const char *msg;
};

// NOW TEMPLATES for STACK LIFO DATA STRUCTURE
template <typename T>
class Stack {
private:
    static const int defaultSize = 10;
    static const int maxSize = 1000;
    int size;
    int top;
    T *stackPtr;
public:
    explicit Stack(int s = defaultSize); // ctor
    ~Stack() { delete[] stackPtr; } // dtor ~ deletes stack pointer when object destroys
    
    // methods
    T &push(const T &);
    T &pop();  // removes last one
    bool isEmpty() const { return top < 0; }
    bool isFull() const { return top >= size - 1; }
    int TOP() const { return top; }
    int SIZE() const { return size; }
};

// Stack<T> ctor;
template <typename T>
Stack<T>::Stack (int s) {
    if (s >maxSize || s < 1) throw E("invalid stack size");
    else size = s;
    stackPtr = new T[size]; // *ptr = new int[5];
    top = -1;
}

template <typename T>
T &Stack<T>::push(const T &i) {
    if (isFull()) throw E("stack is full");
    return stackPtr[++top] = i;
}

template <typename T>
T &Stack<T>::pop() {
    if (isEmpty()) throw E("stack is empty");
    return stackPtr[top--];
}

int main(int argc, char const *argv[]) {
    // NOW USING STACK
    try {
        Stack<int> si(5);
        cout << "si size: " << si.size() <<  endl;
        cout << "si top: " << si.top() << endl;
        
        for (int i : {1, 2, 3, 4, 5}) {
            si.push(i); // appending elements
        }
        
        cout << "si top after pushes: " << si.top() << endl;
        cout << "si is: " << (si.isFull() ? "" : "not ") << "full" << endl;
        
        while (!si.isEmpty()) {
            cout << "popped" << si.pop() << endl;
        }
    } catch (E &e) {
        cout << "Stack error: " << e.what() << endl;
        
    }
    return 0;
}





















