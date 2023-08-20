#include <iostream>
using namespace std;

typedef struct {
    int ia;
    int ib;
    int ic;
    
    int add() {
        return ia+ib+ic;
    }
} A ;

int main(int argc, char const *argv[]) {
    // init
    A a = {1, 2, 3};
    A *pa = &a;
    cout << a.ia << ' ' << a.ib << ' ' << a.ic << endl;
    cout << pa->ia << ' ' << pa->ib << ' ' << pa->ic << endl;
    cout << "TOTAL IS: " << a.add() << endl;
    return 0;
}