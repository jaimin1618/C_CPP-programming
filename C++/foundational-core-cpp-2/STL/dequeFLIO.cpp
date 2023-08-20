// IT CAN PUSH AND POP FROM THE BOTH SIDES AND CAN CONTINUE DOING THAT,
// UNTIL IT IS FINISHED.

// MOST IMPORTANT BENEFIT OF USING deque is,
// STACK AND QUEUE DOES NOT ALLOW ITERATION, BUT DEQUE ALLOWS ITERATION.
// YOU CAN SEE AND CHANGE ELEMENTS FRON DEQUE BUT NOT STACK OR QUEUE

#include <iostream>
#include <deque>  // deque ~ double ended queue
using namespace std;

int main(int argc, char const *argv[]) {
    deque<string> sdq;
    
    cout << "Pushing values inside deque: " << "\n\n";
    /*
        NOTE: this an double eneded queue,
        - so you can push on to front,
        - you push at back,
         
        - you can pop() from the front();
        - you can pop() from the back();
    */
    sdq.push_back("one"); // FIRST ELEMENT ~ FRONT
    sdq.push_back("two");
    sdq.push_back("three");
    sdq.push_back("four");
    sdq.push_back("five"); // LAST ELEMENT ~ BACK
    
    cout << "Size after pushing: " << sdq.size() << '\n';
    cout << "Front element: " << sdq.front() << '\n';
    cout << "Back element: " << sdq.back() << "\n\n";
    
    // PUSH FRONT AND BACK... SEE, ZERO at front, SIX at back
    sdq.push_front("zero");
    sdq.push_back("six");
    cout << "Front element: " << sdq.front() << '\n';
    cout << "Back element: " << sdq.back() << "\n\n";
    // ront element: zero
    // Back element: six
    
    // Poping zero and six;
    sdq.pop_front();
    sdq.pop_back();
    cout << "Front element: " << sdq.front() << '\n'; // one
    cout << "Back element: " << sdq.back() << '\n'; // five
    
    
    // iteration over elements of sdq;
    for (string s: sdq) cout << s <<' '; // one two three four five
    
    
    return 0;
}