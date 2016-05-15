#include <stdio.h>
int main()
{
    //运算三位数中的水仙花数
    int num , sd , td , hd ; //作如下定义：sd是个位数，td是十位数，hd是百位数
    for(num = 100 ; num < 1000 ; num++)
    {
      hd = num / 100 ;
      td = (num % 100) / 10 ;
      sd = num / 10 ;
      if(num == hd*hd*hd + td*td*td + sd*sd*sd)
      {
        printf("水仙花数字：%d\n",num);
      }
    }
    return 0;
}
