#include <stdio.h>
#include <string.h>

int main(){
    char input[100];
    printf("ENTER YOUR STRING TO SCAN: ");
    scanf(" %[^\n]", input);   // you  can also use gets  ~ gets(input);
    int spaces = 0, characters = 0;
    for (int i=0; input[i]!='\0'; i++){
        if (input[i] == ' '){
            spaces++;
        }else {
            characters++;
        }
    }
    printf("\nTHERE ARE %d SPACES AND %d CHARACTERS IN GIVE INPUT.", spaces, characters);

    char newInput[100];
    printf("\nGETTING NUMBER OF STRINGS, SPECIAL CHARACTERS & SPACES, CHARACTERS: ");
    scanf(" %[^\n]", newInput);
    int newSpaces=0, newChar=0, newSpecials=0;
    for (int j=0; newInput[j]!='\0'; j++){
        char curr = newInput[j];
        if ((curr>='A' && curr<='Z') || (curr>='a' && curr<='z')){
            newChar++;
        }else if (curr == ' '){
            newSpaces++;
        }
    }
    printf("\nTHERE ARE %d CHARS AND %d SPACES IN YOUR GIVEN STRING.", newChar, newSpaces);
    
    return 0;
}