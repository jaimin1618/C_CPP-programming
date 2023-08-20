#include<iostream>
#include<functional>
#include<algorithm>
#include<vector>
#include<typeinfo>
using namespace std;

template <typename T>
void dispv(vector<T> &vi) {
    if (!vi.size()) return;
    if (typeid(T) == typeid(bool)) {
        // we want T/F is it is bool
        cout << "content: { ";
        for (bool ele: vi) { cout << (ele ? 'T' : 'F') << ' '; }
        cout << "};";
    } else {
        cout << "content: { ";
        for (T ele: vi) { cout << ele << ' '; }
        cout << "};";
    }
    cout << endl;
}

template <typename T>
T maxFirst(T a, T b){
    return (a > b ? a : b);
}

template <typename T>
T minFirst(T a, T b){
    return (a < b ? a : b);
}



// main -----------------------------------------------------------
int main(int argc, char **argv) {
    vector<long> vi = {12, 1212, 3525, 7867865, 123112};
    vector<long> vi2 = {2, 24343,233232323 ,234 ,2443};
    vector<bool> TF(vi.size());
    cout << '\n';
    
    greater<long> func; // THIS IS FUNCTOR OPERATOR AVAILABLE IN <functional>
    /*
                                    HOW DO WE USE THESE ???
    We have greater<>, less<>, greater_equal<>, less_equal<>, equal_to<>, not_equal_to<>
    
    We atually, use them with other functions like sort and etc...see
    */
    
    transform(vi.begin(), vi.end(), vi2.begin(), TF.begin(), func);
    dispv(vi); dispv(vi2); dispv(TF); //  T F F T T };
    
    // SORTING VI
    greater<long> decr; // BIGGES FIRST
    sort(vi.begin(), vi.end(), decr); // { 7867865 123112 3525 1212 12 };
    dispv(vi);
    
    less<long> incr; // LOWEST FIRST
    sort(vi.begin(), vi.end(), incr); // { 12 1212 3525 123112 7867865 };
    dispv(vi);
    
    // USING MY OWN FUNCTION
    sort(vi.begin(), vi.end(), maxFirst<long>); // { 7867865 123112 3525 1212 12 };
    dispv(vi);
    
    sort(vi.begin(), vi.end(), minFirst<long>); // { 12 1212 3525 123112 7867865 };
    dispv(vi);
    
    
    
    


    return 0;
}
//-----------------------------------------------------------------
