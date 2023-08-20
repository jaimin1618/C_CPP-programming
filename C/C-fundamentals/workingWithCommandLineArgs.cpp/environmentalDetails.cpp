#include<iostream>
using namespace std;

// main -----------------------------------------------------------
int main(int argc, char **argv, char **envp) {
    // IF YOU WANT TO GET ENVIRONMENTAL DETAILS OF PROGRAME USE THIRD
    // ARGUMENT
    
    printf("ENVIRONMENTAL INFORMATION OF MY PROGRAMME\n");
    for (int i = 0; envp[i]; ++i) {
        printf("envp[%d] = %s\n", i, envp[i]);
    }
    
    return 0;
}
//-----------------------------------------------------------------
