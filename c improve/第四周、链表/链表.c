// 第一次写链表，有很多困惑但不怕，走下去，向天举起反叛之剑！
#include <stdio.h>
#include <stdlib.h>
typedef struct a{
	int value;
	struct a *next;
} node;
 node * linkedlist_creat(node *head);
//   原地工作其实会很棒，很多时候巧妙安排顺序，两个原地变量相互赋值就能踩着对方上去 
//一个很经典的写法  for(p=head;p;p=p->next) 
int main()
{
	int number;
	node *head=NULL;
	node *p=NULL;
	node *q=NULL;
	node *last=NULL;
	node *medium=NULL;
	do{ 
		
		
		scanf("%d",&number);
		if(number !=-1){  
		head=linkedlist_creat(head);
		}
	
	}while( number !=-1 );
	for(p=head;p;q=p,p=p->next){
		if(p->value==number){
			if(q){
			
			q->next=p->next;
		}else{
			head=p->next;
		}
		free(p);
		break;//找到了就走！  
		}
		
	}
	
	
	
	
	return 0;
 } 
 node * linkedlist_creat(node *head){
 	int number;
	node *p=NULL;
	node *last=NULL;
	node *medium=NULL; 
 		p=(node *)malloc(sizeof(node));
			p->value=number;
			p->next=NULL;    //  bring forward  if    p->next=head;
			// else head=p;  and   p->=NULL; 
			if(head != NULL){
			
				for(last=head;last;last=last->next) //本质实际上是尾插法 ，其实呀 还有头插法呢 
				medium=last;
				medium->next=p;
			}else{
				head=p;
				}
    return head;
 }
