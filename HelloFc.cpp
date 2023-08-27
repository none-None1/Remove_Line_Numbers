#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int tape[1000000];
string table[2]={"Hello","World"};
signed main(){
	string code="";
	char c;
	while((c=getchar())!=EOF) code+=c;
	int ip=0,p=0;
	while(ip<code.size()){
		char cmd=code[ip];
		switch(cmd){
			case '*':{
				tape[p]=!tape[p];
				break;
			}
			case '>':{
				p++;
				break;
			}
			case '<':{
				p--;
				break;
			}
			case ',':{
				string s;
				cin>>s;
				if(s=="Hello") tape[p]=0;
				if(s=="World") tape[p]=1;
				break;
			}
			case '.':{
				cout<<table[tape[p]]<<' ';
				break;
			}
			case '[':{
				int loop=1;
				if(!tape[p]){
					while(loop){
						ip++;
						if(code[ip]=='[') loop++;
						if(code[ip]==']') loop--;
					}
				}
				break;
			}
			case ']':{
				int loop=1;
				while(loop){
					ip--;
					if(code[ip]=='[') loop--;
					if(code[ip]==']') loop++;
				}
				ip--;
				break;
			}
		}
		ip++;
	}
	return 0;
}
