#define price_1 100
#define price_2 20
#define price_3 50

typedef struct {
	 NodePtr headPtr,tailPtr;
	 int size;
}Queue;



void enqueue_struct(Queue* q, int x,int y){
  Node *new_node=(Node*) malloc(sizeof(Node));
if(new_node){ 
    new_node->order_number=x;
    new_node->qty=y;
  new_node->nextPtr = NULL;
    if(q->headPtr==NULL) q->headPtr=new_node;
      else q->tailPtr->nextPtr=new_node;
     q->tailPtr=new_node;
     q->size++;
  /*Finish enqueue */
 }
}


int dequeue_struct(Queue *q){
  int price=0 ;
   NodePtr t = q->headPtr;
   printf("My order is %d\n",t->order_number);
    if(q->size >0){
      switch(t->order_number){
        case 1: printf("Ramen\n"); 
                price = price_1 * t->qty; 
                break;
        case 2: printf("Somtum\n"); 
                price = price_2 * t->qty;
                break; 
        case 3: printf("Fried Chicken\n");
                price = price_3 * t->qty;
                break;
        default : printf("No food\n"); break;
        
      }
     //int value= t->data;

        q->headPtr = t->nextPtr; //t = headPtr
     if(q->headPtr == NULL)
        q->tailPtr = NULL;
     q->size--;
     free(t);
     
     
       /*Finish dequeue */
   return price;
   }
   printf("Empty queue");
   return 0;
}
int dequeue(Queue *q){
  NodePtr t=q->headPtr;
     int value= t->order_number;

        q->headPtr = t->nextPtr; //t = headPtr
     if(q->headPtr == NULL) q->tailPtr = NULL;
     q->size--;
     free(t);
    /*Finish dequeue */
   return value;
   printf("Empty queue");
   return 0;
}
