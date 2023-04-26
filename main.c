#include <stdio.h>
#include <math.h>

double distance_between_two_points(double x1, double x2, double y1, double y2){
    return sqrt(pow(x2-x1,2) + pow(y2-y1, 2));
}

void isRectangle(int *result, double *centerX, double *centerY)
{
    double x1,x2,x3,x4,y1,y2,y3,y4;
    scanf("%lf", x1);
    scanf("%lf", x2);
    scanf("%lf", x3);
    scanf("%lf", x4);
    scanf("%lf", y1);
    scanf("%lf", y2);
    scanf("%lf", y3);
    scanf("%lf", y4);

    double diagonal_1 = distance_between_two_points(x3,x1,y3,y1);
    double diagonal_2 = distance_between_two_points(x4, x2, y4, y2);

    if((distance_between_two_points(x1,x2,y1,y2) == distance_between_two_points(x3,x4,y3,y4))
        &&
        (distance_between_two_points(x2,x3,y2,y3) == distance_between_two_points(x4,x1,y4,y1))
        &&
        (diagonal_1 == diagonal_2)
        &&
        (distance_between_two_points(x1,x2,y1,y2) < distance_between_two_points(x1,x3,y1,y3))
        &&
        (distance_between_two_points(x2,x3,y2,y3) < distance_between_two_points(x2,x4,y2,y4))
        &&
        (distance_between_two_points(x3,x4,y3,y4) < distance_between_two_points(x3,x1,y3,y1))
        )
        result = 1;





    )
}


int main()
{
    int result;
    double centerX, centerY;

    isRectangle(&result, &centerX, &centerY);

    if (result == 1)

        printf("Given points are rectangle, centers are x: %.3f y: %.3f",centerX,centerY );
    else
        printf("Given points are not rectangle, centers are x: %.3f y: %.3f",centerX,centerY );

    return 0;
}