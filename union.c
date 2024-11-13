#include <stdio.h>
#include <math.h>

// Define a union that can store either two integers or the distance as a float
union Point {
    struct {
        int x1, y1, x2, y2;
    };
    float distance;
};

int main() {
    // Declare the union
    union Point points;

    // Assign values to the coordinates
    points.x1 = 10;
    points.y1 = 20;
    points.x2 = 20;
    points.y2 = 10;

    // Calculate the distance
    float dx = points.x2 - points.x1;
    float dy = points.y2 - points.y1;
    points.distance = sqrt(dx * dx + dy * dy);

    // Print the result
    printf("The distance between the points is: %.2f\n", points.distance);

    return 0;
}
