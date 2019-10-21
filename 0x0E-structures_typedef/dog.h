#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Django
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: Information about dogs
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
