#include <stdio.h>
int main()
{
    // Here your code !
    
    int c = '7';
    if (c > '0')
    {
        printf ("%c is positive\n",c);
    }
    else if (c == '0')
    {
        printf ("%c is zero\n",c);
    }
    else 
    {
        printf ("%c is negative\n",c);
    }
    return (0);
}
