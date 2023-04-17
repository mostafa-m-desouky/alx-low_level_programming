#ifndef FILE_DOG
#define FILE_DOG
/**
 *struct dog - structure dog
 *@name:pointer to char name's dog
 *@age:float age's dog
 *@owner:pointer to char owner's dog
 */
struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

int _strlen(char *s);

char *_strcpy(char *dest, char *src);

void free_dog(dog_t *d);

#endif
