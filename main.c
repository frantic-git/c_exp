#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char getRandomChar(){	
	srand(time(NULL));
	
	//штатная схема
	//[A;B]
	//A + rand()%(B-A+1). 	
	char ch = (char)65 + rand()%(90-65+1);	
	printf("%c",ch);
	
	return ch;
}

void fillArray(char *a ,int s){	
	for(int i=0;i<s;i++)
		a[i] = getRandomChar();	
}

void printArray(char *a,int s){	
	for(int i=0;i<s;i++)
		printf("%c", a[i]);	
}

int main(){
     
	printf("Generate \n");
	
	int a1s = 20;
	int a2s = 30;
	int a3s = 26;
	int a4s = 26;
	
	char *a1 = (char*)malloc(sizeof(char) * a1s);
	char *a2 = (char*)malloc(sizeof(char) * a2s);
	char *a3 = (char*)malloc(sizeof(char) * a3s);
	char *a4 = (char*)malloc(sizeof(char) * a4s);
	
	printf("first array \n");
	fillArray(a1,a1s);	
	printArray(a1,a1s);	
	printf("\n");
	
	printf("second array \n");
	fillArray(a2,a2s);	
	printArray(a2,a2s);	
	printf("\n");	
	
	free(a1);
	free(a2);
	free(a3);
	free(a4);
	
	getchar(); getchar();
    return 0;
}


