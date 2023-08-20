#include<iostream>
#include<memory>
#include<string>
using namespace std;

void msg(const char *ch) {
    cout << "msg: " << ch << endl;
}

void disp(const shared_ptr<string>& obj) {
    if (obj) cout << obj->c_str() << endl;
    else cout << "[NULL]" << endl;
    fflush(stdout);
    
}

void disp_w(const weak_ptr<string> obj) {
    cout << obj.length() << endl;
}

// main -----------------------------------------------------------
int main(int argc, char **argv) {
     






    return 0;
}
//-----------------------------------------------------------------
