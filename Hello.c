#include <stdio.h>
#include <stdlib.h>


#define PI 3.14159


void printNameCourse();
float ComputeCircleArea(float functionRadius);


int main () {
	
		printNameCourse();
		
		/*******************************/
		float area;
		float radius;
		
		radius=10;
		
		area = ComputeCircleArea(radius);
		
		printf("The area is %f\n",area);
		
		return EXIT_SUCCESS;

}

void printNameCourse(){
	puts("Kristian Angelo G. Dela Pena");
	puts("Hello LBYEC 72");
	puts("5th compile!");
}



float ComputeCircleArea(float functionRadius){
	return PI * functionRadius * functionRadius;
}
