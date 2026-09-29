#include<stdio.h>
int main()
{
int marks ;
printf("enter marks:");
scanf("%d",&marks);
if (marks>=90)
{
printf("grade A");
}
else if (marks>=75)
{
printf("grade B");
}
else if (marks >=60)
{
printf("grade c");
}
else if (marks>=40)
{
printf("grade d");
}
else if (marks>=30)
{
printf("fail");
}
return 0;
}
