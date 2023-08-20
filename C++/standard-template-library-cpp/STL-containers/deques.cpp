#include <iostream>
#include <deque>
using namespace std;

/*
NOTE: deque is used as default container instead of STACKS AND QUEUES

It is similar to VECTOR, but still we defined it as,
double ended queue.  <-... _ _ _ _ _ _ _ ...->
you can insert element from both sides
*/
template <typename T>
void getInfo(deque<T> &d) {
    int s = d.size();
    cout << "size: " << s;
    if (s) { cout << " front: " << d.front() << " back: " << d.back() << "\n\n"; }
}

template <typename T>
void printdq(deque<T> &dq) {
    if (dq.empty()) return;
    cout << "content: <-";
    for (auto ele: dq) {
        cout << ele << "-";
    }
    cout << ">\n\n";
}

void msg(const char *s) { cout << s; }


// main()
int main(int argc, char* argv[])
{
    cout << "\n\n";
    msg("initialization of deque: \n");
    deque<string> dq = {"One", "Two", "Three"};
    
    // pushing values from back
    dq.push_back("four");
    dq.push_back("five");
    dq.push_front("Zero");  //PUSH FRONT
    getInfo(dq);
    printdq(dq);




    cout << "\n\n";
    return 0;
}