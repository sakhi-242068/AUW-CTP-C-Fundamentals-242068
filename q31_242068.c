#include<stdio.h>
#include<cs50.h>
int main ()
{
int marks=get_int ("Enter the marks out of 100: ");
if (marks>100 || marks<0)
printf ("Invalid");
else
{
if (marks>=80)
printf ("Grade: A");
else if (marks>=70)
{
printf ("Grade: B");
}
else if (marks>=60){
printf ("Grade: C");
}
else if (marks>=50)
{
printf ("Grade: D");
}
else {
printf ("Grade: F");
}
}
return 0;
}
