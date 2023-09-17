// 用递归法写二分查找 
int  erfen(int a[],int target,int head, int last){
	
	int half=(head+last)/2;
	if(a[half]==target||a[half+1]==target){
		if(a[half]==target){
			return half;
		}else{
			return (half+1);
		}
	}else{
		if(a[half]>target){
			return erfen(a,target,head,half);
		}else{
			return erfen(a,target,half,last);
		}
	}
}
