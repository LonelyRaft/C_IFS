#include "animal.h"
#include "animal_api.h"
#include <assert.h>
#include <iostream>
using namespace std;

void *animal_create(const char *name)
{
    ANIMAL *animal = new ANIMAL(name);
    return animal;
}

void animal_print(void *handle)
{
    assert(handle);
    cout << "animal name is: "
         << ((ANIMAL *)handle)->getname()
         << endl;
}

void animal_destroy(void *handle)
{
    assert(handle);
    delete (ANIMAL *)handle;
}
