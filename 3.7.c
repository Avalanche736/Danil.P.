#include <stdio.h>
#include <stdlib.h>
int a[999999];
int main()
{
    int n, m, k, i, pi;

    scanf("%d %d", &n, &m);

    i = 1;
    pi = 0;
    k = 0;

    while (k != n) //когда мы удалим n людей из круга, выходим из цикла
    {
        if ((i - pi == m) && (a[i % n] = 0))   //идём по номерам людей в круге, если разность текущего номера и предыдущего удалённого pi равна m, тоже удаляем (если только мы уже не удаляли его же)
        {
            i = i % n;
            pi = i;
            a[i] = 1;
            k++;
            if (k == n || k == n - 1 || k == n - 2)
            {
                printf("%d", i);
            }
        }
        i++;
    }
