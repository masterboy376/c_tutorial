#include <stdio.h>
#include <math.h>

#define PI 3.14

float euclideanDistance (int x1, int y1, int x2, int y2){
    return sqrt(((x1-x2) * (x1-x2)) + ((y1-y2) * (y1-y2)));
}

float areaOfCircle(float (*euclideanDistancePtr)(int, int, int, int)){
    float radius;
    int x1, y1, x2, y2;
    printf("Enter the x-coordiante of first point\n");
    scanf("%d\n", &x1);
    printf("Enter the y-coordiante of first point\n");
    scanf("%d\n", &y1);
    printf("Enter the x-coordiante of second point\n");
    scanf("%d\n", &x2);
    printf("Enter the y-coordiante of second point\n");
    scanf("%d\n", &y2);
    radius = euclideanDistancePtr(x1,y1,x2,y2);
    float area = PI * (radius * radius);
    return area;
}

int main()
{
    float (*euclideanDistancePtr)(int, int, int, int) = NULL;
    euclideanDistancePtr = euclideanDistance;
    if(euclideanDistancePtr!=NULL){
        float result = areaOfCircle(euclideanDistancePtr) ;
        printf("the area is %f\n sq. unit",result);
    }


    
    
    return 0;
}