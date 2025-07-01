#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

void delay(int number_of_seconds){
        int milli_seconds = 1000 * number_of_seconds;
        clock_t start_time = clock();
        while (clock() < start_time + milli_seconds);
}

int selection, shapeSelection, continuationSelector;
float l, b, h, r, sh, area, volume;





void main(){
        system("cls");

        printf("THIS PROGRAM LET'S YOU FIND THE TOTAL SURFACE AREA OR CURVED SURFACE AREA OF ANY 3D SHAPE\n\n");

        printf("*SHAPE SELECTION INDEX*\n");
        printf("Enter 1 to go for CUBE\n");
        printf("Enter 2 to go for CUBOID\n");
        printf("Enter 3 to go for CYLINDER\n");
        printf("Enter 4 to go for CONE\n");
        printf("Enter 5 to go for SPHERE\n\n");

        printf("Enter Shape Selection Number according to the above index: ");
        scanf("%d", &shapeSelection);
        printf("\n");

        if(shapeSelection == 1){
                cube();
        } else if(shapeSelection == 2){
                cuboid();
        } else if(shapeSelection == 3){
                cylinder();
        } else if(shapeSelection == 4){
                cone();
        } else if(shapeSelection == 5){
                sphere();
        } else if(shapeSelection < 1){
                printf("Since Shape selection number is lesser than 1, it's being set to 1.\n");
                cube();
        } else if(shapeSelection > 5){
                printf("Since Shape selection number is greater than 5, it's being set to 5.\n");
                sphere();
        }

        printf("\nDo you want to continue? (Enter 1 for YES, 2 for NO): ");
        scanf("%d", &continuationSelector);

        if(continuationSelector == 1){
                main();
        } else if(continuationSelector < 1){
                printf("Since the value you entered is less than 1, the program is being terminated\n");
                printf("THANK YOU!");
                printf("\nTerinating...");
                delay(5);
        } else if(continuationSelector >= 2){
                printf("THANK YOU!");
                printf("\nTerminating...");
                delay(5);
        }    
}




// CUBE FUNCTIONS
void cube(){
        printf("Enter 1 to calculate TOTAL SURFACE AREA\nEnter 2 to calculate CURVED SURFACE AREA\nEnter 3 to calculate VOLUME\n\n");

        printf("Enter area selection number: ");
        scanf("%d", &selection);

        if(selection == 1){
                totalSurfaceAreaOfCube();
        } else if(selection == 2){
                curvedSurfaceAreaOfCube();
        } else if(selection == 3){
                volumeOfCube();
        } else if(selection < 1){
                printf("Since Area selection number is lesser than 1, it's being set to 1.\n");
                totalSurfaceAreaOfCube();
        } else if(selection > 3){
                printf("Since Area selection number is greater than 3, it's being set to 3.\n");
                volumeOfCube();
        }
}

void totalSurfaceAreaOfCube(){
        printf("\nTotal Surface Area of Cube will be calculated\n\n");

        printf("Enter side length: ");
        scanf("%f", &l);

        area = 6*l*l;

        if(area < 0){
                area = (-1) * area;
        }

        printf("\nThe Total Surface Area of the Cube is %f sq. units", area);
}

void curvedSurfaceAreaOfCube(){
        printf("\nCurved Surface Area of Cube will be calculated\n\n");

        printf("Enter side length: ");
        scanf("%f", &l);

        if(area < 0){
                area = (-1) * area;
        }

        area = 4*l*l;
        printf("\nThe Curved Surface Area of the Cube is %f sq. units", area);
}

void volumeOfCube(){
        printf("\nVolume of Cube will be calculated\n\n");

        printf("Enter side length: ");
        scanf("%f", &l);

        if(volume < 0){
                volume = (-1) * volume;
        }

        volume = l*l*l;
        printf("\nThe Volume of the Cube is %f cb. units", volume);
}




