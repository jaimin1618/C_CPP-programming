#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
#include<cmath>
using namespace std;

// functions i used somewhere
inline bool isEven(const int &num) { return num % 2 == 0; }

// main -----------------------------------------------------------
int main(int argc, char **argv) {
    // see how we can make functions during runtime, both of them works during run
    auto print_title = [](string input) {
        cout << "\n------- | " << input << " | -------\n";
    };
    
    auto print_elements = [](auto data) {
        cout << "\ncontent: { ";
        for (const auto &val: data) cout << val << " ";
        cout << "}\n\n";
    };
    
    // ----------------------------- MAPPING C++ ------------------------------
    print_title("Mapping ~ transform() | for_each()");
    vector<int> inCollection({1, 2, 3, 4, 5}); // DATABASE
    vector<int> outCollection; // processed data
    transform(inCollection.begin(), inCollection.end(), back_inserter(outCollection),
              [](const int &val) {
                  // THIS DOESN'T CHANGE THE IN_COLLECTION, IT WORKS ON outCollection
                  return 10*val;
              });
    print_elements(outCollection);
    
    vector<int> data({1, 2, 3, 4, 5});
    for_each(data.begin(), data.end(), [](int &ele) mutable -> int {
        if (ele % 2 == 0) {
            ele += 10;
            cout << ele << ' ';
        }else {
            ele -= 10;
            cout << ele << ' ';
        }
        return ele;
    });
    print_elements(data);  // -9 12 -7 14 -5
    
    vector<int> inputs({1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
    int sum = 0;
    float avg = 0.0;
    // NOTE: '&', 'mutable -> int {}', and other things in lambda must be checked
    for_each(inputs.begin(), inputs.end(), [&sum](int &ele) { sum += ele; });
    cout << sum << endl;



    // ----------------------------- FILTERING C++ ------------------------------
    print_title("Filtering ~ copy_if() | remove_if()");
    vector<int> filteredCollection;  // NOTE: REMEMBER USE OF back_inserter()
    copy_if(data.begin(), data.end(), back_inserter(filteredCollection),
            [](int &val) {
                return val % 2 != 0;
        });
            
            
    print_elements(filteredCollection);
    print_elements(data);
    remove_if(data.begin(), data.end(), isEven);
    // WHEN YOU USE REMOVE IF, IT WILL NOT CHANGE container.size()
    // SO THERE WILL GARBAGE VALUE YOU SHOULD ITERATE WITHOUT CHANGING size();
    print_elements(data); // THIS SHOWS GARBAGE VALS
    
    // ----------------------------- REDUCING C++ ------------------------------
    print_title("reduce ~ accumulate()");
    // NOTE: accumulate() very similar reduce() of JS
    vector<int> numbers({1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
    int sum_up = accumulate(numbers.begin(), numbers.end(), 0,
                [](int total, int curr){
                    return total + curr;
                });
    cout << "We have reduced 'numbers' into value = " << sum_up << endl;
    print_elements(numbers);
    
    int MAX = accumulate(numbers.begin(), numbers.end(), numbers[0],
                    [](int first, int second) {
                        if (first > second) {
                            return first;
                        }else {
                            return second;
                        }
                    });
    cout << "Maximum of n given numbert by reducing: " << MAX << endl;
    
    int MIN = accumulate(numbers.begin(), numbers.end(), numbers[0],
                  [](int first, int second) {
                  if (first < second) {
                      return first;
                  }else {
                      return second;
                  }
              });
    cout << "Minimum of n given numbert by reducing: " << MIN << endl;
    return 0;
}
//---------------------o--------------------------------------------

/*
MAP, FILTER AND REDUCE FUNCTIONALITY IN C++
std::transform OR std::for_each ==> map() of python/javaScript;
std::copy_if OR std::remove_if ==> remove() / filter() of python/javaScript;
std::accumulate ==> reduce() of javaScript
*/