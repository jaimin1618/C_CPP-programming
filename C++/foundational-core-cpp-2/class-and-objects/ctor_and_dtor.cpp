// COMPLETE DEMO
#include <cstdio>
#include <string>
using namespace std;

// constants
const string unk = "unknown";
const string clone_prefix = "clone-";

// -----------------interface----------------
class Animal {
private:
    string _type = "";
    string _name = "";
    string _sound = "";
public:
    Animal();  // 1st ctor ~ if you just want to initialize without parameters
    Animal(const string &type, const string &name, const string &sound);  // ctor with parameters.
    Animal(const Animal &); // copy directy an object and make new one with different name
    Animal & operator=(const Animal &); // copy operator.
    ~Animal();  // dtor ... NOTE THERE CAN BE ONLY ONE destructor
    void print() const;
};

// --------------implementation------------
Animal::Animal() : _type(unk), _name(unk), _sound(unk) {
    puts("default constructor.");
    // msg when object is init.
}

Animal::Animal(const string &type, const string &name, const string &sound) : _type(type), _name(name), _sound(sound) {
    // msg when object is init.
    puts("constructor with arguments");
}

Animal::Animal(const Animal &a) {
    puts("copy constructor");
    _name = clone_prefix + a._name;  // because this are string that's why addition is possible
    _type = a._type;
    _sound = a._sound;
}

Animal::~Animal() {
    // msg when object is destroyed
    printf("destructor: %s the %s\n", _name.c_str(), _type.c_str());
}

// METHODS OF CLASS
void Animal::print() const {
    printf("%s the %s says %s\n", _name.c_str(), _type.c_str(), _sound.c_str());
}

// operator overloading
Animal &Animal::operator=(const Animal &o) {
    puts("assignment operator.");
    if (this != &o) {
        _name = clone_prefix + o._name;
        _type =  o._type;
        _sound = o._sound;
    }
    return *this;
}

// main() function
int main(int argc, char const *argv[]) {
    // without any parameters.
    Animal a;
    a.print();
    
    // init with parameters
    const Animal b("goat", "bob", "baah...");
    b.print();
    
    // init with copy, this calls COPY CTOR.
    const Animal c = b;
    c.print();
    
    // init with copy, this calls copy operator.
    a = c;
    a.print();
    return 0;
}