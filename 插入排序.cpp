/*插入排序
2019-8-8
author：pyj*/

int A[maxn], n;	  //n为元素个数，数组下标为1~n 
void InsertSort(){
	for(int i=2; i<=n; i++){	//进行n-1次操作
		int temp = A[i], j = i;
		while(j>1 && temp< A[j-1]){
			A[j] = A[j-1];
			j--
		}
		A[j] = temp;
	} 
} 
