#ifndef _ANIMAL_API
#define _ANIMAL_API
#ifdef __cplusplus
extern "C"
{
#endif
    typedef void *animal_t;
    animal_t animal_create(const char *_name);
    void animal_print(animal_t _animal);
    void animal_destroy(animal_t _animal);
#ifdef __cplusplus
}
#endif
#endif // _ANIMAL_API
