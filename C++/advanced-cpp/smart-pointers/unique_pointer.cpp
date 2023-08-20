#include<iostream>
#include<memory>
#include<utility>
#include<string>
using namespace std;


class Temp {
public:
    int size;
    string ptr[5];
    Temp() {
        cout << "Temp object created\n";
    }
    ~Temp() {
        cout << "Temp object destroyed\n";
    }
};






void msg(const char *str) {
    cout << str << '\n';
}

void disp(unique_ptr<string>& obj) {
    if (obj) puts(obj->c_str());
    else puts("[NULL]");
    fflush(stdout);
}

void passingUniquePtr(unique_ptr<string>& str) {
    cout << "ONLY CALL BY REFERENCE WORKS\n";
    cout << str->c_str() << endl;
}



// unique_ptr<T>& function() => this pointer cannnot be copied, you can only move it


// main -----------------------------------------------------------
int main(int argc, char **argv) {
    
    msg("creating unique_ptr<T>:");
    unique_ptr<string> a(new string("ABC"));
    disp(a);
    
    msg("creating unique_ptr<T> using C++17:");
    auto b = make_unique<string>("TWO");
    disp(b);
    
    msg("reset a ~ 'ABC' => 'THREE'");
    a.reset(new string("THREE"));
    disp(a);
    disp(b);
    
    msg("move b to c");
    auto c = move(b);
    disp(a);disp(b);disp(c); // b = "NULL"
    // YOU CANNOT COPY ONLY MOVE;
    // auto c = b; ERROR
    
    cout << "NOTE: reset without parameter will destroy an object | where release will not distroy object but frees memory space" << endl;
    msg("just reseting a (this deletes object pointed by a)");
    a.reset();
    disp(a);
    
    
    msg("release c (this does't destroy object pointed by c but it frees spaces by releasing pointer");
    c.release();
    disp(c);

    msg("SEE reset() && release() in action");
    Temp T;
    T.size = 3;
    T.ptr[0] = "ABC";
    T.ptr[1] = "DEF";
    T.ptr[2] = "GHI";
    auto up = make_unique<Temp>(T);
    
    // up.reset(); // YOU WILL SEE destroyed object two time
    // up.release(); // YOU WILL SEE destroyed object one time
    /*
    IN SIMPLE WORDS, UP.RESET() CALLS DTOR OF OBJECT AND
    DESTROYS IT DURING RUNTIME;
    
    WHILE UP.RELEASE() ONLY RELEASES THE POINTER, OBJECT ITSELF IS NOT DESTROYED
    */
    
    unique_ptr<string> f(new string("from the function"));
    passingUniquePtr(f);
    f.reset();
    
    

    return 0;
}
//-----------------------------------------------------------------
