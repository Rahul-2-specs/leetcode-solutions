int issubsequence(char* s1,char* s2)
{
    int len1=strlen(s1),len2=strlen(s2);
    int i=0,j=0;
    while(i<len1 && j<len2)
    {
        if(s1[i]==s2[j])i++;
        j++;
    }
    return i==len1;
}

int findLUSlength(char** s, int ss) {
    int maxlen=-1;
    for(int i=0;i<ss;i++)
    {
        int uncommon=1;
        for(int j=0;j<ss;j++)
        {
            if(i==j)continue;
            if(issubsequence(s[i],s[j]))
            {
                uncommon=0;
                break;
            }
        }
        if(uncommon)
        {
            int len=strlen(s[i]);
            if(len>maxlen)maxlen=len;
        }
    }
    return maxlen;
}