// CUBOID FUNCTIONS
void cuboid(){
        printf("Enter 1 to calculate TOTAL SURFACE AREA\nEnter 2 to calculate CURVED SURFACE AREA\nEnter 3 to calculate VOLUME\n\n");

        printf("Enter area selection number: ");
        scanf("%d", &selection);

        if(selection == 1){
                totalSurfaceAreaOfCuboid();
        } else if(selection == 2){
                curvedSurfaceAreaOfCuboid();
        } else if(selection == 3){
                volumeOfCuboid();
        } else if(selection < 1){
                printf("Since Area selection number is lesser than 1, it's being set to 1.\n");
                totalSurfaceAreaOfCuboid();
        } else if(selection > 3){
                printf("Since Area selection number is greater than 3, it's being set to 3.\n");
                volumeOfCuboid();
        }
}

void totalSurfaceAreaOfCuboid(){
        printf("\nTotal Surface Area of Cuboid will be calculated\n\n");

        printf("Enter length: ");
        scanf("%f", &l);

        printf("Enter breadth: ");
        scanf("%f", &b);

        printf("Enter height: ");
        scanf("%f", &h);

        area = 2*((l*b) + (b*h) + (l*h));
        printf("\nThe Total Surface Area of the Cuboid is %f sq. units", area);

        if(area < 0){
                area = (-1) * area;
        }

        printf("\n\n\n\n\n\n");
}

void curvedSurfaceAreaOfCuboid(){
        printf("\nCurved Surface Area of Cube/Cuboid will be calculated\n\n");

        printf("Enter length: ");
        scanf("%f", &l);

        printf("Enter breadth: ");
        scanf("%f", &b);

        printf("Enter height: ");
        scanf("%f", &h);

        area = 2*h*(l + b);
        printf("\nThe Curved Surface Area of the Cuboid is %f sq. units", area);

        if(area < 0){
                area = (-1) * area;
        }

        printf("\n\n\n\n\n\n");
}

void volumeOfCuboid(){
        printf("\nVolume will be calculated\n\n");

        printf("Enter length: ");
        scanf("%f", &l);

        printf("Enter breadth: ");
        scanf("%f", &b);

        printf("Enter height: ");
        scanf("%f", &h);

        if(volume < 0){
                volume = (-1) * volume;
        }

        volume = l*b*h;
        printf("\nThe Volume of the Cuboid is %f cb. units", volume);
}




// CYLINDER FUNCTIONS
void cylinder(){
        printf("Enter 1 to calculate TOTAL SURFACE AREA\nEnter 2 to calculate CURVED SURFACE AREA\nEnter 3 to calculate VOLUME\n\n");

        printf("Enter area selection number: ");
        scanf("%d", &selection);

        if(selection == 1){
                totalSurfaceAreaOfCylinder();
        } else if(selection == 2){
                curvedSurfaceAreaOfCylinder();
        } else if(selection == 3){
                volumeOfCylinder();
        } else if(selection < 1){
                printf("Since Area selection number is lesser than 1, it's being set to 1.\n\n");
                totalSurfaceAreaOfCylinder();
        } else if(selection > 3){
                printf("Since Area selection number is greater than 3, it's being set to 3.\n\n");
                volumeOfCylinder();
        }
}

void totalSurfaceAreaOfCylinder(){
        printf("\nTotal Surface  Area of Cylinder will be calculated\n\n");

        printf("Enter radius: ");
        scanf("%f", &r);

        printf("Enter height: ");
        scanf("%f", &h);

        area = (2*22*r*(r + h))/7;
        printf("\nThe Total Surface Area of the Cylinder is %f sq. units", area);

        if(area < 0){
                area = (-1) * area;
        }

        printf("\n\n\n\n\n\n");
}

void curvedSurfaceAreaOfCylinder(){
        printf("\nCurved Surface Area of Cylinder will be calculated\n\n");

        printf("Enter radius: ");
        scanf("%f", &r);

        printf("Enter height: ");
        scanf("%f", &h);

        area = (2*22*r*h)/7;
        printf("\nThe Curved Surface Area of the Cylinder is %f sq. units", area);

        if(area < 0){
                area = (-1) * area;
        }

        printf("\n\n\n\n\n\n");
}

