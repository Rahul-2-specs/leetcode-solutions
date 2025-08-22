int countGoodSubstrings(char* s) {
    int count=0;
    int n=strlen(s);
    for(int i=0;i<=n-3;i++)
    {
        char a=s[i],b=s[i+1],c=s[i+2];
        if(a!=b && b!=c && c!=a)count++;
    }
    return count;
}