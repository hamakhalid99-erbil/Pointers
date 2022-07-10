#include <stdio.h>
#include <stdlib.h>


int main()
{
    int super [6]={2,5.7,8,4,9};
    int  width=15;
    int height=22;
    int y=9;
    int x=5;

    printf("the value of width: %i \n",width);
    printf("the value of height: %i \n",height);
    printf("the value of y: %i \n",y);
    printf("the value of x: %i \n",x);



       int *pwidth;
       int *pheight;
       int *px;
       int *py;
    printf("the Adress of pwidth: %p  value:%p (%i)\n",&pwidth,pwidth,pwidth);
pwidth=&width;
    printf("the Adress of pwidth: %p  value:%p (%i)\n",&pwidth,pwidth,pwidth);
    printf("the Adress of pheight: %p  value:%p (%i)\n",&pheight,pheight,pheight);
pwidth=&height;
    printf("the Adress of pheight: %p  value:%p (%i)\n",&pheight,pheight,pheight);
    printf("the Adress of px: %p  value:%p (%i)\n",&px,px,px);
pwidth=&x;
    printf("the Adress of px: %p  value:%p (%i)\n",&px,px,px);
    printf("the Adress of py: %p  value:%p (%i)\n",&py,py,py);
pwidth=&y;
    printf("the Adress of py: %p  value:%p (%i)\n",&py,py,py);
    int MinMax(int array[],int length, int *min, int *max)
{
    *min=array[0];
    for(int i=0;i<length;i++)
    {if (*min>array[i])
        {*min=array[i];}}
    *max=array[0];
    for(int i=0;i<length;i++)
    {if (*max<array[i])
        {*max=array[i];}
    }
}
    int minimum;
    int maximum;
    MinMax(super,5,&minimum,&maximum);
    printf("the minimum of the array is  : %i \n",minimum );
    printf("the maximum of the array is  : %i \n",maximum );

    return 0;
}
