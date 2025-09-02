char* getHint(char* secret, char* guess) {
    int bulls=0,cow=0;
    int countS[10]={0},countG[10]={0};
    int n=strlen(secret);
    for(int i=0;i<n;i++)
    {
        if(secret[i]==guess[i])bulls++;
        else{
            countS[secret[i]-'0']++;
            countG[guess[i]-'0']++;
        }
    }
    for(int d=0;d<10;d++)
    {
        cow+=(countS[d]<countG[d])?countS[d]:countG[d];
    }
    static char res[20];
    sprintf(res,"%dA%dB",bulls,cow);
    return res;
}