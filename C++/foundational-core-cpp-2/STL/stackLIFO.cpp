// PUSHES AT LAST POPS THE LAST, PYRAMID OF BOOKS
#include <iostream>
#include <list>
#include <stack>
using namespace std;

// STACK DOES NOT HAVE ITERATOS
// IT IS CALLED CONTAINER ADAPTER, MEANS IT CAN COPY ANY TYPE OF CONTAINER
// STACK ADAPTS DATA OF OTHER STRUCTURES AND USE AS IT OWN DATA. ...SEE HOW CONTAINER ADAPTS DATA with init.
int main(int argc, char const *argv[]) {
    
    cout << "INIT STACK FROM LIST" << endl;
    list<int> li = {1, 2, 3, 4, 5};
    
    // Stack init with passing list as params. CONTAINER ADAPTION
    stack<int, list<int>> si(li);  // IT NOT USING, IT IS MAKING COPY OF LIST

    // size of stack
    cout << si.size() << ' ' << li.size() << endl;
    
    // poping everything and seeing what is popped
    cout << "Pop all elements: " << endl;
    while (!si.empty()) {
        cout << "Popping... " <<  si.top() << '\n';
        si.pop();
    }
    cout << endl << endl;
    
    // See, when you pop all from stack then your list remain untouched
    for (int i : li) {
        cout << i << ' ';
    }
    cout << "\n\n";
    
    
    // DEFAULT INIT OF STACK, which uses deque object to get elements
    stack<string> ss;
    // stack<string>::iterator it STACK DOES NOT HAVE ITERATOR
    // pushing elements.
    string ele[5] = {"one", "two", "three", "four", "five"};
    for (string s : ele) { ss.push(s); }
    cout << endl << ss.size() << endl;
    
        
    while (!ss.empty()) {
        cout << "Popping..." << ss.top() << '\n';
        ss.pop();
    }
    cout << "size after popping all elements: " << ss.size() << endl;
    

    

    return 0;
}
