#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int Translate(char *Directory) {
    //time to actually make Translate these files
    FILE *fptr;
    fptr = fopen(Directory, "r");

    if(fptr == NULL) {
    printf("C+0A - File Not Available");
    return -1;
    }
}

int main() {
    //who actually makes so much foldes that they had to go this much?
    char Directory[4096];
    char Confirmation;

    printf("Choose an OXV Directory: \nSpaces in Directories aren't allowed btw\n");
    scanf("%s", Directory);
    printf("This is your directory correct? (Y for Yes) %s\n", Directory);
    scanf(" %c", &Confirmation);

    Confirmation = toupper(Confirmation);

    if (Confirmation == 'Y') {
    printf("Directory Confirmted\n");
    Translate(Directory);
    } else {
    printf("Directory Not Confirmed");
    }
    return 0;
}
