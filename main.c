#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char steam[36] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','0','1','2','3','4','5','6','7','8','9'};
    int i=0;
    int k=0;
    int j;
    srand(time(NULL));

    FILE *f;
    f = fopen("steamkey.txt", "w");
    if(f == NULL)
    {
      printf("Error!");
      exit(1);
    }
    printf("how many steam keys you need? ");
    scanf("%d",&j);

   for(i;i<j;i++)
   {
       for(k=0;k<5;k++){
       fprintf(f, "%c", steam[rand()%36]);}
       fprintf(f,"-");
       for(k=0;k<5;k++){
       fprintf(f, "%c", steam[rand()%36]);}
       fprintf(f,"-");
       for(k=0;k<5;k++){
       fprintf(f, "%c", steam[rand()%36]);}
       fprintf(f,"\n");
   }
   fclose(f);
    return 0;
}
