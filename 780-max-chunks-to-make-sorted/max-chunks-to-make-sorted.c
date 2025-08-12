int maxChunksToSorted(int* a, int as) {
    int chunk=0,max=0;
    for(int i=0;i<as;i++)
    {
        if(a[i]>max)max=a[i];
        if(max==i)chunk++;
    }
    return chunk++;
}