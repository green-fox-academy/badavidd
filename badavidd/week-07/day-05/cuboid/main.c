#include <stdio.h>

// Write a function called "GetSurface" that takes a RectangularCuboid
// and returns it's surface
// Write a function called "GetVolume" that takes a RectangularCuboid
// and returns it's volume

struct rectangular_cuboid {
    double a;
    double b;
    double c;
};

double get_surface(struct rectangular_cuboid* cub)
{
    return 2 * ((cub->a*cub->b) + (cub->a*cub->c) + (cub->b*cub->c));
}

double get_volume(struct rectangular_cuboid* cub)
{
    return (cub->a * cub->b * cub->c);
}

int main()
{

    struct rectangular_cuboid cuboid;
    cuboid.a = 10;
    cuboid.b = 4;
    cuboid.c = 8;

    printf("Surface: %.f\n", get_surface(&cuboid));
    printf("Volume: %.f\n", get_volume(&cuboid));

    return 0;
}