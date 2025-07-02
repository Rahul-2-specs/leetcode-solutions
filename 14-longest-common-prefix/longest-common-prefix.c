char* longestCommonPrefix(char** s, int ss) {
    int i,j;
    static char pre[201];
    for(i=0;s[0][i];i++)
    {
        for(j=1;j<ss;j++)
        {
            if(s[j][i]!=s[0][i])goto end;
        }
        pre[i]=s[0][i];
    }
    end:
    pre[i]='\0';
    return pre;
}