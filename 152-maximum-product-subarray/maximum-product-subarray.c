int maxProduct(int* n, int ns) {
    int i;
    int maxPro=n[0],currMax=n[0],currMin=n[0];
    for(i=1;i<ns;i++)
    {
        int temp=currMax;
        currMax=fmax(fmax(n[i],currMax*n[i]),currMin*n[i]);
        currMin=fmin(fmin(n[i],temp*n[i]),currMin*n[i]);
        if(currMax>maxPro)maxPro=currMax;
    }
    return maxPro;
}