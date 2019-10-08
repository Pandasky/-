#include <cstdio>
#include <math.h>
const int maxn = 11;
//P为当前排列，hashTable记录整数x是否已经在P中 
int n, P[maxn], hashTable[maxn] = {false}, count = 0;
//当前处理排列的第index列的皇后 
void generateP(int index){
	if (index == n + 1){ 	//递归边界
		count++;	//能到达这里的一定合法 
		return;
		}
	for(int x = 1; x <= n; x++){	//第x行 
		if (hashTable[x] == false){	//第x行还没有皇后
			bool flag = true;	//表示当前皇后不会和之前的皇后冲突 
			for(int pre = 1;  pre < index; pre++){	//遍历之前的皇后
			//第index列皇后号为x， 第pre列皇后号为P[pre] 
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
