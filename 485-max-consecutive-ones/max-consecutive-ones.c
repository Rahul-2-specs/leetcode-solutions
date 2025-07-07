int findMaxConsecutiveOnes(int* n, int ns) {
    int count=0,maxCount=0;
    for(int i=0;i<ns;i++)
    {
        if(n[i]==1)count++;
        else
        {
            if(count>maxCount)
            {
                maxCount=count;
            }
            count=0;
        }
    }
    if(count>maxCount)maxCount=count;
    return maxCount;
}