#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch,s[100],sen[200],a;
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("%c",&a);
    scanf("%[^\n]s",sen);
    printf("%c\n%s\n%s",ch,s,sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
