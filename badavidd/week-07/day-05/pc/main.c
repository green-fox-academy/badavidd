#include <stdio.h>
#include <stdint.h>

// Use the Computer struct, give values to the fields and print them out in the main!
// Use the Notebook struct, give values to the fields and print them out in the main!

struct Computer {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

typedef struct {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
} Notebook;

int main()
{
    struct Computer pc;
    pc.cpu_speed_GHz = 3.4;
    pc.ram_size_GB = 4;
    pc.bits = 64;

    printf("PC: %.1f GHz cpu, %d GB ram, %d bit op sys.\n", pc.cpu_speed_GHz, pc.ram_size_GB, pc.bits);

    Notebook lapos;

    lapos.cpu_speed_GHz = 3.0;
    lapos.ram_size_GB = 4;
    lapos.bits = 32;

    printf("Lapos: %.1f GHz cpu, %d GB ram, %d bit OP sys.\n", lapos.cpu_speed_GHz, lapos.ram_size_GB, lapos.bits);

    return 0;
}