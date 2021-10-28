#include <stdio.h>
#include <stdlib.h>

struct List{
	int value;
	struct List* next;
};

int main() {
	int len = 6;
	time_t t;
	srand((unsigned) time(&t));
	
	struct List* valuesList = malloc(len * sizeof(struct List));

	
	for (int i = 0; i < len; i++){
		valuesList[i].value = rand() % 101;
		valuesList[i].next = i == len - 1 ? NULL : &valuesList[i + 1];
	}
	
	for (int i = 0; i < len; i++){
		printf("index    -->%i\n", i);
		printf("value    -->%i\n", valuesList[i].value);
		printf("this pos -->%p\n", &valuesList[i]);
		printf("next pos -->%p\n", valuesList[i].next);
		printf("----------------\n");
	}
	free(valuesList);
    return 0;
}
