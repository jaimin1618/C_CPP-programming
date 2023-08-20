#include<iostream>
#include<vector>
#include<string>
#include<utility> /* MOVE IS HERE */
using namespace std;

void msg(const string &msg) {
    cout << msg << endl;
    fflush(stdout);
}

void print_v(vector<string> &vi) {
    
    if (vi.size() == 0) {
        cout << "[empty]" << endl;
    }else {
        for (string &ele: vi) cout << ele << ' ';
        cout << "\n";
    }
    fflush(stdout);
}

// THIS IS HOW WE USE STD::MOVE
template<typename T, typename U>
void swap(T &a, U &b) {
    T temp(move(a));
    a = move(b);
    b = move(temp);
}



// main -----------------------------------------------------------
int main(int argc, char **argv) {
    int X = 10;
    int Y = 20;
    cout << "X AND Y BEFORE SWAP: " << X << ' ' << Y << endl;
    swap<int, int>(X, Y);
    cout << "X AND Y AFTER SWAP: " << X << ' ' << Y << endl << endl;

    // ANOTHER EXAMPLE;
    vector<string> vec_1 = {"one", "two", "three"};
    vector<string> vec_2 = {"four", "five", "six"};
    
    print_v(vec_1);
    print_v(vec_2);
    // moving vec_1 >> vec_2
    auto vec_3 = move(vec_1);
    print_v(vec_1); // [empty]
    print_v(vec_2); // == vec_1;
    print_v(vec_3);
    
    // moving element
    vec_2[0] = move(vec_3[0]);
    print_v(vec_2); //  one five six
    print_v(vec_3);  // two three
    cout << vec_3.size() << endl; // NOTE SIZE REMAINS SAME EVEN AFTER MOVING ELEMENT
    cout << vec_1.size() << endl; // 0 because we moved entire arrays all elements
        
    return 0;
}
//-----------------------------------------------------------------
