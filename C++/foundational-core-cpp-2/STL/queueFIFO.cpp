// PUSHES AT LAST BUT POPS THE FIRST, QUEUE OF PEOPLE AT SHOP
#include <iostream>
#include <queue>
#include <list>
using namespace std;

int main(int argc, char const *argv[]) {
    // init of queue list
    list<int> li= {1,2,3,4,5};
    queue<int, list<int>> qi(li); // copy container
    
    cout << li.size() << ' ' << qi.size() << endl;
    
    // queue is FIFO, see how they are popped;
    cout << "Popping elements: " << endl;
    while (!qi.empty()) {
        cout << "Popping..." << qi.front() << '\n';//qi.top() > qi.front() for queue
        qi.pop();
    }
    
    // String version of QUEUE
    queue<string> sq;
    string data[] = {"one", "two", "three", "four", "five"};
    
    for (string s : data) {
        sq.push(s);
    }
    cout << "\n\n";
    // for (string s: sq) cout << s << ' ';
        
    // deleting ~ Popping, see order of Popping
    while (!sq.empty()) {
        cout << "Popping..." << sq.front() << '\n';
        sq.pop();
    }
    
    // iterating over elements:
    
    
    
    
    
    return 0;
}
