#include <stdlib.h>
int rob1(int *n,int start,int end)
{
    int prev=0,curr=0,next=0;
    for(int i=start;i<=end;i++)
    {
        next=fmax(curr,prev+n[i]);
        prev=curr;
        curr=next;
    }
    return curr;
}
int rob(int* n, int ns) {
    if(ns==0)return 0;
    if(ns==1)return n[0];
    if(ns==2)fmax(n[0],n[1]);
    int ans1=rob1(n,0,ns-2);
    int ans2=rob1(n,1,ns-1);
    return fmax(ans1,ans2);
}
