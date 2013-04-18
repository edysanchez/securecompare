#include<stdio.h>
int securecompare(char *,char *);
int main(int argc,char *argv[]) {
		printf("secure compare\n");
		printf("%d",1==1);
		securecompare("1123","21");
}
int securecompare(char *inputValue,char * referenceValue) {
		int index=0;
		int res=0;
		while(*(inputValue+index)!='\0') {
				printf("INDEX\n");
				index++;
				printf("res %d",*(inputValue+index)^*(referenceValue+index));
				return *(inputValue+index)^*(referenceValue+index);
		}
		return 1;
}
