#include <iostream>
#include <cstdio>
using namespace std;

// STRUCT DOES NOT CONTAIN FUNCTIONS AND METHODS..
// THAT'S WHY C++ HAVE CLASSES TO DO THAT.
// STRUCT ARE MADE TO BE USED AS CONTAINER WHICH CONTAINS SOME AMOUNT OF DATA TYPES.
// FIRST LETTER OF CLASSES AND STRUCT SHOULD BE CAPITAL.

typedef struct {
    int id;
    const char *name; // don't need to store entire name
    const char *role;
} Employee;


int main(int argc, char const *argv[]) {
    // init
    Employee jai = {101, "JAI DOE", "PRO"};
    printf("%s is the %s, whose id is: %d\n",
            jai.name, jai.role, jai.id);
    
    // ACCESSING STRUCT OBJ USING PTR;
    Employee *op = &jai;
    cout << op->name << ' ' << op->role << ' ' << op->id << endl;
    
    
    // OTHER STUFF, DON'T LOOK HERE;
    char myName[] = "JAIMIN__CHOKHAWALA";
    char *cp = myName;
    for (int i = 0; cp[i]; i++) {
        cout << cp[i] << '-';
    }
        
    return 0;
}