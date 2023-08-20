#include <iostream>
#include <list>
using namespace std;

/*
list is optimized for rapid inset and delete operations.
it doesn't support random access.
*/
template <typename T>
void printl(list<T> &li) {
    
    cout << "content: { ";
    for (T &i: li) {
        cout << i << ' ';
    }
    cout << "}\n";
    
}

void msg(const char *s) { cout << s; }

int main(int argc, char* argv[]){
    cout << "\n\n";
    msg("initializing list\n");
    list<int> li = {1,2,3, 4, 5};
    printl(li);
    
    msg("size, front, back: ");
    cout << li.size() << ' ' << li.front() << ' ' << li.back() << endl;
    
    msg("pushing... 1000 at back");
    li.push_back(1000);
    printl(li);   // { 1 2 3 4 5 1000 }
    
    // IN ORDER TO INSERT OR DELETE ELEMENT YOU HAVE TO USE ITERATOR.
    // BECASUSE LIST DOES NOT SUPPORT RANDOM ACCESS IN ANY WAY...
    // YOU CAN DO LIST[3] OR LIST.begin() + 3 ... all invalid.
    msg("inserting element.\n");
    list<int>::iterator it = li.begin();  // use auto.
    // you cannot do  it + 2 OR SOMETHING LIKE THAT
    while (*it != 3 || it == li.end()) {
        cout << *it;
        ++it;
    } // THIS IS VERY IMPORTANT PART OF LIST INSERTTION
    if (it != li.end()) {
        msg("inserting 7 before 3\n");
        li.insert(it, 7);
    }
    printl(li); // { 1 2 7 3 4 5 1000  DONE
    
    // erasing 7
    it = li.begin();
    while ((*it != 7) && (it != li.end())) it++;
    li.erase(it);
    printl(li);  // 7 will be erased
    
    
    msg("if you don't want to use findind then erasing, you can also use .remove(item)\n");
    // removing 1000;
    li.remove(1000);
    printl(li);   // { 1 2 3 4 5 }
    cout << endl;
        
    msg("erasing everything between two index: \n");
    // NOTE: in list you don't actually work with INDEX, you need value to do anything.
    list<int> li2 = {1, 2, 3, 4, 4354, 4523, 2252445, 3464, 5, 6, 7};
    // we want to erase from INDEX = 4 to index  = 7;
    list<int>::iterator it1, it2;
    it1 = it2 = li2.begin();
    while ((*it1 != 4354) && (it1 != li2.end())) it1++;
    while ((*it2 != 5) && (it2 != li2.end())) it2++;
    if (it1 != li2.end() && it2 != li2.end()) {
        li.erase(it1, it2);
    }
    printl(li2); //  { 1 2 3 4 5 6 7 }
    
        
    
            
    
    cout << "\n\n";
    return 0;
}