#include <stdio.h>
#include <stdlib.h>

struct student {
    char firstName[50];
    int id;
    struct date{
int day;
int month;
int year;
}dob;
    int score;
} ;
int main()
{
    printf(" \n\n\n\n\n\t\t\t\t\t          *  *  *  *  *  *  *  *");
		printf("\n\n\t\t\t\t\t          *                    *");
		printf("\n\n\t\t\t\t\t          *       Welcome      *");
		printf("\n\n\t\t\t\t\t          *                    *");
		printf("\n\n\t\t\t\t\t          *  *  *  *  *  *  *  *");
		printf("\n\n\n\n\n\t\t\t\t\t      Press any key to continue...... ");
		getch();
		system("cls");
    int i,j,n;
    struct student s[50];
    {
        printf("\t\t\t\t\tHow many students you want to input: ");
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        printf("\n\t\t\t\t\tEnter your id: ");
        scanf("%d", &s[i].id);
        printf("\t\t\t\t\tEnter first name: ");
        scanf("%s", s[i].firstName);
        printf("\t\t\t\t\tEnter your Date of Birth [dd mm yyyy]: ");
        scanf("%d%d%d",&s[i].dob.day,&s[i].dob.month,&s[i].dob.year);
        printf("\t\t\t\t\tEnter the score of the last year: ");
        scanf("%d", &s[i].score);
    }
    system("cls");
    printf("\n\t\t\t\t\tDisplaying Information:\n\n");
    for (j = 0; j < n; ++j) {
        printf("\n\t\t\t\t\tStudent %d:\n",j+1);
        printf("\n\t\t\t\t\tid: %d\n", s[j].id);
        printf("\t\t\t\t\tFirst name: ");
        puts(s[j].firstName);
        printf("\t\t\t\t\tDate of Birth[dd/mm/yyyy] : %d/%d/%d\n",s[j].dob.day,s[j].dob.month,s[j].dob.year );
        printf("\t\t\t\t\tscore: %d", s[j].score);
        printf("\n\n\n");
    }
    };


    return 0;
}
