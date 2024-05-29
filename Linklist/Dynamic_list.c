#include<stdio.h>
#include<stdlib.h>   //<stdlib.h> allows usage of malloc function..
struct node{
    int info;
    struct node *link;
};
  void main(){
    struct node *temp = malloc(sizeof(struct node));
    struct node *temp1 = malloc(sizeof(struct node));
    struct node *temp2 = malloc(sizeof(struct node));

    temp -> info = 10;
    temp1 -> info = 20;
    temp2 -> info = 30;

    temp -> link = temp1;
    temp1 -> link = temp2;
    temp2 -> link = NULL;

    struct node *start = temp;
  //traversing the list meaning accessing the list elements.
struct node *ptr = start;
while(ptr!=NULL){
    printf("%d",ptr -> info);
    ptr = ptr -> link;
}
    // Freeing the allocated memory
    free(temp);
    free(temp1);
    free(temp2);

}
