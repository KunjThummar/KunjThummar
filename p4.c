#include<stdio.h>
void main()
{
  int P=1441981744,F,M,lrm=80.95,lrf=62.84,IM,IF,TIP;
  /* P = total population
     F = female
     M = Male
   lrm = Literacy rate of male population
   lrf = Literacy rate of female population*/
  F = P *(48.4/100);
  M = P - F;
  //IM = illiterate man
  //IF = illiterare female
  IM = M - (M * (lrm/100));
  IF = F - (F * (lrf/100));
  TIP = IM + IF;
  //TIP = total illiterate people
  printf("Total Illiterate People : %d",TIP);
  printf("\n\nprogrammer : Kunj Thummar\nID : 24ce128");
}
