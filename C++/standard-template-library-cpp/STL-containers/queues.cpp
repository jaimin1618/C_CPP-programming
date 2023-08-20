// NOTE: QUEUES AND STACKS ARE CONTAINER ADAPTER, THEY INIT WITH ANOTHER CONTAINER ELEMENTS
// ARR[100] >>> STACK/QUEUES.
// BY DEFAULT, IF YOU DON'T GIVE TYPE OF CONTAINER IT WILL CONSIDER AS DEQUE

#include <iostream>
#include <queue>
#include <list>
using namespace std;

/*
It is FIFO - CONTAINER
IN -> A - B - C - D - E -> OUT
It does not give RANDOM ACCESS.
*/
template <typename T>
void getQueue(T &qu) {
    int siz = qu.size();
    cout << "size: " << siz;
    if (siz) { cout << " | front:" << qu.front() << " | back: " << qu.back() << "\n\n"; }
}

void msg(const char *s) { cout << s; }

int main(int argc, char* argv[]){
    
    cout << "\n\n";
    list<int> li = {1, 2, 3, 4, 5};
    queue<int, list<int>> qu(li); // ctor
    getQueue(qu);
    
    
    msg("popping element until no remains: \n");
    while (!qu.empty()) {
        cout << "popping..." << qu.front() << endl;
        qu.pop();
    }
    cout << qu.front() << ' ' << qu.back() << "\n\n";
    
    for (int i = 0; i < 5; i++) {
        qu.push(i*2);
        cout << "pushing... " << 2*i << endl;
    }
        
    cout << qu.front() << ' ' << qu.back() << endl;  // 0 8


    queue<string> sq; // by DEFAULT DEQUE CONTAINER AS PARENT
    msg("you can directly use queue by pushing in elements\n");
    for (string s: {"one", "two", "three", "four", "five"}) sq.push(s);
    cout << endl;
    getQueue(sq);















    cout << "\n\n";
    return 0;
    
}