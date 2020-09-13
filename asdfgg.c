#include<stdio.h>
int main()
{
    int r1,r2,r3,w1,w2,w3,sum,tum;
    scanf("%d%d%d",&r1,&r2,&r3);
    if((r1>=0&&r1<=299)&&(r2>=0&&r2<=299)&&(r3>=0&&r3<=299))
    {
        scanf("%d%d%d",&w1,&w2,&w3);
        if(w1==0||w1==1&&w2==0||w2==1&&w3==0||w3==1)
        {
            sum=r1+r2+r3;
            tum=w1+w2+w3;
        }
        printf("%d\n",sum/tum);
    }
    return 0;

}
