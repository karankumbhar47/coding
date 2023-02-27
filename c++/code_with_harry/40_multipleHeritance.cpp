#include <iostream>

using namespace std;
// multiple inheritance --> a==>b==>c
class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int r)
    {
        roll_number = r;
    }
    void get_roll_numbeer()
    {
        cout << "Your roll number is " << roll_number << endl;
    }
};

class Exam : public student
{
protected:
    float math, physics;

public:
    void set_marks(float, float);
    void get_marks();
};

void Exam::set_marks(float m1, float m2)
{
    math = m1;
    physics = m2;
}
void Exam::get_marks()
{
    cout << "The marks obtained in maths " << math << endl;
    cout << "The marks obtained in physics " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display()
    {
        get_roll_numbeer();
        get_marks();
        cout << "Your percentage is " << ((math + physics) / 2) << endl;
    }
};

int main()
{
    Result harry;
    harry.set_roll_number(428);
    harry.set_marks(94.4, 90.6);
    harry.display();
    return 0;
}