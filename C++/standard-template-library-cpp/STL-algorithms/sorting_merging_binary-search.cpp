#include<bits/stdc++.h>
using namespace std;

// MY USED FUNCTIONS IN CODE
template <typename T>
void dispv(vector<T> &vi) {
    if (vi.empty()) return;
    cout << "content: { ";
    for (T ele: vi) { cout << ele << ' '; }
    cout << "};\n\n";
}
template <typename T>
bool comp(const T &a, const T &b) { return a > b; }


void main_sorting() {
    vector<int> vi = {13, 43, 5,4565, 7687, 9, 545, 4, 21, 1, 2,34, 4, 8, 65, 19, 1, 23 ,4, 8, 321, 121, 2, 35, 67};
        
    // default sorting
    sort(vi.begin(), vi.end(), comp<int>);
    dispv(vi);

    // THAT'S IT IN SORTING
}

void merging() {
    // two unsorted container
    vector<int> vi = {13, 35, 5, 67, 27};
    vector<int> vi2 = {65, 87, 91, 23, 10};
    
    // new container, for containing SORTED DATA of vi and vi2;
    vector<int> sorted(vi.size() + vi2.size());
    
    // sorted two vector first;
    sort(vi.begin(), vi.end());
    sort(vi2.begin(), vi2.end());
    
    // merging them
    merge(vi.begin(), vi.end(), vi2.begin(), vi2.end(), sorted.begin());
    dispv(sorted);  // { 5 10 13 23 27 35 65 67 87 91 };
    // EVEN THOUGH WE DID NOT COMPARE WITH EACH OTHER ELEMENTS OF VI AND VI2
    
    // BUT IF YOU DO MERGE USING YOU OWN FUNCTIONS THEN YOU HAVE TO ADD IT EVERYWHERE.
    vi = {13, 35, 5, 67, 27};
    vi2 = {65, 87, 91, 23, 10};
        
    sort(vi.begin(), vi.end(), comp<int>); // comp returns GREATER value
    sort(vi2.begin(), vi2.end(), comp<int>);
    
    merge(vi.begin(), vi.end(), vi2.begin(), vi2.end(), sorted.begin(), comp<int>);
    dispv(sorted);  // { 91 87 67 65 35 27 23 13 10 5 };
    // EVEN THOUGH WE DID NOT COMPARE WITH EACH OTHER ELEMENTS OF VI AND VI2
    
}

void main_binary_search() {
    vector<int> nums = {12, 43, 34, 5 , 23, 343, 23, 67, 23, 8, 956, 34, 676};
    
    // FOR B SEACRH YOU HAVE TO SORT DATA
    sort(nums.begin(), nums.end());
    cout << "sorted data: " << endl;
    dispv(nums);
    
    // SEACRHING
    int num = 23;
    cout << "SEACRHING FOR: " << num << endl;
    if (binary_search(nums.begin(), nums.end(), num, comp<int>)) {
        // USING COMP<INT> FUNCTIONS makes binary tree of by that comp function
        cout << "found." << endl;
    }else {
        cout << "not found" << endl;
    }
    
    // LOWER BOUND & UPPER BOUND SEACRH, this returns us iterator;
    auto it = lower_bound(nums.begin(), nums.end(), num); // iterator to num = 23;
    cout << "Lower bound: " << *it << endl;
    
    it = upper_bound(nums.begin(), nums.end(), num); // iterator to num + 1;  34
    cout << "upper bound: " << *it << endl;
    
    // RANGE OF BOUNDS, this returns pair of lower and upper bound
    auto pr = equal_range(nums.begin(), nums.end(), num);
    cout << "lower bound: " << *pr.first << endl;
    cout << "upper bound: " << *pr.second << endl;
    
}


// main -----------------------------------------------------------
int main(int argc, char **argv) {
    
    // main_sorting();
    
    // merging();
    
    main_binary_search();
    


 

    return 0;
}
//-----------------------------------------------------------------
