#include<stdio.h>
#include<string.h>

int main()
{
	char x[100];
	fgets(x, sizeof(x), stdin);
	int cnt = strlen(x);
	x[cnt - 1] = '\0';
	for(int i = cnt - 1; i >= 0; i--){
		printf("%c", x[i]);
	}
}

