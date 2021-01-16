#include <cstdio>

int main(){
	int sum, n;
	while(scanf("%d", &n) != EOF){
		if(n%2==0)
			sum = (n+1)*(n/2); // 这里存在越界问题，必须严格按照这种格式
		else
			sum = n*((n-1)/2) + n;
		printf("%d\n\n",sum);
	}
	return 0;
}
// 注意：虽然题目规定了最后答案为int形，但是用以上这种方式中间可能会越界
// 例如：sum = (n+1)*n/2; 先算(n+1)*n 这里的结果就可能越界
