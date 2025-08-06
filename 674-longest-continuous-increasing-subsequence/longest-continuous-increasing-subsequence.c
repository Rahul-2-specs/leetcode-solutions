int findLengthOfLCIS(int* n, int ns) {
    int max=1,cur=1;
    for(int i=1;i<ns;i++)
    {   
            if(n[i]>n[i-1])cur++;
            else cur=1;
        if(cur>max)max=cur;
    }
    return max;
}