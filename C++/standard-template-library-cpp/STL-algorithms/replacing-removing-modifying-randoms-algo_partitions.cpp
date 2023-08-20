#include<bits/stdc++.h>
using namespace std;

// MY USED FUNCTIONS
bool isEven(const int &num) { return (num % 2)==0; }

template <typename T>
void dispv(vector<T> &vi) {
    if (vi.empty()) return;
    cout << "content: { ";
    for (T ele: vi) cout << ele << ' ';
    cout << "};\n\n";
}
bool is_even_tens(const int &num) {
    if (num < 10) return false;
    return ((num / 10) % 2)==0;
}

template <typename T>
void reverse_my_array(vector<T> &vec) {
    int n = vec.size();
    for (int i = 0; i < (n / 2); ++i) swap(vec[i], vec[n-i-1]);
}

void main_replace_removing() {
    vector<int> vi = {1, 2, 54, 5, 234, 35, 67, 8, 53, 434, 245, 7, 8, 324, 32, 89, 75, 64};
    
    // replace function;
    replace(vi.begin(), vi.end(), 67, 1000);
    dispv(vi);
    
    // we can also pass function to replace element, who matched condition
    replace_if(vi.begin(), vi.end(), isEven, -1);
    dispv(vi); // ALL even number are converted into -1
    
    // // remove which matched search;
    auto it = remove(vi.begin(), vi.end(), -1); // this returns how many number removed
    // OR if it fails then return end();
    if (it == vi.end()) {
        cout << "no elements removed" << endl;
    }else {
        vi.resize(it - vi.begin()); // you need to resize when you remove
    }
    dispv(vi); // { 1 5 35 53 245 7 89 75 }; after removing all -1
    vi.push_back(10);
    it = vi.begin();
    vi.insert(it, 1, 3000);
    dispv(vi);
    
    // remove_if all even
    it = remove_if(vi.begin(), vi.end(), isEven);
    if (it == vi.end()) {
        cout << "no even found";
    }else {
        vi.resize(it - vi.begin());
    }
    dispv(vi); // 3000 must be gone
}

void main_moddifying_algorithms() {
    
    vector<int> vi = {21, 45, 42 ,32,34 ,54, 656, 78, 65, 43, 33, 43, 5, 67, 7,87, 8, 98, 93, 2, 45, 678, 34, 3, 2, 43, 32,3};
    vector<int> vi2(vi.size(), 0);
    
    // COPY FUNCTION WHICH COPIES SOUCE TO THE TARGET
    // SYNTAX: copy(source.begin(), source.end(), target.begin());
    copy(vi.begin(), vi.end(), vi2.begin());
    dispv(vi2); // SAME AS Vi
    
    // copy_n to get first n elements only
    vector<int> vi3(vi.size(), 0);
    copy_n(vi.begin(), 5, vi3.begin());  // first five to vi2
    dispv(vi3); // SAME AS Vi
    
    // REVERSE YOUR ARRAY / CONTAINER;
    reverse(vi.begin(), vi.end());
    dispv(vi);  // reverses the vi ~ THIS IS ACCOMPLISHED BY SWAP FUNCTION
    string name = "JAIMIN__CHOKHAWALA";
    reverse(name.begin(), name.end());
    cout << name << endl;  // ALAWAHKOHC__NIMIAJ
    
    // REVERSE COPY  // copies in reverse order
    reverse_copy(vi.begin(), vi.end(), vi2.begin());
    dispv(vi2);  // ~ reverse of vi
    
    vector<char> alpha = {'A', 'B', 'C', 'D', 'E', 'F'};
    reverse_my_array(alpha);
    dispv(alpha);
    
    // FILL FUNCTION to refill in container;
    fill(vi.begin(), vi.end() - 10, -100); // BEGIN TO END - LAST 10 of them
    fill_n(vi.begin(), 3, -500);  // FIRST THREE ONLY
    dispv(vi);
    
    
    // WE HAVE GENERATE FUNCTION
    // SYNTAX: generate(vec_b, vec_end, FUNCTION / LAMBDA)
    generate(vi.begin(), vi.end(), []() -> int { return rand() % 100; });
    cout << "random numbers: " << endl;
    dispv(vi); // FILLING IT WITH RANDOM NUMBERS
    
    // WE HAVE RANDOM SHUFFLE, which suffles element inside container
    vector<int> eles = {1, 2, 3, 4, 5};
    random_shuffle(eles.begin(), eles.end());
    dispv(eles); // { 2 5 3 4 1 };
}

void main_random_nums() {
    vector<int> vi = {23, 3434, 343, 5, 34, 56, 7, 34, 6, 87, 89, 78, 30, 67, 89, 43, 84, 65, 21, 32, 34};
    
    random_device rd;
    mt19937 g(rd());
    /*
    FROM <random> HEADER FILE
    Mersenne Twister algrithm for random number generation
    */
    cout << "Random suffle: " << endl;
    shuffle(vi.begin(), vi.end(), g);
    dispv(vi);
}

void main_partition() {
    
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    // WE WILL BE USING is_even_tens function / homemade
    
    // SYNTAX: partition(vec.begin(), vec.end(), FUNCTION_FOR_PARTITION)
    // if element meet those criteria, it will be moved to beginning of container
    partition(nums.begin(), nums.end(), isEven);
    cout << "even numbers are in left side of container, odds are in right side of container: \n";
    dispv(nums);
    
    // TO MANAGE THE ORDER AFTER PARTITION USE, stable_partition
    // SOMETIMES, MULTIPLE PARTION CODE CANNOT RUN TOGATHER SO USE ONE AT ONCE
    stable_partition(nums.begin(), nums.end(), isEven);
    cout << "stable partition: " << endl;
    dispv(nums); // { 2 4 6 8 10 12 14 1 3 5 7 9 11 13 15 };
    
}

void partition_copy() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    // partition copy, allows you to get partitioned data in other container
    int sz = count_if(nums.begin(), nums.end(), isEven); // get number how many EVEN ARE THERE
    vector<int> evens(sz, 0), odds(nums.size() - sz, 0); // new containers

    partition_copy(nums.begin(), nums.end(), evens.begin(), odds.begin(), isEven);
    cout << "ALL NUMBERS: ";
    dispv(nums);
    cout << endl;
    cout << "EVEN NUMBERS: ";
    dispv(evens);
    cout << endl;
    cout << "ODD NUMBERS: ";
    dispv(odds);
    cout << endl;
    // OUTPUT
    
    /*
    ALL NUMBERS: content: { 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 };
    EVEN NUMBERS: content: { 2 4 6 8 10 12 14 };
    ODD NUMBERS: content: { 1 3 5 7 9 11 13 15 };
    */
    
}


// main -----------------------------------------------------------
int main(int argc, char **argv) {
    // main_replace_removing();
    
    // main_moddifying_algorithms();
    
    // main_random_nums();
    
    // main_partition();
    
    partition_copy();
    



 

    return 0;
}
//-----------------------------------------------------------------
