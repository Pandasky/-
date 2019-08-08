/*选择排序
2019-8-8
author:pyj*/

void SelectSort(){
	for(int i = 1; i <= n; i++){	//进行n次操作 
		int k = i
		for(int j = i; j<= n; j++){    //选出[i,n]中最小的元素，下表为k 
			if(A[j] < A[k])
				k = j;
		}
		int tmp = A[i];
		A[i] = A[k];
		A[k] = tmp;
	}
} 
