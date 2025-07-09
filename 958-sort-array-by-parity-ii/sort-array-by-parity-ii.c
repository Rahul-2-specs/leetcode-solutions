int* sortArrayByParityII(int* n, int ns, int* rs) {
    int* res=(int *)malloc(sizeof(int)*ns);
    *rs=ns;
    int eIdx=0,oIdx=1;
    for(int i=0;i<ns;i++)
    {
        if(n[i]%2==0)
        {
            res[eIdx]=n[i];
            eIdx+=2;
        }
        else if(n[i]%2!=0)
        {
            res[oIdx]=n[i];
            oIdx+=2;
        }
    }
    return res;
}