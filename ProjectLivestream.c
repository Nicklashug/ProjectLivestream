/********************************/
/* Analyse af livestream data   */
/*          DAT - A412          */
/*                              */
/*         20/12 - 2017         */
/********************************/

#include <stdio.h>

int main(void)
{
    FILE *inputFile = fopen("TextFiles/Cryaotic_ChatLog_21-11.txt", "r");
    FILE *outputFile = fopen("TextFiles/Output.txt", "w");


    fclose(inputFile);
    fclose(outputFile);

    return 0;
}