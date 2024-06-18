#include<stdio.h>
#include<string.h>
#include<ctype.h>

int check(char a[]){
	int l = 0, r = strlen(a) - 1;
	while(l < r){
		if(a[l] != a[r]){
			return 0;
		}
		++l;
		--r;
	}
	return 1;
}




int main()
{
	int tc;
	scanf("%d", &tc);
	getchar();
	while(tc--){
		char x[50];
		fgets(x, sizeof(x), stdin);
		x[strlen(x) - 1] = '\0';
		if(check(x)){
			printf("YES");
		}else{
			printf("NO");
		}
		printf("\n");
	}
	return 0;
}

