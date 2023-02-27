#include <stdio.h>
#include <math.h>

void myFunction(char name[], int age)
{
   printf("Hello %s. You are %d years old.\n", name, age);
}

int main()
{
   int c = 5;
   char r = 'k';
   int m = 6;
   float f = 9.343;
   double d = 22.4;
   char string[] = "karan";
   char txt[] = {'H', 'e', 'l', 'l', 'o', '\0'};
   int *pointer = &m;
   // int pointer = &m; --> gives you wrong address
   printf("%s", txt);
   printf("%d", c);
   printf("%f", f);
   printf("%c", r);
   printf("%lf\n", d);         // double
   printf("%s\n", string);     // string
   printf("%lu\n", sizeof(c)); // long unsinged int
   printf("%p\n", &m);         // pointer(address of m)
   printf("%p\n", pointer);    // pointer(address of m)
   printf("this is interger %d and this is float %f and this is charcter %d", m, f, c);

   if (c > 2)
   {
      printf("if");
   }
   else if (c < 5)
   {
      printf("elseif");
   }
   else
   {
      printf("else");
   }

   (c > 5) ? printf("if") : printf("else");

   switch (c)
   {
   case 5:
      printf("this is 5");
      break;
   case 6:
      printf("this is 6");
      break;
   default:
      printf("their is no value");
      break;
   }

   // Create a string
   char firstName[30];

   // Ask the user to input some text
   printf("Enter your first name: \n");

   // Get and save the text
   scanf("%s", firstName);

   // Output the text
   printf("Hello %s.", firstName);

   void myFunction(char name[], int age)
   {
      printf("Hello %s. You are %d years old.\n", name, age);
   }

   myFunction("Liam", 3);
   myFunction("Jenny", 14);
   myFunction("Anja", 30);

   // math.h
   printf("%f\n",sqrt(16));
   printf("%f\n",sqrt(16));
   printf("%f\n",sqrt(15));
   // printf("%f\n",sqrt(-15));
   printf("%f\n", ceil(1.4));
   printf("%f\n", floor(1.4));
   // printf("%d", floor(1.4));
   printf("%f\n", pow(4, 3));
   printf("%f\n", exp(3));
   printf("%d\n", abs(-3));
   printf("%f\n", cbrt(27));

   struct myStructure {
  int myNum;
  char myLetter;
  char myString[30]; // String
};

struct myStructure s1;

  // Assign a value to the string using the strcpy function
strcpy(s1.myString, "Some text");

  // Print the value
printf("My string: %s", s1.myString);


   return 0;
}

struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];
};

// Create a structure variable and assign values to it
struct myStructure s1 = {13, 'B', "Some text"};

  // Print values
printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);



/*operater
simple + - * / %
increament ++ --
complex += -= *= /= ^= <<= >>= |= &= %=
longical && || !
comparative == != <= >= > <

=================================================

// Function declaration
void myFunction();

// The main method
int main() {
  myFunction();  // call the function
  return 0;
}

// Function definition
void myFunction() {
  printf("I just got executed!");
}

*/