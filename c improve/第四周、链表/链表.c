// ��һ��д�����кܶ����󵫲��£�����ȥ�����������֮����
#include <stdio.h>
#include <stdlib.h>
typedef struct a{
	int value;
	struct a *next;
} node;
 node * linkedlist_creat(node *head);
//   ԭ�ع�����ʵ��ܰ����ܶ�ʱ�������˳������ԭ�ر����໥��ֵ���ܲ��ŶԷ���ȥ 
//һ���ܾ����д��  for(p=head;p;p=p->next) 
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
		break;//�ҵ��˾��ߣ�  
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
			
				for(last=head;last;last=last->next) //����ʵ������β�巨 ����ʵѽ ����ͷ�巨�� 
				medium=last;
				medium->next=p;
			}else{
				head=p;
				}
    return head;
 }
