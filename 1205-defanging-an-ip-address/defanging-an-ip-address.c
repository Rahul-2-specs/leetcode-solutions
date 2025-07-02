char * defangIPaddr(char * add){
    static char res[201];
    int i,j=0;
    for(i=0;add[i]!='\0';i++)
    {
        if(add[i]=='.')
        {
            res[j++]='[';
            res[j++]='.';
            res[j++]=']';
        }
        else
        {
            res[j++]=add[i];
        }
    }
    res[j]='\0';
    return res;
}