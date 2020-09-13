#include<stdio.h>
main()
{
    double avg, n, m=0;
    int i, j = 0;
    for(i = 0; i < 6; i++){
    scanf("%lf", &n);
        if(n > 0){
      m += n;
      j++;
        }
    }
    avg = m / j;
    printf("%d valores positivos\n%.1lf\n",j , avg);
    return 0;
}
