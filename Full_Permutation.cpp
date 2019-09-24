#include <cstdio>
const int maxn = 11;
//P为当前排列，hashTable记录整数x是否已经在P中 
int n, P[maxn], hashTable[maxn] = {false};
//当前处理排列的第index位 
void generateP(int index){
	if (index == n + 1){ 	//递归边界 
		for(int i = 1; i <= n; i++){
			printf("%d", P[i]);		//输出当前排列 
		}
		printf("\n");
		return;
	}
	for(int x = 1; x <= n; x++){	//枚举1~n，试图填入P[index] 
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
