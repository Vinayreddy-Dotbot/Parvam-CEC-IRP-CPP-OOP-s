#include<iostream>
using namespace std;
class Animal //Base class -level 0
{
    public:
        string name;
        void setName(string animalName)
        {
            name=animalName;
        }

        void showAnimal()
        {
            cout<<"Name of the Animal:"<<name<<endl;
        }
};
 
//Animal ->Carnivore(Symbolic Representation)
//Animal class is Deriving the carnival class
//carnival class is derived from the Animal class
class Carnivore : public Animal //Derived class/Base class -level 1
{
    string vegetation;
    public:
        void setName(string animalName)
        {
            name=animalName;
        }

        
        void setFood(string food)
            {
                vegetation=food;
            }
            
            
            
            void showFood()
            {
                cout<<"Type of Animal:"<<vegetation <<endl;
            }
};

//Mammal ->Carnivore(Symbolic Representation)
class Mammal : public Carnivore //Derived class/Base class -level 2
{
    public:
        string habitat;
    public:
        void setHabitat(string place)
        {
            habitat=place;

        }

        void showHabitat()
        {
            cout<<"Living place:"<<habitat<<endl;
        }
};

int main()
{
    string animal_Name,food_type,place_of_living;

    cout<<"Enter the Name of The Animal,food type & place of living:";
    cin>>animal_Name>>food_type>>place_of_living;

    Animal a1;
    a1.setName(animal_Name);
    
    Carnivore c1;
    c1.setName(animal_Name);
    c1.setFood(food_type);
    

    Mammal m1;
    m1.setName(animal_Name);
    m1.setFood(food_type); 
    m1.setHabitat(place_of_living);
    m1.showAnimal();
    m1.showFood();
    m1.showHabitat();
}
