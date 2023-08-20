#include<iostream>
#include<map>
#include<vector>
using namespace std;

const map<int, int> counter (const vector<int> vi) {
    const map<int, int> result;
    for (int el : vi) {
        if (!result[el]) {
            result[el] = 1;
        } else {
            ++result[el];
        }
    }
    return result;
}


int main(int argc, char* argv[]) {
    
    
    
    
    
    
    

    return 0;
}