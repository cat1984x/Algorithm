#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int apple[10];//ƻ��
    int hight;//���
    int num=0;//��ժ������
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
