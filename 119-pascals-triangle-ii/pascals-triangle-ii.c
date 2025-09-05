int* getRow(int n, int* rs) {
    *rs=n+1;
    int* row=(int*)malloc((*rs)*sizeof(int));
    row[0]=1;
    for(int i=1;i<=n;i++)
    {
        row[i]=1;
        for(int j=i-1;j>0;j--)
        {
            row[j]=row[j]+row[j-1];
        }
    }
    return row;
}