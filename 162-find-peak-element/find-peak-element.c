int findPeakElement(int* n, int ns) {
    int i;
    for(i=0;i<ns-1;i++)
    {
        if(n[i]>n[i+1])
        {
            return i;
        }
    }
    return i;
}