#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int quanpailie(int tt,int n,char *from);
int swap(char *a,char *b);
int i;
int m=0;
char total[120][6];

int compare_int(const void *a, const void *b) 
{
    return (*(char *)a - *(char *)b);
}

int main()
{
    char from[6]="";
    scanf("%s",from);
    int flag=0;
    int len=strlen(from);
    int i,j=0,k=0;
    int index;




qsort(from, 5, 1, compare_int);






   
    // for(i=0;i<k;i++)
    // {
    //     index=i;
    //     for(j=i+1;j<k;j++)
    //     {
    //         if(from[i]>from[j])
    //         {
    //             index=j;
    //         }
    //     }
    //     if(index!=i)
    //         {
    //             swap(&from[i],&from[index]);
    //         }
    // }
    // //sort
    quanpailie(strlen(from),0,from);
    m=0;
    for(i=0;i<120;i++)
    {
        if(strcmp(total[i],total[i+1]))
        {
            printf("%s\n",total[i]);
        }
    }
}
int swap(char *a,char *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}



int quanpailie(int tt,int n,char*from)
{   
    char temp[tt];
    if(tt!=n)
    {
        
        for(int i=n;i<tt;i++)
        {
            
            strcpy(temp,from);
            //将from给temp 
            if(n!=i)
            {
                for(int j=i;j>n;j--)
                {
                    swap(&temp[j],&temp[j-1]);
                }
                //将tt-n后的第i元素冒泡到n位置
            }quanpailie(tt,n+1,temp);
        }
    }if(n==tt)
    {
        strcpy(total[m++],from);
        // printf("%c",from[j]);
        printf("\n");
    }
}