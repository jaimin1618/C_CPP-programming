#include<iostream>
#include <vector>
#include <string>
using namespace std;

// to print vector content
template <typename T>
void printv(const vector<T> &vec) {
    
    cout << "content: { ";
    for (const T &i: vec) {
        cout << i << ' ';
    }
    cout <<  "};"<< endl;
    
}

// to print message
void msg(const char *s) { cout << s; }

int main(int argc, char* argv[]){
    cout << "\n\n";
    msg("vector initialized\n");
    vector<int> vi = {1, 2, 3, 4, 5};
    printv(vi);
    
    msg("size, front and back of vector: ");
    cout << vi.size() << ' ' << vi.front() << ' ' << vi.back() << endl;
        
    msg("random accesss to elements: ");
    cout << vi[0] << ' ' << vi[1] << ' ' << vi[vi.size() - 1] << endl; // 1 2 5
    
    msg("inserting... 0 and 6");
    vi.insert(vi.begin(), 0);
    vi.insert(vi.end(), 6);
    printv(vi);  //  { 0 1 2 3 4 5 6 };
    
    msg("deleting/erasing... 0 and 6");
    vi.erase(vi.begin() + 0);
    vi.erase(vi.end() - 1);  // vi.end() gives, '\0' OF LIST
    printv(vi); // { 1 2 3 4 5 }
    
    msg("push_back and pop_back: ");
    vi.push_back(6);  // pushed 6 at end
    vi.pop_back(); // pops 6
    printv(vi); // remains same after all
    
    msg("testing empty() function of vector: \n");
    vector<string> vs = {"one", "two", "three"};
    printv(vs);    //  { one two three }
    msg("poping all string elements until vector becomes empty: ");
    while (!vs.empty()) {
        // pops from end OR Reverse order ... 3 2 1..
        cout << endl;
        cout << "poping..." << vs.back() << endl;
        vs.pop_back();
    }

        
    msg("\ninserting an entire array in existing array: \n");
    vi.insert(vi.end(), {10, 100, 1000});
    vi.insert(vi.begin(), {9, 99, 999});
    printv(vi); // { 9 99 999 1 2 3 4 5 10 100 1000 }
    
    msg("Clearing an entire array: \n");
    vi.clear();
    printv(vi); // { }; nothing
    cout << "\n\n\n";
    
    msg("constructing an <vector> using array constructor\n");
    int arr[] = {10, 100, 1000, 10000, 100000};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "this is vector from C = array" << endl;
    vector<int> av(arr, arr + n); // this is syntax.
    printv(av);  // { 10 100 1000 10000 100000 };
    
        
    msg("init with Zero\n");
    vector<int> vz(5, 0);
    vector<string> vs2(3, "*");
    printv(vz); // { 0 0 0 0 0 };
    printv(vs2); // { * * * }
    string pat = "";
    for (auto &c: vs2) pat += c;
    cout << pat;  // ***

    cout << "\n\n";
    return 0;
}