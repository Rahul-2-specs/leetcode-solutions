int numRabbits(int* a, int as) {
    int freq[1000]={0};
    for(int i=0;i<as;i++)
    {
        freq[a[i]]++;
    }
    int tot=0;
    for(int k=0;k<1000;k++)
    {
        if(freq[k]>0)
        {
            int gps=k+1;
            int g=(freq[k]+gps-1)/gps;
            tot+=gps*g;
        }
    }
    return tot;
}