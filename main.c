#include <stdio.h>

long faktoryel(long n)
{
    if (n <= 1)
        return 1;
    else
        return (n*faktoryel(n - 1));
}
int main(void){
    int i;
    for (i = 0; i <= 10; i++)
    {
        printf("%d! = %d\n", i, faktoryel(i));
    }
return 0;
