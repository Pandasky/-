/*ѡ������
2019-8-8
author:pyj*/

void SelectSort(){
	for(int i = 1; i <= n; i++){	//����n�β��� 
		int k = i
		for(int j = i; j<= n; j++){    //ѡ��[i,n]����С��Ԫ�أ��±�Ϊk 
			if(A[j] < A[k])
				k = j;
		}
		int tmp = A[i];
		A[i] = A[k];
		A[k] = tmp;
	}
} 
