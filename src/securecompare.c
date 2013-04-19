#include<stdio.h>
#include<stdlib.h>

#define DEFAULT_NUMBER_ARG 3
#define KEY_LEN 2

int securecompare(char *,char *,int len);

int main(int argc,char *argv[]) {
    printf("secure compare\n");
    printf("arguments number: %d\n",argc);
    if(argc==DEFAULT_NUMBER_ARG) {
	printf("res= %d\n",securecompare(argv[1],argv[2],KEY_LEN));
    }
}

int securecompare(char *inputValue,char * referenceValue, int len) {
    int index=0;
    int res=0;
    while(index<len& res==0) {
	res^=*(inputValue+index)^*(referenceValue+index);
	index++;
    }
    while(index<len) {
	res|res;
	index++;
    }
    return res;
}
