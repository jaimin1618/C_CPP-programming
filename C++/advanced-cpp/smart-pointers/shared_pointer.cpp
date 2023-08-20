#include<iostream>
#include<memory>
#include<string>
using namespace std;

// only difference between shared and unique is (YOU CAN COPY SHARED POINTER);
void msg(const char *str) {
    cout << "msg: " << str << endl;
}

void disp(const shared_ptr<string>& obj) {
    if (obj) printf("%s ", obj->c_str());
    else printf("[NULL]");
    fflush(stdout);
}

// main -----------------------------------------------------------
int main(int argc, char **argv) {
    msg("creating shared pointer");
    auto a = make_shared<string>("ONE\n");
    disp(a);
    
    shared_ptr<string> b(new string("DEF\n"));
    disp(b);
    
    msg("Copying b = a");
    auto c = a;
    disp(a);
    disp(b);
    disp(c);
    
    // reseting a with new object; previous will be destroyed;
    a.reset(new string("three"));
    disp(a);
         

    return 0;
}
//-----------------------------------------------------------------
