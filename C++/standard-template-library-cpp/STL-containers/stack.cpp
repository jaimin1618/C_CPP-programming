// NOTE: STL STACK IS CONTAINER ADAPTER CLASS, SO THEY INHERIT DATA FROM ANOTHER
// CONTAINER, JUST LIKE QUEUE
// IF YOU DIRETLY USE THEM, THEIR DEFAULT PARENT IS DEQUE.

#include <iostream>
#include <stack>
#include <vector>
#include <list>
using namespace std;

template <typename T>
void reportStack(T &stk) {
    cout << "size: " << stk.size();
    if (stk.size()) { cout << " | top: " << stk.top() << "\n\n"; }
}

void msg(char const *s) { cout << s; }

int main() {
    msg("init of stack\n");
    vector<int> vi = {1, 2, 3, 4, 5};
    stack<int, vector<int>> stk(vi);  // OR INIT PUSH THEM LATER
    reportStack(stk);
    
    // pushing and popping;
    stk.push(1000);
    reportStack(stk);  // 6 1000
    stk.pop();
    reportStack(stk);  // 5 5
    
    // popping everything out, FULL EMPTY;
    while(!stk.empty()) {
        cout << "popping..." << stk.top() << endl;
        stk.pop();
    }
    
    // Now pusing all elements
    stack<string> ss;
    for (string s: {"one", "two", "three", "four", "five"}) {
        cout << "pushing..." << s << endl;
        ss.push(s);
    }
    reportStack(ss);
    
    cout << "\n\n";
    return 0;
}