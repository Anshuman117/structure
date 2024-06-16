#include<stdio.h>
typedef struct empoyee
{
    int id;
    char name[30];
    long salary;
} emp;
 void main()
 {
    emp e[3];
    int i;

    for ( i = 0; i<=2; i++)
    {                   
        printf("enter id");
        scanf("%d",&e[i].id);
        printf("enter name");
        fflush(stdin);
        gets(e[i].name);
        printf("enter salary");
        scanf("%ld",&e[i].salary);
    }

    for ( i = 0; i <= 2; i++)
    {
        printf("%d,%s,%ld\n",e[i].id,e[i].name,e[i].salary);
    }
         




         
    
    
 }


 












