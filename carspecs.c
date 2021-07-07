#include <stdio.h>
#include <stdlib.h>

struct specs{
        char name[10];
        double power;
        char model[10];
};
void readSpecs(struct specs*);
void printCar(struct specs);
void printCars(struct specs*, int);

int main(void){
        int num;
        printf("Type the number of cars\n");
        scanf("%d", &num);
        struct specs* cars = (struct specs*)malloc(num*sizeof(*cars)); //cars[num];
        for(int i=0; i<num; i++){
                readSpecs(&cars[i]);
        }
        printCars(cars, num);
        free(cars);
                return 0;
}
void readSpecs(struct specs* car){
        printf("Type name, model, horsepower\n");
        scanf("%s %s %lf", car->name, car->model, &car->power);
}
void printCars(struct specs* array, int num){
        for(int i=0; i<num; i++){
                printCar(array[i]);
        }
}
void printCar(struct specs car){
        printf("Name: %s        Model: %s       Hp: %.2lfn", car.name, car.model, car.power);
}
