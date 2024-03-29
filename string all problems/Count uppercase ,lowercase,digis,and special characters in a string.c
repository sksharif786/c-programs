/* ASCII value
  A-Z=>65-90
  a-z=>97-122
  0-9=>48-57 */

#include<stdio.h>
void main()
{
char s[20];
scanf("%[^\n]s",s);
int c1=0,c2=0,c3=0,c4=0;
printf("=====================================\n");
for(int i=0;s[i]!='\0';i++)
{
    if (s[i]>=65 && s[i]<=90)
    {
        c1++;
    }
    else if  (s[i]>=97 && s[i]<=122)
    {
        c2++;
    }
    else if  (s[i]>=48 && s[i]<=57)
    {
        c3++;
    }
    else{
        c4++;
    }
}
printf("The capital letters=%d\n",c1);
printf("The small letters=%d\n",c2);
printf("The numbers are=%d\n",c3);
printf("The special characters are=%d",c4);
}
