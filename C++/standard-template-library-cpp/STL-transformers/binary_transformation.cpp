#include<iostream>
#include<functional>
#include<algorithm>
#include<vector>
#include <cmath>
using namespace std;

template <typename T>
class mutliply {
public:
    T operator() (const T &a, const T &b) {
        // this returns multiplication of all params * privateVAR.
        return a * b;
    }
};

template <typename T>
void dispv(vector<T> &vi) {
    if (vi.size() == 0) return;
    cout << "content: { ";
    for (T ele: vi) cout << ele << ' ';
    cout << "};\n";
}

template <typename T>
T maxOf(T &a, T &b) {
    return a > b ? a : b;
}

template <typename T>
float DISTANCE(T &a, T &b) {
    float dis = sqrt(pow(a, 2) + pow(b, 2));
    return dis;
}


// main -----------------------------------------------------------
int main(int argc, char **argv) {
    // DATA;
    vector<int> in_one = {1, 2, 3, 4, 5};
    vector<int> in_two = {6, 7, 8, 9, 0};
    
    // OUTPUT VECTOR;
    vector<int> out(in_one.size(), 0);  // {0, 0, ...};
    
    // Class object init
    mutliply<int> OBJ;
    
    // see what we have;
    dispv(in_one);   // { 1 2 3 4 5 };
    dispv(in_two);   // { 6 7 8 9 0 };
    dispv(out);      // { 0 0 0 0 0 };
    cout << endl;
    
    // transformation NOTE: if you don't want to make object use className()
    /*
    IN ORDER TO DO THIS, YOU DO NEED TO MAKE FUCNCTION WHICH TAKES TO PARAMS.
    -> first.begin() to first.end() ~ RANGE
    -> second.begin() ~ second parameter;
    -> third.begin() ~ Storing OUTPUT;
    */
    transform(in_one.begin(), in_one.end(), in_two.begin(), out.begin(), OBJ);
    cout << "After MULTIPLY transformation: " << endl;
    dispv(in_one); //  { 1 2 3 4 5 }
    dispv(in_two); //  { 6 7 8 9 0 };
    dispv(out);    // { 6 14 24 36 0 }
    /*
    1 * 6 = 6;
    2 * 7 = 14;
    3 * 8 = 24;
    ...
    */
    
    transform(in_one.begin(), in_one.end(), in_two.begin(), out.begin(), maxOf<int>);
    cout << "After MAXOF transformation: " << endl;
    dispv(in_one);  // { 1 2 3 4 5 };
    dispv(in_two);  // { 6 7 8 9 0 };
    dispv(out);     // { 6 7 8 9 5 }; MAX OF BOTH
    
    
    vector<float> save_dis(in_one.size(), 0);
    transform(in_one.begin(), in_one.end(), in_two.begin(), save_dis.begin(), DISTANCE<int>);
    cout << "After DISTANCE transformation: " << endl;
    dispv(in_one);
    dispv(in_two);
    for (int _ = 0; _ < in_one.size(); ++_) {
        cout << "distance between " << in_one[_] << " and " << in_two[_] << " is: " << save_dis[_] << endl;
    }

    return 0;
}
//-----------------------------------------------------------------
