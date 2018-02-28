//九度书 第二章 经典入门 查找例2.12
//线性查找 O(n)
#include <stdio.h>

int main()
{
    int n;
    int buf[200];
    while(scanf("%d",&n)!=EOF)
    {
        int i;
        for(i = 0;i < n;i++)
            scanf("%d",&buf[i]);
        int tar;
        scanf("%d",&tar);
        for(i = 0;i < n;i++)
        {
            if(buf[i] == tar)
            {
                printf("%d\n",i);
                break;
            }
        }
        if(i == n) printf("NO ANSWER\n");
    }
    return 0;
}
