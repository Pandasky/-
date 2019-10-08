#include <cstdio>
#include <math.h>
const int maxn = 11;
//PΪ��ǰ���У�hashTable��¼����x�Ƿ��Ѿ���P�� 
int n, P[maxn], hashTable[maxn] = {false}, count = 0;
//��ǰ�������еĵ�index�еĻʺ� 
void generateP(int index){
	if (index == n + 1){ 	//�ݹ�߽�
		count++;	//�ܵ��������һ���Ϸ� 
		return;
		}
	for(int x = 1; x <= n; x++){	//��x�� 
		if (hashTable[x] == false){	//��x�л�û�лʺ�
			bool flag = true;	//��ʾ��ǰ�ʺ󲻻��֮ǰ�Ļʺ��ͻ 
			for(int pre = 1;  pre < index; pre++){	//����֮ǰ�Ļʺ�
			//��index�лʺ��Ϊx�� ��pre�лʺ��ΪP[pre] 
				if(abs(index - pre) == abs(x - P[pre])){
					flag = false;
					break;
				}
			}
			if(flag){
				P[index] = x;
				hashTable[x] = true;
				generateP(index + 1);
				hashTable[x] = false;
			} 
		
		}
	}
}

int main(){
	scanf("%d", &n);
	generateP(1);
	printf("%d", count);
	return 0;
}
