#include <stdio.h>
#include <string.h>

typedef struct {
	char name[30];
	int age;
	float weigth;
	float heigth;
} Person;


void main(){
	Person data[3];
	for (int numberOfPeople = 0; numberOfPeople < 3; numberOfPeople++){

		int tempAge;
		float tempWeight;
		float tempHeight;

		printf("Name --> ");
		scanf("%s", data[numberOfPeople].name);
		printf("\nAge --> ");
		scanf("%d", &tempAge);
		printf("\nWeigth --> ");
		scanf("%f", &tempWeight);
		printf("\nHeigth --> ");
		scanf("%f", &tempHeight);
		printf("\n----------------------\n");

		data[numberOfPeople].age = tempAge;
		data[numberOfPeople].weigth = tempWeight;
		data[numberOfPeople].heigth = tempHeight;
	}

	for (int numberOfPeople = 0; numberOfPeople < 3; numberOfPeople++){
		printf("%s have %d years old, weighs %.2f Kg and have %.2fm tall\n",data[numberOfPeople].name, data[numberOfPeople].age, data[numberOfPeople].weigth, data[numberOfPeople].heigth);
	}


}
