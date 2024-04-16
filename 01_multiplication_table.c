#include <stdio.h>
int main(){
    int num;
// take the number as an input from the user
printf ("Enter the number you want the multiplication table");
scanf ("%d",&num);
for (int i = 1; i < 11; i++)
{
    printf ("%d * %d = %d\n",num, i,i*num);
}
return 0;
}
