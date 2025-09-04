bool isIsomorphic(char* s, char* t) {
    char mapST[256]={0};
    char mapTS[256]={0};
    int n=strlen(s);
    for(int i=0;i<n;i++)
    {
        char c1=s[i],c2=t[i];
        if((mapST[c1]&&mapST[c1]!=c2) ||  (mapTS[c2]&&mapTS[c2]!=c1))
        {
            return 0 ;
        }
        mapST[c1]=c2;
        mapTS[c2]=c1;
    }
    return 1;
}