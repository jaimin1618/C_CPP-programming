#include <iostream>
#include <tuple>
using namespace std;

template <typename T>
void printTuple(T tp) {
    auto tsz = tuple_size<decltype(tp)>::value;
    if (tsz != 3) return;
    cout << "content: { ";
    cout << get<0>(tp) << " , " << get<1>(tp) << " , " << get<2>(tp);
    cout << " };\n\n";
}
void msg(const char *s) { cout << s; }

// main();
int main() {
    cout << "\n\n";
    msg("normal initialization: \n");
    tuple<int, string, int> T1 = {10, "Jaimin", 20};
    printTuple(T1);
    
    msg("default ctor(params...)\n");
    tuple<int, string, char> T2(1122, "jake", 'A');
    printTuple(T2);
    
    msg("make_tuple function: \n");
    tuple<int, int, int> T3;
    T3 = make_tuple(0, 1, 2);
    printTuple(T3);
    
    msg("ACCESSING ELEMENTS OF TUPLES: \n");
    msg("elements of tuples are indexed, so you can access them using get<index>(tupleName)");
    msg("You cannot iterate over tuple elements because the require const int: ");
    
    const int X = 1;  // if X  is not const, then you cannot iterate
    cout << "element 1:" << get<X>(T1);
    


    cout << "\n\n";
    return 0;
}