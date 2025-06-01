#include <stdio.h>
#include <math.h>
#include <string.h>
int myAtoi(char* s) {
int out = 0;
int n=strlen(s);
int i=0;
int sign = 1;
while(i<n)
{
    if(s[i]==' ')
    {
        i++;
        continue;
    }
    if(s[i]=='-')
    {
        sign=-1;
        i++;
        continue;
    }
    else if((int)(s[i]-'0')%10 == 0)
    {
        out+=((int)(s[i]-'0'))*pow(10,n-1-i);
        i++;
        continue;
    }
    else 
    {
        break;
    }
    return sign * out;
}    
}
int main()
{
    char *  s="1337cd0";
    printf("%d",myAtoi(s));
    return 0;
}