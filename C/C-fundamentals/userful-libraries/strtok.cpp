#include<iostream>
#include<cstring>
using namespace std;

void using_strtok_normally() {
    
    char source[] = "Jaimin chokhawala, 40#3.5, 400, 2.5";
    // seperating from ',' OR '#'
    char delims[] = ",#";
    char *token;
    
    token = strtok(source, delims);
    cout << token << endl; // Jaimin chokhawala
    
    // FOR SECOND TIME;
    token = strtok(NULL, delims);
    cout << token << endl; // 40
    
    token = strtok(NULL, delims);
    cout << token << endl; // 3.5;

}

void using_strtop_loop() {
    // THIS IS SPLIT VERSION OF C++
    char source[] = "Jaimin chokhawala, 40#3.5, 400, 2.5";
    // seperating from ',' OR '#'
    char delims[] = ",#";
    char *token;
    
    token = strtok(source, delims);
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, delims);
    }
    
    
    char names[] = "JAIMIN, JAKE, MAX, SAM, REACHEL, ROBERT, JASMIN";
    char stops[] = ",";
    char *my_token;
    my_token = strtok(names, stops);
    while (my_token != NULL) {
        
        printf("my_token = %s\n", my_token);
        my_token = strtok(NULL, stops);
    }
    
    
    
}


// main -----------------------------------------------------------
int main(int argc, char **argv) {
    using_strtop_loop();

    return 0;
}
//-----------------------------------------------------------------
