#include <stdio.h>

int main()
{
    int i,j;
    int time[7][2];//一周中上课时间
    int day_learn_time, max_extra_time , max_day;
    for(i=0;i<7;i++)
        for(j=0;j<2;j++)
            scanf("%d",&time[i][j]);
    max_extra_time=0;
    max_day=0;
    for(i=0;i<7;i++)
    {
        day_learn_time=time[i][0]+time[i][1];
        if(day_learn_time>8)
            if(day_learn_time-8>max_extra_time)
            {
                max_extra_time = day_learn_time -8;
                max_day = i+1;
            }
    }
    printf("%d",max_day);
    return 0;
}
