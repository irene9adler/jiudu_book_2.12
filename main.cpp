//�Ŷ��� �ڶ��� �������� ������2.12
//���Բ��� O(n)
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
