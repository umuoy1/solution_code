bool number[maxn+5];
void isprime()
{
    int prime[maxn+5];
    int i,j,c=0;
    memset(number,true,sizeof(number));
    for(i=2;i<=maxn;i++)
    {
        if(number[i])
            prime[c++]=i;
        for(j=0;j<c&&prime[j]*i<=maxn;j++)
        {
            number[prime[j]*i]=false;
            if(i%prime[j]==0)
                break;
        }
    }
}
