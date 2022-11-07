#include "animal.h"
#include <string.h>

ANIMAL::ANIMAL(const char *data) //构造函数
{
    name = new char[64];
    strcpy(name, data);
}

ANIMAL::~ANIMAL() //析构函数
{
    if (name)
    {
        delete[] name;
        name = NULL;
    }
}

char *ANIMAL::getname(void)
{
    return name;
}
