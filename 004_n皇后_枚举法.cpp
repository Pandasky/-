#include <cstdio>
#include <math.h>
const int maxn = 11;
//P为当前排列，hashTable记录整数x是否已经在P中 
int n, P[maxn], hashTable[maxn] = {false}, count = 0;
//当前处理排列的第index位 
void generateP(int index){
	if (index == n + 1){ 	//递归边界
		bool flag = true;	//flag为true代表当前排列合法 
		for(int i = 1; i <= n; i++){	//遍历任意两个皇后 
			for(int j = i + 1;j <= n; j++) {
				if(abs(i-j) == abs(P[i]-P[j])){	//如果在一条对角线上 
					flag = false;
				}
			}
		}
		if(flag) count++;
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
	printf("%d", count);
	return 0;
}
