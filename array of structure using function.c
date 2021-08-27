// array of structure using pointer
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct student
{
    char name[20];
    int roll_no;
    int marks[3]
}student;

void display(struct student *s)
{
    int i;
    printf("\n Name = %s",s->name);
    printf("\n Roll number = %d",s->roll_no);
    printf("\n Marks = ");
    for(i=0;i<3;i++)
        printf("%d ",s->marks[i]);
}

int main()
{
    struct student *s[2];
    int i,j;
    system("cls");
    for(i=0;i<2;i++)
    {
        s[i] = (struct student *)malloc(sizeof(struct student));
        printf("\n Enter the name of student %d : ",i+1);
        getchar();
        gets(s[i]->name);
        printf("\n Enter roll number: ");
        scanf("%d",&s[i]->roll_no);
        printf("\n Enter the marks obtained in three subjects by student %d : ",i+1);
        for(j=0;j<3;j++)
            scanf("%d",&s[i]->marks[j]);
    }

    printf("\n  \n\n ***** DETAILS *****");
    for(i=0;i<2;i++)
        display(s[i]);
    getch();
    return 0;
}
