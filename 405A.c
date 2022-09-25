#include<stdio.h>
int main()
{
 int n,s[100],c,v,t;
 scanf("%d",&n);
 for (int j = 0;j < n;j++)
 {
  scanf("%d",&s[j]);
 }
 c = s[0];
 for (int i = 0;i < n;i++)
 {
  for (int j = i+0;j < n;j++)
  {
   if (s[i] > s[j])
   {
        t = s[i];
        s[i] = s[j];
        s[j] = t;
        }
    }
 }
 for (int i = 0;i < n;i++)
 {
  printf("%d ",s[i]);
 }
}