void rotate(int* n, int ns, int k) {
    int i,j,temp[ns];
    k=k%ns;
    j=ns-k;
    for(i=0;i<k;i++)temp[i]=n[j+i];
    for(i=0;i<j;i++)temp[k+i]=n[i];
    for(i=0;i<ns;i++)n[i]=temp[i];
}