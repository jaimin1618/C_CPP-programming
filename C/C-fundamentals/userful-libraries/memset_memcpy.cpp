#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cstdlib>
#include<ctime>
using namespace std;

void using_memset() {
    
    char str[] = "Hey! This world is so stupid!";
    memset(str +  6, '@', 3);
    cout << str << endl;
    
    // YOU can also use;
    char *cp = (char *)malloc(sizeof(char) * 20);
    memset(cp, '\0', 20); // all will be replaced
    memset(cp, '-', 19);
    cout << cp << endl;
    

    free(cp);
}

void using_memcpy() {
    
    char source[] = "Blah! Blah!, stupid!!!";
    char destination[20];
    
    // WE CAN COPY CHARACTER STRING FROM SOURCE TO DESTINATION
    memcpy(destination, source + 13, 7);
    destination[5] = '\0'; // YOU HAVE TO END IT BY USING '\0',
    // memset does BYTE BY BYTE COPY SO IT WILL NOT PUT 0 AT END
    cout << destination << endl;
    cout << strlen(destination) << endl;
    
    // USING DYNAMIC ALLOCATION
    srand(time(NULL));
    int *ip = (int *) malloc(sizeof(int) * 10);
    for (int i = 0; i < 10; ++i) {
        ip[i] = rand() % 100;
    }
    
    cout << "content of first block: \n";
    for (int i = 0; i < 10; ++i) { cout << ip[i] << endl; }
    
    int *q = (int *) malloc(sizeof(int) * 5);
    memcpy(q, ip, 20);
    
    cout << "content of second block: \n";
    for (int j = 0; j < 5; ++j) { cout << q[j] << endl; }
    
    
}
// main -----------------------------------------------------------
int main(int argc, char **argv) {
    // using_memset();
    using_memcpy();


 
    return 0;
}
//-----------------------------------------------------------------
