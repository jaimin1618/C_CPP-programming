#include <iostream> // string is inside iostream
using namespace std;

int main(int argc, char const *argv[]) {
    
    string str = "JAIMIN _ CHOKHAWALA";
    
    // size and length
    cout << str.length() <<  ' ' << str.size() << endl;
    
    // concatenation
    cout << str + ' ' + ':' + ' ' + str << endl;
    
    // assignment operator and comparison
    string name;
    name = str;
    cout << name << ' ' << name[7] << endl;
    cout << (name == str) << ' ' << (name > str) << ' ' << (name < str) << endl;
    
    // iteration
    for (char c : name) {
        cout << c << '!';
    }
    cout << endl << endl;
    
    // INSERT AND ERASE
    str.insert(str.begin() + 7, '_'); // JAIMIN _ CHOKHAWALA >> JAIMIN __ CHOKHAWALA
    cout << str << endl;
    str.erase(str.begin()+7);  //  JAIMIN __ CHOKHAWALA >> JAIMIN _ CHOKHAWALA
    cout << str << endl;
    
    // REPLACE
    // syntax: str.replace(index, how many character to replace, what to place there)
    str.replace(6, 2, "__"); // JAIMIN _ CHOKHAWALA >> JAIMIN__CHOKHAWALA
    cout << str << endl;
    
    // SUBSTRING  // extracting character, PYTHON[4, 10]
    string firstName = str.substr(0, 6); // JAIMIN, just like python starts from 0 and ends at 5. won't take 6th element
    cout << firstName << endl;
    
    // Find
    cout << "Indedx of _ from beginning: " << str.find('_') << endl; //gives index of character = 6
    
    // Reverse Find
    cout << "Indedx of _ from ending: " << str.rfind('_') << endl; // gives index of character = 7
    
    
    
    return 0;
}
