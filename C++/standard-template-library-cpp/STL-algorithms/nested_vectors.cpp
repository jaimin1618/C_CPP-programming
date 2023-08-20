#include<bits/stdc++.h>
using namespace std;


// main -----------------------------------------------------------
int main(int argc, char **argv) {
    vector<vector<int>> vi = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int>::iterator i;
    for (i = vi.begin(); i != vi.end(); ++i) {
        for (int j = 0; j < i.size(); ++j) {
            cout << vi[i][j] << endl;
        }
    }

    cout << endl;
    

 

    return 0;
}
//-----------------------------------------------------------------
