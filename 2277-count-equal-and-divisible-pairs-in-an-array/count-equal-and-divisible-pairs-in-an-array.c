int countPairs(int* n, int ns, int k) {
    int count=0;
    for(int i=0;i<ns;i++)
    {
        for(int j=i+1;j<ns;j++)
        {
            if((n[i]==n[j])&&((i*j)%k==0))count++;
        }
    }
    return count;
}