#include <iostream>
using namespace std;

// userdefined means YOU ARE CREATING data type which are totally
// your responsibilty with attributes, operations and Methods;
// use typedef to create alias for data type

typedef long long ll;

typedef struct {
    int rollNumber;
    char name[20];
    float honestly;
} Student ;
// typedef struct Student Student OR

  
int main(){
    // init object;
    Student s1, s2, s3;
    s1.rollNumber = 5;
    s2.rollNumber = 1;
    
    return 0;
}