

int countGoodTriplets(int* a, int as, int A, int b, int c){
    int count=0;
    for(int i=0;i<as;i++)
    {
        for(int j=i+1;j<as;j++)
        {
            if(abs(a[i]-a[j])<=A)
            {
                for(int k=j+1;k<as;k++)
                {
                    if(abs(a[j]-a[k])<=b && abs(a[i]-a[k])<=c)count++;
                }
            }
        }
    }
    return count;
}