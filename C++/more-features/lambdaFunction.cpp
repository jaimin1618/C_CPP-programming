#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

enum class BattleCondition {
    red, yellow, green
};

void print_it(const int &n) { cout << '-' << n;}

// LAMBDA IS AN UNNAMED FUNCTION OBJECT, USE IT TO WRITE LOCAL FUNCTIONS

// main -----------------------------------------------------------
int main(int argc, char **argv) {
    vector<int> nums{1, 2, 3, 4, 5};
    
    // actually lambda function replaces std::bind function;
    for_each(nums.begin(), nums.end(), [](const int &n) {
        if (n % 2 == 0) {
            cout << " <= " << n;
        }else {
            cout << " - " << n;
        }
    });
    cout << endl;
    
    // other way to do this is...
    auto myLambdaFunction = [](const int &n) {
        if (n % 2 == 0) {
            cout << " - " << n;
        }else {
            cout << " <= " << n;
        }
    };
    for_each(nums.begin(), nums.end(), myLambdaFunction);
    cout << endl;
    // ANOTHER USE OF LAMBDA FUNCTION WITH SWITCH, see carefully
    auto currentLight = BattleCondition::green;
    const auto shieldLevel = [&]() {
        switch (currentLight) {
            case BattleCondition::green:
                return 50;
            case BattleCondition::yellow:
                return 5000;
            case BattleCondition::red:
                return 50000;
            default:
                return 0;
        }
    }();
    cout << "current shield level: " << shieldLevel << endl;
    



    return 0;
}
//-----------------------------------------------------------------
