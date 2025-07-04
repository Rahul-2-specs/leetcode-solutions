int minCostClimbingStairs(int* c, int cs) {
    int prev=0,curr=0,next;
    for(int i=2;i<=cs;i++)
    {
        next=fmin(curr+c[i-1],prev+c[i-2]);
        prev=curr;
        curr=next;
    }
    return curr;
}