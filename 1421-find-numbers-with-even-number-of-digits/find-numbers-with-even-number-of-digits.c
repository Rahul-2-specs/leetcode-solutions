int findNumbers(int* n, int ns) {
    int count=0;
    for(int i=0;i<ns;i++)
    {   
        int num=n[i];
        int digits=0;
        while(num>0)
        {
            num/=10;
            digits++;
        }
        if(digits%2==0)count+=1;
    }
    return count;
}