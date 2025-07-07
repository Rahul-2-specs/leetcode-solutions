/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* n, int ns, int* rs) {
    int* res =(int *)malloc(sizeof(int)*ns);
    *rs=ns;
    res[0]=1;
    for(int i=1;i<ns;i++)
    {
        res[i]=res[i-1]*n[i-1];
    }
    int right=1;
    for(int i=ns-1;i>=0;i--)
    {
        res[i]*=right;
        right*=n[i];
    }
    return res;
}