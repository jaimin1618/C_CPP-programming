/*
------------------------------- TOPICS I WILL COVER HERE ARE ---------------------------

- INTRDUCTION TO ALGORITHM LIBRARY,

- ALGORITHM: TESTING CONDITIONS,

- ALGORITHM: SEARCHING & FINDING ELEMENT/SEQUENCES,

- ALGORITHM: COUNTING

*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<cmath>
using namespace std;

// MY FUNCTION AND TEMPLATES USING IN CODE
template<typename T>
void dispv(vector<T> &vi) {
    if (vi.empty()) return;
    cout << "content: { ";
    for (T ele: vi) cout << ele << ' ';
    cout << "};\n\n";
}
template <typename T>
bool isPrime(T &num) {
    if (num == 0 || num == 1) return false;
    for (T i = 2; i <= sqrt(num); ++i) { if (num % i == 0) return false; }
    return true;
}
bool isOdd(const int &num){
    // something new: here if you don't use const and pass something
    // like 5, 7, 11 int... IT WILL THROW ERROR. because &(ampersand) means
    // passing an address of that variable
    // that's why you have to use CONST to convert it into constant
    return (num % 2)==1;
}

// MY CODE FOR FOR UNDERSTANDING CONCEPTS
void algorithm_intro() {
    vector<int> vi = {4, 2, 6, 2, 7, 8, 5, 2, 68, 7, 56, 54, 43, 232, 32, 5, 76, 7, 8};
    // sorting
    // sort(vi.begin(), vi.end());
    sort(vi.begin(), vi.begin() + vi.size()); // (vi.begin(), vi.end()) both works
    dispv(vi);
    
    // Bsearch
    int item = 56;
    if (binary_search(vi.begin(), vi.end(), item)){
        cout << "found\n";
    }else {
        cout << "not found\n";
    }
    
}

void testing_conditions() {
    vector<int> vi = {3, 6, 32, 56, 34, 43, 67, 4, 2, 3, 56, 8, 89, 67, 54, 3, 2, 34, 67 ,8};
    /*
    conditions, THEY USE OUR FUNCTION like prime
    - all_of(),
    - none_of(),
    - any_of()
    */
    if (all_of(vi.begin(), vi.end(), isPrime<int>)){
        cout << "all are prime\n";
    }else {
        cout << "not all primes\n";
    }
    if (any_of(vi.begin(), vi.end(), isPrime<int>)){
        cout << "there are primes available\n";
    }else {
        cout << "no primes here\n";
    }
    
    
}

void searching_and_counting() {
    // I WILL NOT CHANGE THIS VECTOR PROMISE
    const int arr[] = { 10, 20, 30, 40 }; // n = 4
    vector<int> vi = {2, 4, 35, 46, 23, 35, 57, 78, 34, 57, 6, 78, 45, 43, 46, 789, 9, 45, 43, 434, 4, 3, 5678};
    
    // find function, it not found then returns end point iterator
    const int *ptr = find(arr, arr + 4, 30);
    if (ptr != arr + 4) cout << "found at index: " << ptr - arr << endl;;// this is how find works for normal C++ array
    vector<int>::iterator it = find(vi.begin(), vi.end(), 78);
    if (it != vi.end()) cout << "found at index: " << it - vi.begin() << endl;;
    // SO, TYPE OF ITERATOR/POINTER MUST EQUAL TO TYPE OF ELEMENT IN  CONTAINER.
    
    
    // We also have find_if, where we can pass out function as we want, FINDING ODD IN VI;
    it = find_if(vi.begin(), vi.end(), isOdd); // YOU CAN ALSO USE,
    // find_if_not, to check INVERSE of this condition
    cout << "this is first odd number: " << *it << endl;
    
    
    // SEARCHING SEQUENCE using another array/data
    vector<int> data = {57, 78, 34, 57, 6};  // FIND SEQUENCE OF THIS DATA IN VECTOR, in this order
    it = search(vi.begin(), vi.end(), data.begin(), data.end());
    // it is searching for DATA ELEMENTS in Vector
    if (it != vi.end()) {
        cout << "given sequence found at index: " << it - vi.begin() << endl;
        cout << "first element is: " << *it << endl;
    }else {
        cout << "given sequence is not found here." << endl;
    }
    
    
    // We also have counting function, which counts occurrences of element;
    auto howMany = count(vi.begin(), vi.end(), 43);
    cout << "We have found 43 " << howMany << " times in list" << endl;
    
    // you can also count BASED ON CONDITION OR FUNCTION RETURN;
    auto num_of_odd_nums = count_if(vi.begin(), vi.end(), isOdd);
    cout << "There are " << num_of_odd_nums << " odd numbers in vi vector" << endl;
    
}









// main -----------------------------------------------------------
int main(int argc, char **argv) {
    // algorithm_intro();
    
    // testing_conditions();
    
    searching_and_counting();
 

    return 0;
}
//-----------------------------------------------------------------
