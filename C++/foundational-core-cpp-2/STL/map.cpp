#include <iostream>
#include <map>
#include <string>
using namespace std;
/*
Map provides KEY VALUE pair ~ dictionary
syntax: map<string, string>  =  { {key1, value1}, {key2, value2}, ...}

NOTE: Data in map data-structure is ORGANIZED in PAIR<key, value> type.
*/


int main(int argc, char const *argv[]) {
    map<char, char> charmap = {{'A', 'a'}, {'B', 'b'}, {'C', 'c'}};
    // init
    map<string, string> cities = {
        {"India", "Mumbai"},
        {"USA", "NY"},
        {"Japan", "Tokya"}
    };
    
    cout << cities.size() << endl;
    
    // accessing key vals
    cout << cities["India"] << endl;
    cout << cities.at("USA") << endl;
    cout << cities.find("Japan")->second << endl; // iterator technique
    // accessing by iterator: ptr->first << ' ' << ptr->second << endl;
    map<string, string>::iterator ptr = cities.find("Japan");
    cout << ptr->first << ' ' << ptr->second << endl;  // THAT IS HOW WE CAN ACCESS USING iterator
    
    // Iteration over all elements ~ here auto will replace map<string, string>::iterator which returns .first and .second as pair
    for (auto s : cities) cout << s.second << " is the best city of " << s.first << endl;
    
    // inserting an elements
    cities.insert({"Russia", "Moscow"});
    cout << cities.size() << endl; // 4 because new member arrived
    
    // Error while adding common element
    cout << "inserting duplicate elememt." << endl;
    auto rp = cities.insert({"India", "Delhi"});  // this will not be added
    // Handling duplicate adding
    if (rp.second) {
        cout << "inserted successfully: " << endl;
    }else {
        cout << "insert failed." << endl;
    }
    for (auto s : cities) cout << s.first << ' ' << s.second << endl << endl;
    
    
    // ERASING USING iterator
    cout << "Find and erase USA element." << endl;
    auto it = cities.find("USA");
    if (it != cities.end()) {  // check IT AVAILBLE OR NOT OTHERWISE YOU MAY DELETE LAST ELEMENT PAIR
        cout << "Message: " << it->first << ':' << it->second << " has been deleted" << endl;
        cities.erase(it);
    }else {
        cout << "NOT FOUND" << endl;
    }
    return 0;
}