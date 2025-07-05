#include <string.h>
bool isSubsequence(char* s, char* t) {
    int i,j,count=0;
    int len1=strlen(s);
    int len2=strlen(t);
    while(i<len1&&j<len2)
    {
        if(s[i]==t[j])
        {
            count++;
            i++;
        }
        j++;
    }
    return (count==len1);
}