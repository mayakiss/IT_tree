//Issa Tankari Boubacar
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Printing a command-line argument
int main(int argc, string argv[]){

if (argc == 2)
{
string p;

//initialize the k
int k=atoi(argv[1]);

//ask for plaintext
p=get_string("plaintext: ");

//ASCII to alphabetical

printf("cyphertext: ");
for(int i=0; i<strlen(p); i++)

if(isalpha(p[i]))
{
    if(islower(p[i]))
        {
            //c=(((p[i]+ k)- 97)%26)+ 97;
            printf("%c",(((p[i]- 97)+ k)%26)+ 97);
        }
    if(isupper(p[i]))
        {
            printf("%c",(((p[i]- 65)+ k)%26)+ 65);
        }
}
else
        {
            printf("%c",p[i]);
        }
    printf("\n");
    }
    return 0;
}
