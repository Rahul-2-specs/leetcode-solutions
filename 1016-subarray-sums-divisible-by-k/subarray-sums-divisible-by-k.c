int subarraysDivByK(int* n, int ns, int k) {
    int sum=0,count=0;
    int mod[k];
    for(int i=0;i<k;i++)mod[i]=0;
    mod[0]=1;
    for(int i=0;i<ns;i++)
    {
        sum+=n[i];
        int m=((sum%k)+k)%k;
        count+=mod[m];
        mod[m]++;
    }
    return count;
}