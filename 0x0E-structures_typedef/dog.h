#ifndef my_dog_h
#define my_dog_h

int _putchar(char c);

/**
 * struct dog - Entry point
 * @c: variable
 * _putchar - putchar
 * @name: name
 * @age: age
 * @owner: owner
 */

struct dog


{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
