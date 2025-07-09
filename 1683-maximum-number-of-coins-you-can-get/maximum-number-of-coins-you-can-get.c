#include <stdlib.h>
int cmp(const void* a,const void* b)
{
    return (*(int *)b -*(int *)a);
}


int maxCoins(int* piles, int pilesSize) {
    qsort(piles,pilesSize,sizeof(int),cmp);
    int sum=0;
    for(int i=1;i<pilesSize;i+=2)
    {
        if(i>=pilesSize/3*2)break;
        sum+=piles[i];
    }
    return sum;
}