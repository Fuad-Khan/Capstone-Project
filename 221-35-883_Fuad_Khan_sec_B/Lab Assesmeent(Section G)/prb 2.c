/* height and width of a rectangle in inches */
#include <stdio.h> 
int main() {
    int width,height,area,perimeter; 
	height = 7;
	width = 5;

    perimeter = 2*(height + width);
	printf("Perimeter of the rectangle = %d inches\n", perimeter);
	
	area = height * width;
	printf("Area of the rectangle = %d square inches\n", area);

return(0);
}