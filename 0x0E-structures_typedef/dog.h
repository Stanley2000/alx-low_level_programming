#ifndef DOG_H
#define DOG_H
/**
  * struct dog - dog profile
  * @name: first element
  * @age: second element
  * @owner: third element
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
