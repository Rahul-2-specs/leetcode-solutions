char* smallestSubsequence(char* s) {
    int len=strlen(s);
    int freq[26]={0};
    int visited[26]={0};
    for(int i=0;s[i];i++)
        freq[s[i]-'a']++;
    char * stack =(char *)malloc(len+1);
    int top=-1;
    for(int i=0;i<len;i++)
    {
        char c=s[i];
        int idx=s[i]-'a';
        freq[idx]--;
        if(visited[idx])
            continue;
        while(top>=0 && stack[top]>c && freq[stack[top]-'a']>0)
        {
            visited[stack[top]-'a']=0;
            top--;
        }
        stack[++top]=c;
        visited[idx]=1;
    }
    stack[top+1]='\0';
    return stack;
}