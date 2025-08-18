int cmp (const void *a ,const void *b){
    return (*(int *)a - *(int *)b);
}

int matchPlayersAndTrainers(int* p, int pSize, int* t, int tSize) {
        qsort(p,pSize,sizeof(int),cmp);
        qsort(t,tSize,sizeof(int),cmp);
        int i=0,j=0,count=0;
        while(i<pSize && j<tSize)
        {
            if(p[i]<=t[j])
            {
                i++;
                j++;
                count++;
            }
            else j++;
        }
        return count;
}