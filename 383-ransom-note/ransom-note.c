#include <stdbool.h>
bool canConstruct(char* ran, char* mag) {
    int count[26]={0};
    for(int i=0;mag[i];i++)
    {
        count[mag[i]-'a']++;
    }
    for(int i=0;ran[i];i++)
    {
        if(--count[ran[i]-'a']<0)
        {
            return false;
        }
    }
    return true;
}