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
    printf("\nAffichage  � l'envers \n");
    for (i=strlen(ch)-1;i>=0;i--){
        printf("%c",ch[i]);
    }**/

    /**Exercice 5**/
   /** char ch1[]="sabrine";
    char ch2[]="sabrine";
    printf("%d",strcmp(ch1,ch2));**/
    /**Exercice6**/
    char ch[20],* ch2[20];
    char je[40],ils[40];
    int i;

    printf("Donner un verbe ");
    scanf("%s",&ch);
    printf("%c",ch[strlen(ch)-1]);
    if ((ch[strlen(ch)-1]=='r')&&(ch[strlen(ch)-2]=='e')){
        for (i=0;i<strlen(ch)-2;i++){
            ch2[i]=ch[i];
           /// strcat(ch2,ch[i]);
        }
        printf("%s",ch2);
         strcat(ils,ch2);
         strcat(ils,"ent");
    }
    printf("\nIls %s\n",ils);
    return 0;
}
