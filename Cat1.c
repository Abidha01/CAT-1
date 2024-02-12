
//Question One
 #include <stdio.h>
#include <math.h>

int main() {
    double radius, height;

    // Prompt the user to enter radius and height
    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);

    // Calculate volume and surface area
    double volume = M_PI * pow(radius, 2) * height;
    double surface_area = 2 * M_PI * pow(radius, 2) + 2 * M_PI * radius * height;

    // Display the results
    printf("Volume of the cylinder: %.2lf\n", volume);
    printf("Surface Area of the cylinder: %.2lf\n", surface_area);

    return 0;
}


// Question Two
 #include <stdio.h>

int main() {
    double salary;
    int years_of_service;

    // Prompt the user to enter salary and years of service
    printf("Enter your salary: ");
    scanf("%lf", &salary);

    printf("Enter your years of service: ");
    scanf("%d", &years_of_service);

    // Calculate bonus if years of service is more than 5
    double bonus = (years_of_service > 5) ? 0.05 * salary : 0;

    // Display the bonus amount
    printf("Net bonus amount: %.2lf\n", bonus);

    return 0;
}

// Question Three
 #include <stdio.h>

int main() {
    double weight, height;

    // Prompt the user to enter weight and height
    printf("Enter your weight in kilograms: ");
    scanf("%lf", &weight);

    printf("Enter your height in meters: ");
    scanf("%lf", &height);

    // Calculate BMI
    double bmi = weight / (height * height);

    // Display the calculated BMI
    printf("Your Body Mass Index (BMI): %.2lf\n", bmi);

    return 0;
}