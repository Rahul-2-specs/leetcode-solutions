char* largestGoodInteger(char* num) {
    static char ans[4]={};
    for(char d='9';d>='0';d--)
    {
        char target[4]={d, d, d, '\0'};
        if(strstr(num,target))
        {
            strcpy(ans,target);
            return ans;
        }
    }
    return "";
}