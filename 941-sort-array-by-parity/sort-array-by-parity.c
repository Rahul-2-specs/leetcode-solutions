/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* n, int ns, int* rs) {
    *rs=ns;
    int* res =(int*)malloc(sizeof(int)*ns);
    int x=0,y=ns-1;
    for(int i=0;i<ns;i++)
    {
        if(n[i]%2==0)
        {
            res[x]=n[i];
            x++;
        }
        else
        {
            res[y]=n[i];
            y--;
        }
    }
    return res;
    
}