void volumeOfCylinder(){
        printf("\nVolume of Cylinder will be calculated\n\n");

        printf("Enter radius: ");
        scanf("%f", &r);

        printf("Enter height: ");
        scanf("%f", &h);

        volume = (22 * r * r * h)/7;
        printf("The Volume of the Cylinder is %f cb. units", volume);

        if(volume < 0){
                volume = (-1) * volume;
        }

        printf("\n\n\n\n\n\n");
}




// CONE FUNCTIONS
void cone(){
        printf("Enter 1 to calculate TOTAL SURFACE AREA\nEnter 2 to calculate CURVED SURFACE AREA\nEnter 3 to calculate VOLUME\n\n");

        printf("Enter area selection number: ");
        scanf("%d", &selection);

        if(selection == 1){
                totalSurfaceAreaOfCone();
        } else if(selection == 2){
                curvedSurfaceAreaOfCone();
        } else if(selection == 3){
                volumeOfCone();
        } else if(selection < 1){
                printf("Since Area selection number is lesser than 1, it's being set to 1.\n");
                totalSurfaceAreaOfCone();
        } else if(selection > 3){
                printf("Since Area selection number is greater than 3, it's being set to 3.\n");
                volumeOfCone();
        }
}

void totalSurfaceAreaOfCone(){
        printf("\nTotal Surface Area of Cone will be calculated\n\n");

        printf("Enter radius: ");
        scanf("%f", &r);

        printf("Enter slant height: ");
        scanf("%f", &sh);

        area = (22 * r * (r + sh))/7;
        printf("\nThe Total Surface Area of the Cone is %f sq. units", area);

        if(area < 0){
                area = (-1) * area;
        }

        printf("\n\n\n\n\n\n");
}

void curvedSurfaceAreaOfCone(){
        printf("\nCUrved Surface Area of Cone will be calculated\n\n");

        printf("Enter radius: ");
        scanf("%f", &r);

        printf("Enter slant height: ");
        scanf("%f", &sh);

        area = (22 * r * sh)/7;
        printf("\nThe Curved Surface Area of the Cone is %f sq. units", area);

        if(area < 0){
                area = (-1) * area;
        }

        printf("\n\n\n\n\n\n");
}

void volumeOfCone(){
        printf("\nVolume of Cone will be calculated\n\n");

        printf("Enter radius: ");
        scanf("%f", &r);

        printf("Enter height: ");
        scanf("%f", &h);

        volume = (22 * r * r * h)/21;
        printf("The Volume of the Cone is %f cb. units", volume);

        if(volume < 0){
                volume = (-1) * volume;
        }

        printf("\n\n\n\n\n\n");
}




// SPHERE FUNCTIONS
void sphere(){
        printf("Enter 1 to calculate SURFACE AREA\nEnter 2 to calculate VOLUME\n\n");

        printf("Enter area selection number: ");
        scanf("%d", &selection);

        if(selection == 1){
                surfaceAreaOfSphere();
        } else if(selection == 2){
                volumeOfSphere();
        } else if(selection < 1){
                printf("Since Area selection number is lesser than 1, it's being set to 1.\n");
                surfaceAreaOfSphere();
        } else if(selection > 2){
                printf("Since Area selection number is greater than 2, it's being set to 2.\n");
                volumeOfSphere();
        }
}

void surfaceAreaOfSphere(){
        printf("\nSurface Area of Sphere will be calculated\n\n");

        printf("Enter radius: ");
        scanf("%f", &r);

        area = (88 * r * r)/7;
        printf("\Surface Area of the sphere is %f sq. units", area);

        if(area < 0){
                area = (-1) * area;
        }

        printf("\n\n\n\n\n\n");
}

void volumeOfSphere(){
        printf("\nVolume of Sphere will be calculated\n\n");

        printf("Enter the radius: ");
        scanf("%f", &r);

        volume = (88 * r * r * r)/21;
        printf("\nVolume of the sphere is %f cb. units", volume);

        if(volume < 0){
                volume = (-1) * volume;
        }

        printf("\n\n\n\n\n\n");
}
