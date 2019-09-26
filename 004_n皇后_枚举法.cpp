#include <cstdio>
#include <math.h>
const int maxn = 11;
//PΪ��ǰ���У�hashTable��¼����x�Ƿ��Ѿ���P�� 
int n, P[maxn], hashTable[maxn] = {false}, count = 0;
//��ǰ�������еĵ�indexλ 
void generateP(int index){
	if (index == n + 1){ 	//�ݹ�߽�
		bool flag = true;	//flagΪtrue����ǰ���кϷ� 
		for(int i = 1; i <= n; i++){	//�������������ʺ� 
			for(int j = i + 1;j <= n; j++) {
				if(abs(i-j) == abs(P[i]-P[j])){	//�����һ���Խ����� 
					flag = false;
				}
			}
		}
		if(flag) count++;
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
	printf("%d", count);
	return 0;
}
