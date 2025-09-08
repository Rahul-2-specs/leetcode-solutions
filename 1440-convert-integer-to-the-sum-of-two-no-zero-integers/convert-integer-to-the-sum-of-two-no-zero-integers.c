bool haszero(int x)
{
    while(x>0)
    {
        if(x%10==0)return true;
        x/=10;
    }
    return false;
}
int* getNoZeroIntegers(int n, int* rs) {
    int* res=(int*)malloc(2*sizeof(int));
    for(int a=1;a<n;a++)
    {
        int b=n-a;
        if(!(haszero(a))&&!(haszero(b)))
        {
            res[0]=a;
            res[1]=b;
            *rs=2;
            return res;
        }
    }
    *rs=0;
    return NULL;
}
