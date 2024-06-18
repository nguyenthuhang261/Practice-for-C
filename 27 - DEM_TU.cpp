#include<stdio.h>
#include<string.h>

int main(){
	int tc;
	scanf("%d\n", &tc);
	for(int i = 1; i <= tc; i++){
		char a[200];
		gets(a);
		int dem = 1;
		for(int j = 0; j < strlen(a) - 1; j++){
			if(a[j] == ' ' && a[j + 1] != ' '){
				dem++;
			}
		}
		printf("%d\n", dem);
	}
}
