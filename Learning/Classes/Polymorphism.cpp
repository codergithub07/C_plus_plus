#include<iostream>
#include<string>
using namespace std;

class Animal
{
    public:
        void animalSound()
        {
            cout << "All animals make sound\n";
        }
};

class Dog
{
    public:
        void animalSound()
        {
            cout << "Dog says Bhao Bhao\n";
        }
};

class Cat
{
    public:
        void animalSound()
        {
            cout << "Cat says Mew Mew\n";
        }
};

int main()
{
    Animal animal;
    Dog dog;
    Cat cat;

    animal.animalSound();
    dog.animalSound();
    cat.animalSound();

    return 0;
}