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
    printf("Welcome\n");
    int i,j,n;
    struct student s[50];
    {
        printf("How many students you want to input: ");
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        printf("\nEnter your id: ");
        scanf("%d", &s[i].id);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter your Date of Birth [dd mm yyyy]: ");
        scanf("%d%d%d",&s[i].dob.day,&s[i].dob.month,&s[i].dob.year);
        printf("Enter the score of the last year: ");
        scanf("%d", &s[i].score);
    }
    printf("\nDisplaying Information:\n\n");
    for (j = 0; j < n; ++j) {
        printf("\nid: %d\n", s[j].id);
        printf("First name: ");
        puts(s[j].firstName);
        printf("Date of Birth[dd/mm/yyyy] : %d/%d/%d\n",s[j].dob.day,s[j].dob.month,s[j].dob.year );
        printf("score: %d", s[j].score);
        printf("\n");
    }
    };


    return 0;
}
