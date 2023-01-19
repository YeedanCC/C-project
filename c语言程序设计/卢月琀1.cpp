#include <stdio.h>

int isprime(unsigned int n);

int main()
{
    int i,j,k,m,n,flag;

    m = 0;
    if (i % 2 != 0)
    {
        flag = 0;
        for (i = 7; i < 100; i++)
        {
            flag = 0;
            for (j = 2; j < i; j++)
            {
                if (isprime(j))
                {
                    for (k = 2; k < i - j; k++)
                    {
                        if (isprime(k) && isprime(i - j - k) && ((i - j - k) > 0))
                        {
                            printf ("%4d = %4d + %4d + %4d",i,j,k,i-j-k);
                            m++;
                            if (m % 4 == 0)
                            {
                                printf ("\n");
                            }
                            flag = 1;
                            break;
                        }
                    }
                    if (flag)
                    break;
                }
            }
        }
    }
    else
    {
        for (i = 4; i < 100; i += 2)
        {
            for (j = 2; j < i; j++)
            {
                if (isprime(j) && isprime(i - j))
                {
                    printf ("%4d = %4d + %4d", i , j , i - j);
                    m = m + 1;
                    if (m % 4 == 0) printf ("\n");
                    break;
                }

            }
        }
    }

}


int isprime(unsigned int n)
{
    unsigned int i;
    switch (n)
    {
    case 0:
    case 1:
        return 0;
    case 2:
        return 1;
    default:
        for (i = 2; i <= n/2; i++)
        {
            if (n % i == 0)
                return 0;
        }
        break;
    }
    return 1;
}
