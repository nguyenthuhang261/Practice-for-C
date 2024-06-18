#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char x[100];
	int ch;
	fgets(x,sizeof x, stdin);
	int l = strlen(x);
	for(int i = 0; i < l; i++){
		ch = islower(x[i]) ? toupper(x[i]) : tolower(x[i]);
		putchar(ch);
	}
	return 0;
	
}
