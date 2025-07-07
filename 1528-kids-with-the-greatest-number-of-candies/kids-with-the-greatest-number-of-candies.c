/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* c, int cs, int ec, int* rs) {
    int max=c[0];
    *rs=cs;
    bool* res=(bool *)malloc(sizeof(bool)*cs);
    for(int i=0;i<cs;i++)
    {
        if(c[i]>max)max=c[i];
    }
    for(int i=0;i<cs;i++)
    {
        if(c[i]+ec>=max)res[i]=1;
        else res[i]=0;
    }
    return res;
}