#include<cstdio>
#include<cstdlib>
char line[1000000];
int Gets(char *line){
	int i=0,flag=0;
	while(1){
		char c=getchar();
		if(c==EOF||c=='\n') line[i]=0;
		if(c==EOF) return EOF;
		if(c=='\n') return 0;
		if(c!=' ') flag=1;
		if(!flag) continue;
		line[i]=c;
		i++;
	}
}
void error(){
	puts("Invalid syntax");
	exit(1);
}
#define gets Gets
int main(){
	int l=0;
	while(1){
		l++;
		int x=-1;
		if(scanf("%d",&x)==EOF) break;
		if(x!=l) error();
		gets(line);
		puts(line);
	}
	return 0;
}

