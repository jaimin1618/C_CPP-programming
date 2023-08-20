#include <iostream>
using namespace std;

/*
GENERALLY AND TRADITIONALLY, we don't make class methods and functions inside our class,
We only do declaration inside the class, other than that we we define function/methods outside the class.
*/
class MyClass {
    private:
    int i;
    int foo() { return i * 2; }
    
    public:
    // FUNCTION DECLARATIONS.
    void setValue(const int value);
    const int getValue();
}

// defination for setValue function can be given by;
void MyClass::setValue(const int value) {
    i = value;
}
const int MyClass::getValue() {
    return i;
}



int main(int argc, char const *argv[]) {
    
    // init
    MyClass myobj;
    int x = 10;
    myobj.setValue(x);
    int ret = myobj.getValue();
    cout << ret << endl;

    return 0;
}