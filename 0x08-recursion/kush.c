        int r, sum = 0, temp = 0;

while (*s > 0)
{
r = *s%10;
sum = (sum * 10) + r;
*s = *s/10;
}
if (temp == sum)
{
        return (1);
}
else
{
        return (0);
}
}
~
