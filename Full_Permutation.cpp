#include <cstdio>
const int maxn = 11;
//PΪ��ǰ���У�hashTable��¼����x�Ƿ��Ѿ���P�� 
int n, P[maxn], hashTable[maxn] = {false};
//��ǰ�������еĵ�indexλ 
void generateP(int index){
	if (index == n + 1){ 	//�ݹ�߽� 
		for(int i = 1; i <= n; i++){
			printf("%d", P[i]);		//�����ǰ���� 
		}
		printf("\n");
		return;
	}
	for(int x = 1; x <= n; x++){	//ö��1~n����ͼ����P[index] 
		if (hashTable[x] == false){
			P[index] = x;
			hashTable[x] = true;
			generateP(index + 1);
			hashTable[x] = false;
		}
	}
}

int main(){
	scanf("%d", &n);
	generateP(1);
	return 0;
}
