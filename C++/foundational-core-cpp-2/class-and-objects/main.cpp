#include <iostream>
using namespace std;

class A {
    private:
    int ia;
        
    public:
    // method declaration
    void setter(const int a);
    int getter();
};


// method defination
void A::setter(const int a) { ia = a; }
int A::getter() { return ia; }

int main(int argc, char const *argv[]) {
    
    
    
    return 0;
}