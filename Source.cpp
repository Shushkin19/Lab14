#include"Lab14.h"
#include<iostream>
#include<ostream>
char* EnterWord() {
	char* name = NULL;
	name = (char*)malloc(sizeof(char)*4 + 8);
	char c;
	int size = 0;
	int capacity = 4;
	while ( (c = getchar()) != '\n') {
		if (size < capacity) {
			name[size] = c;
			size++;
		}
		else {
			name = (char*)realloc(name, sizeof(char) * capacity+4);
			capacity *= 2;
		}
	}
	name[size] = 0;
	return name;
}

















