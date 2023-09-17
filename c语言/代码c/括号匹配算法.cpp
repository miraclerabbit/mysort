// 括号匹配问题 ，   我不能一直难过下去  我有我的责任 和梦想
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
		char k=a[i++];// 这里必须用字符char变量 来存 
		switch(k){
			case '(' :
			case '{' :
			case '[' :    m.x[++stack.top]=k; break;
			  
			case ')' : if(stack.top==-1){
			       return 0;}else{
			       	if(stack.x[stack.top]=='('){  stack.top--;  // 此处的stack 错了  应该换成m 
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
				return 1; //  表示输入的括号完全合法 
			}else{
				if (stack.top !=-1&& i==length){
					return 0;
				}
			}
			}		
		}	
	}
} 
