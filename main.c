
#include "animal_api.h"

int main(int argc, char *argv[])
{
    animal_t a = animal_create("dog");
    animal_print(a);
    animal_destroy(a);
    return 0;
}
