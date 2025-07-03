int removeElement(int* n, int ns, int val) {
    int j=0;
    for(int i=0;i<ns;i++)
    {
        if(n[i]!=val)
        {
            n[j]=n[i];
            j++;
        }
    }
    return j;
}