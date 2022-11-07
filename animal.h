#ifndef _ANIMAL
#define _ANIMAL

class ANIMAL
{
public:
    ANIMAL(const char *);
    ~ANIMAL();
    char *getname(void);

private:
    char *name;
};

#endif // _ANIMAL
