#include <iostream>
using namespace std;

const size_t _maxsize = 1024;

class Strsize {
    size_t _size = 0;
public:
    Strsize(const int); // Ctor for int type
    Strsize(const char *); // Ctor for char
    size_t size() const;
};

Strsize::Strsize(const int n) {
    puts("\nConstructor: size from int\n");
    _size = (n <= _maxsize) ? n : 0;
}

Strsize::Strsize(const char *cp) {
    puts("\nConstructor: size from c-string\n");
    for (size_t i = 0; i < _maxsize; ++i) {
        if (cp[i] == 0) {
            _size = i;
            return;
        }
    }
    _size = 0;
}

size_t Strsize::size() const {
    return _size;
}

void func(const Strsize &S) {
    cout << "Size is: " << S.size() << endl;
}

int main() {
    
    Strsize S = 'X';
    cout << "Size is: " << S.size();
    func('X');
    return 0;
}