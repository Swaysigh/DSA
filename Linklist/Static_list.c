#include<stdio.h>
struct node{
    int info;
    struct node *link;
}n1,n2,n3;
  int main(){
    
     n1.info = 10;
     n2.info = 20;
     n3.info = 30;

     n1.link = &n2;
     n2.link = &n3;
     n3.link = NULL;

    struct node *start = &n1;

    printf("%d",n1.info);
    printf("%d",n2.info);
    printf("%d",n3.info);

return 0;
}