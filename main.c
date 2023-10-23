#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /**Exercice2**/
    /**char ch[20],i;
    for (i=0;i<5;i++){
        printf("Donner un mot \n");
        scanf("%s",&ch);
    }**/
    /**Exercice3**/
    /**char * nom[20], * prenom[20];
    printf("Donner votre nom ");
    scanf("%s",&nom);
    printf("Donner votre prenom ");
    scanf("%s",&prenom);
    int size = strlen(nom)+strlen(prenom);
    char * fullName = (char *) malloc(size );
    strcat(fullName,nom);
    strcat(fullName," ");
    strcat(fullName,prenom);
    printf("Votre nom et prenom : %s\n",fullName);
    **/
    /**Exercice4**/
    /**char ch[300];
    printf("Donner un texte ");
    fgets(ch, sizeof(ch), stdin);
    int nb=0,i;
    for (i=0;i<strlen(ch);i++){
        if (ch[i]=='e'){
            nb++;
        }
    }
    printf("\nLe nombre de 'e' dans le texte = %d\n",nb);
    printf("\nAffichage  à l'envers \n");
    for (i=strlen(ch)-1;i>=0;i--){
        printf("%c",ch[i]);
    }**/

    /**Exercice 5**/

    char ch[20];
    char ch2[20];
    char ils[40], je[40];
    int i;

    printf("Donner un verbe : ");
    scanf("%s", ch);

    if ((ch[strlen(ch) - 1] == 'r') && (ch[strlen(ch) - 2] == 'e')) {
        for (i = 0; i < strlen(ch) - 2; i++) {
            ch2[i] = ch[i];
           /// printf("%c", ch2[i]);
        }
        ch2[i] = '\0';

        strcpy(ils, ch2);
        strcpy(je, ch2);
        strcat(ils, "e");
        strcat(ils, "ent");
    }

    printf("\nIls %s\nJe %s", ils,je);
    return 0;
}
