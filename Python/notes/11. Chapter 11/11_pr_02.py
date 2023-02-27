class Animals:
    animalType = "Mammal"

class Pets:
    color = "White"
    # super().animalType
class Dog:
    @staticmethod
    def bark():
        print("Bow bow!")

d= Dog()
d.bark()
print(Animals.animalType)