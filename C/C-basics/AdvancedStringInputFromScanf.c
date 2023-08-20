// THINGS GO LITTLE BIT COMPLICATED BECAUSE YOU WILL ENCOUNTER BUFFERING PROBLEMS HERE

#include <stdio.h>
#include <string.h>

int main(){
    char str[30];
    printf("Enter your full name: ");
    scanf(" %s", str);
    printf("Welcome, %s\n\n", str); // IT WILL ONLY TAKE FIRST NAME WHEN IT ENCOUNTERS SPACE.
    // NOTE: SCANF TERMINATES WHEN IT SCANS ONE OF THESE: "\O", "SPACE" OR INPUT

    // USING PATTERN MATCHING TO GET STRING INPUTS
    char input[20];
    scanf("  %[ABCDEF]", input);  // only accepts A, B, C, D, F character in Array || "DAVE" >>> DA ~ places "\0" when see something out of [ABCDEF]
    printf("Here is what you entered %s", input);
    // USE "%[A-Z]" - to get everything from A-Z entered as input. 
    // USE "%[A-Za-Z]" - to accept BOTH ALPHABET CASES.
    // USE "%[A-Za-z ]" - to ACCESS SPACES, A-Z, a-z
    char fullNameWithSpace[30];
    printf("\nEnter your full name again: ");
    scanf(" %[A-Za-z ]", fullNameWithSpace);
    printf("\n%s", fullNameWithSpace);


    return 0;
}