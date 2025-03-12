#include<stdio.h>
struct Date
{
    int day;
    int month;
    int year;
};
void acceptDate (struct Date *ptrDate)
{
    printf("Enter the day -");
    scanf("%d",&ptrDate->day);
    printf("Enter the month -");
    scanf("%d",&ptrDate->month); 
    printf("Enter the year -");
    scanf("%d",&ptrDate->year);

}
void printDate(struct Date *ptrDate)
{
    printf("Date=%d:%d:%d\n",ptrDate->day,ptrDate->month,ptrDate->year);

}
int main()
{
    struct Date d1;
    acceptDate(&d1);
    printDate(&d1);
    return 0;

}

