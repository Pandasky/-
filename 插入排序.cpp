/*��������
2019-8-8
author��pyj*/

int A[maxn], n;	  //nΪԪ�ظ����������±�Ϊ1~n 
void InsertSort(){
	for(int i=2; i<=n; i++){	//����n-1�β���
		int temp = A[i], j = i;
		while(j>1 && temp< A[j-1]){
			A[j] = A[j-1];
			j--
		}
		A[j] = temp;
	} 
} 
