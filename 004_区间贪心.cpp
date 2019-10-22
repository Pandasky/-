#include <cstdio>
#include <algorithm> 

using namespace std;
const int maxn = 110;

struct Inteval{
	int x, y;	//开区间左右端点
}I[max];

bool cmp(Inteval a, Inteval b){
	if(a.x != b.x) return a.x > b.x;	//先按左端点从大到小排序
	else return a.y < b.y;	//左端点相同的按右端点从小到大排序 
}
int main(){
	int n;
	while(scanf("%d", &n), n!=0){
		for(int i=0;i<n;i++){
			scanf("%d%d", &I[i].x, &I[i].y);
		} 
		sort(I, I+n, cmp);	//把区间排序
		//ans记录不相交区间个数，lastX记录上一个被选中区间的左端点
		int ans = 0, lastX = I[0].x;
		for(int i = 1; i<n; i++){
			if(I[i].y < lastX){
				lastX = I[i].x;
				ans++;
			}
		} 
		printf("%d", ans);
	}
	return 0;
} 
