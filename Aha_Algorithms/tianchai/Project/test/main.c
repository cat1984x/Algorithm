#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int apple[10];//苹果
    int hight;//身高
    int num=0;//能摘到数量
    for(i=0;i<10;i++)
        scanf("%d",&apple[i]);
    scanf("%d",&hight);
    for(i=0;i<10;i++)
    {
        if(apple[i]<=(hight+30))
            num++;
    }
    printf("%d",num);
    return 0;
}
