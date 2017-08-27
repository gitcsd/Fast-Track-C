#include <stdio.h>
#include <stdlib.h>

int main(){
	
	FILE *fp1,*fp2;
	char ch;
	fp1=fopen("sample.txt","r");
	fp2=fopen("newfile.txt","w+");
	if(fp1==NULL){
		printf("Cannot open file\n");
		exit(0);
	}

	while((ch=fgetc(fp1))!=EOF){
		putc(ch,fp2);
	}
	printf("Copied contents of sample.txt to newfile.txt\n");
	fclose(fp2);
	fclose(fp1);
	return 0;
}