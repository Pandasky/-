#include <cstdio>

int main(){
	int count[10];	//记录数字0-9的个数
	for(int i=0; i<10; i++){
		scanf("%d", &count[i]);
	} 
	for(int i=1; i<10; i++){	//从1-9中选择不为零的最小数字 
		if(count[i] > 0){
			printf("%d", i);
			count[i]--;
			break;	//找到一个就中断 
		}
	}
	for(int i=0; i<10; i++){	//从0-9对应输出 
		for(int j=0; j<count[i]; j++){
			printf("%d", i); 
		}
	}
	return 0;
}
