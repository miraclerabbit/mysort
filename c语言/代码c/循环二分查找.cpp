//二分查找 函数
int erfen(int a[],int target,int size)
{ 
    int left=0;
    int right=size-1;
    while(left<=right){
      int middle=(right+left)/2;
      if(a[middle]==target){
      	return middle;
	  }else if(a[middle]>target){
	  	right=middle-1;
	  }else{
	  	left=middle+1;
	  }
      
    	return -1;
    	
    	
	}
	
	
	
	
	
	
	
	
	
	
	
 } 
