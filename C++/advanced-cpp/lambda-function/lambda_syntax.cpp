#include<iostream>
#include<cstring>
#include<locale>
#include<algorithm>
using namespace std;

constexpr size_t _maxlen = 128;

// making class
class ftitle {
public:
    char last_char;
    ftitle(): last_char(0){}
    char operator() (const char& c);
};
char ftitle::operator() (const char& c) {
    const char r = (last_char == ' ' || last_char == 0) ? toupper(c) : tolower(c);
    last_char = c;
    return r;
}

// main -----------------------------------------------------------
int main(int argc, char **argv) {

    
    char title[] = "this Will be converted into title-case";
    transform(title, title + strlen(title), title, ftitle());
    
    cout << "after transformatiom: " << endl;
    cout << title << endl;
    
    // doing this above transformatiom using inline lambda function
    char str[] = "this is not normal text";
    char last_c = 0;
    transform(str, str + strlen(str), str, [&last_c](const char& ch) -> char {
        const char r = (last_c == ' ' || last_c == 0) ? toupper(ch) : tolower(ch);
        last_c = ch;
        return r;
    });
    cout << str << endl;
    
    /*
    transform() syntax:
    transform(container.begin(), container.end(), where_to_place_transformed_data, function)
    
    
    lambda syntax:
    [&CAPTURE](parameter type) -> return type
    - CAPTURE ~ lambda function can use that variable as reference from global scope
    - parameter type is element type of container
    */

    return 0;
}
//-----------------------------------------------------------------
