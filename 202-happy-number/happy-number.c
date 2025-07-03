int split(int n)
{   int sum=0;
    while(n>0)
    {
        int t=n%10;
        n/=10;
        sum+=t*t;
    }
    return sum;
}

bool isHappy(int a) {
    int x=0;
    while(x<10)
    {   
        if(a==1)return true;
        a=split(a);
        x++;
    }
    return false;
}