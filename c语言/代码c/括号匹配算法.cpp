// ����ƥ������ ��   �Ҳ���һֱ�ѹ���ȥ  �����ҵ����� ������
typedef struct  {
	char x[100];
	int top=-1;
} stack;



int match(char a[] , int length)
{
	stack m;
	int i=0;
	
	while(1)
	{
		char k=a[i++];// ����������ַ�char���� ���� 
		switch(k){
			case '(' :
			case '{' :
			case '[' :    m.x[++stack.top]=k; break;
			  
			case ')' : if(stack.top==-1){
			       return 0;}else{
			       	if(stack.x[stack.top]=='('){  stack.top--;  // �˴���stack ����  Ӧ�û���m 
					  break ; }else{ return 0;
					  }
				   }
			case '}' :if(stack.top==-1){
			       return 0;}else{
			       	if(stack.x[stack.top]=='{'){  stack.top--;
					  break ; }else{ return 0;
					  }
				   }
			case ']' :    	if(stack.top==-1){
			       return 0;}else{
			       	if(stack.x[stack.top]=='['){  stack.top--;
					  break ; }else{ return 0;
					  }
				   }
			default:   printf("the input is error"); return 0;
			} 
			if(stack.top==-1&&i==length ){
				return 1; //  ��ʾ�����������ȫ�Ϸ� 
			}else{
				if (stack.top !=-1&& i==length){
					return 0;
				}
			}
			}		
		}	
	}
} 
