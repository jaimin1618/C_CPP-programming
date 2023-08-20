#include <iostream>
#include <exception>
using namespace std;

class Exception : public exception {
    // msg is out message;
    const char *msg;
    E();
public:
    Exception(const char *s) throw() : msg(s) {}
    
    // here what is overloading VIRTUAL FUNCTION CALLED WHAT inside std::exception class
    const char *what() const throw() { return msg; }
};


// CONSTANTS TO THROW RELATABLE MESSAGE WHEN CODE IS BROKEN WITH THAT ERROR.
const Exception bad_code("code is bad!");
const Exception code_error("try again.");
const Exception internal_error("system error");


void myProgramBroken() {
    cout << "This function has been broken." << '\n';
    // throw Exception("my message when this function is broken."); // inside exception STL
    throw bad_code;
}

void programBroken() {
    cout << "This function has been broken." << '\n';
    throw exception(); // inside exception STL
}

int main(int argc, char const *argv[]) {
    cout << "get me emergency!" << '\n';
    
    cout << "THIS IS STANDARD EXCEPTION CLASS: " << "\n\n";
    try {
        programBroken(); // it has error thrown, which is catched by catch from exception class;
    } catch (exception &e) {
        cout << "This is not good! " << e.what() << '\n'; // exception class has .what() method/
        /*
        here, e.what is not useful to us, because it just prints "std::exception"
        so we want to DO SOME CHANGES AS WE WANT BY MAKING EXCEPTION CLASS (inherit exception) OF OUR OWN.
        
        */
        
    }
    cout << "\n\n\n";


    

    
    cout << "THIS IS MY OWN EXCEPTION CLASS, INHERITED STD::EXCEPTION CLASS:" << "\n\n";
    try {
        myProgramBroken(); // it has error thrown, which is catched by catch from exception class;
        
    } catch (Exception &e) {
        cout << "This is not good! " << '\n' << e.what() << '\n'; // exception class has .what() method/
    }
    
    




    return 0;
}