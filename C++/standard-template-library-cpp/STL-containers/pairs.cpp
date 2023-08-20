#include <iostream>
#include <utility>
#include <tuple>
// pairs are available in <utility>
using namespace std;

template <typename T1, typename T2>
void printPair(pair<T1, T2> &P) {
    cout << "content: { ";
    cout << P.first << " : " << P.second;
    cout << " }";
}

void msg(const char *s) { cout << s; }



// main()
int main(int argc, char* argv[]){
    cout << "\n\n";
    
    msg("initialization of pair\n");
    pair<int, string> P = {7, "Jaimin"};
    printPair(P);
    
    msg("init with default ctor(params...)\n");
    pair<string, char> P3("key", 'v');
    printPair(P3);
    cout << '\n';
    
    
    msg("Another way of init pair.\n");
    pair<int, char> P2;
    P2 = make_pair(10, 'J');
    printPair(P2);
    
    
    
    cout << "\n\n";
    return 0;
}