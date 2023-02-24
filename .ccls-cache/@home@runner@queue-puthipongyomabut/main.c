#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"
#include "Queue.h"

int main(int argc , char **argv) {
   NodePtr headPtr=NULL;
   NodePtr tailPtr=NULL;
  int order_number;
 /* For struct Queue*/
  Queue  q;
   q.headPtr=NULL;
   q.tailPtr=NULL;
   q.size=0;
 int i,x,customer=1;
 for(i=1;i<argc;i++){
      if(strcmp(argv[i],"x")==0){
          printf("customer no : %d\n",customer);
            x=dequeue_struct (&q);
          customer ++;
        
            printf("you have to pay %d\n",x); // order_number * qty    
        
           int cash;
            do{
              printf("cash : ");
              scanf("%d",&cash);
              
              }while(cash<x);
                printf("Thank you\n");
              if(cash > x) printf("Change is %d\n",cash - x);
        }
                
          else {enqueue_struct(&q,atoi(argv[i]),atoi(argv[i+1]));
       i++;    
      }
    }
   
  
 printf("====================================\n");
 
if (q.size ==1 || q.size==0)
  printf("There is  %d ppl left in the queue\n",q.size);
  else printf("There are  %d ppl left in the queue\n",q.size);
  printf("Clearing queue\n");
  while(q.size>0){
    dequeue(&q);
  }
  return 0;
}
