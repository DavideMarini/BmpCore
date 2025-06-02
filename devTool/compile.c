#include<stdlib.h>

int main(){
	
	system("gcc -std=c99 -O0 -g -Wall -Wextra -Wpedantic -Wconversion -Wshadow test.c -o test bmpcore/bmpcore.c");
	
	return 0;
}