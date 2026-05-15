👨‍👦 Inheritance in C++

This repository contains my practice programs on Inheritance in C++ as part of my Object-Oriented Programming (OOP) learning journey.

📚 Topics Covered
Inheritance
Parent Class
Child Class
Base Class
Derived Class
Code Reusability
Function Inheritance
Accessing Parent Members
Child Class Own Features
🧠 What I Learned

Inheritance allows one class to:

acquire properties and behavior of another class

This helps:

reduce code duplication
improve code reusability
organize related classes better
🛠️ Practice Questions Solved
1️⃣ Animal → Dog
Parent Class

Animal

Function:

eat()
Child Class

Dog

Own Function:

bark()

Learned:

child class can access parent functions
child class can also have its own functions
2️⃣ Vehicle → Car
Parent Class

Vehicle

Function:

start()
Child Class

Car

Own Function:

musicSystem()

Learned:

code reuse through inheritance
3️⃣ Person → Student
Parent Class

Person

Data:

name

Function:

showName()
Child Class

Student

Data:

marks

Function:

showMarks()

Learned:

inheriting data members and functions
4️⃣ Shape → Rectangle
Parent Class

Shape

Function:

display()
Child Class

Rectangle

Own Function:

area()

Learned:

extending parent class functionality
5️⃣ Employee → Manager ⭐
Parent Class

Employee

Data:

employeeName
salary

Function:

showEmployee()
Child Class

Manager

Data:

department

Function:

showDepartment()

Learned:

child class can combine inherited + own data/functions

🧬 Multilevel & Multiple Inheritance in C++

This repository contains my practice programs on Multilevel Inheritance and Multiple Inheritance in C++ as part of my Object-Oriented Programming (OOP) learning journey.

📚 Topics Covered
Inheritance
Multilevel Inheritance
Multiple Inheritance
Parent Class
Child Class
Inheritance Chain
Multiple Parent Classes
Code Reusability
Accessing Inherited Members
🧠 What I Learned

Inheritance allows:

one class to acquire properties and behavior from another class

Different inheritance structures help organize and reuse code efficiently.

🔗 Multilevel Inheritance

Multilevel inheritance means:

one child becomes parent of another class

Structure:

Grandparent
     ↓
Parent
     ↓
Child
🛠️ Practice Questions Solved
1️⃣ Animal → Mammal → Dog
Class 1

Animal

Function:

eat()
Class 2

Mammal inherits Animal

Function:

walk()
Class 3

Dog inherits Mammal

Function:

bark()

Learned:

inheritance chain
accessing upper-level parent functions
multi-level code reuse
2️⃣ Vehicle → Car → SportsCar
Class 1

Vehicle

Function:

start()
Class 2

Car inherits Vehicle

Function:

musicSystem()
Class 3

SportsCar inherits Car

Function:

turbo()

Learned:

final child class inherits all upper-level properties
multi-level inheritance hierarchy
🔀 Multiple Inheritance

Multiple inheritance means:

one child class inherits from multiple parent classes

Structure:

Parent1 ─┐
         ├── Child
Parent2 ─┘
🛠️ Practice Questions Solved
3️⃣ Person + Employee → Manager
Parent Class 1

Person

Function:

showName()
Parent Class 2

Employee

Function:

showSalary()
Child Class

Manager

Function:

showDepartment()

Learned:

inheriting features from multiple parent classes
combining multiple functionalities into one child class
4️⃣ Camera + MusicPlayer → Smartphone
Parent Class 1

Camera

Function:

clickPhoto()
Parent Class 2

MusicPlayer

Function:

playMusic()
Child Class

Smartphone

Function:

call()

Learned:

combining features from different parent classes
real-world multiple inheritance concept

🌳 Hierarchical Inheritance in C++

This repository contains my practice programs on Hierarchical Inheritance in C++ as part of my Object-Oriented Programming (OOP) learning journey.

📚 Topics Covered
Hierarchical Inheritance
Parent Class
Multiple Child Classes
Code Reusability
Inherited Functions
Child-Specific Functions
Accessing Parent Members
🧠 What I Learned

Hierarchical inheritance means:

one parent class inherited by multiple child classes

This helps multiple classes reuse common features from a single parent class.

🔍 Structure of Hierarchical Inheritance
        Parent
       /      \
   Child1    Child2

All child classes inherit common properties from the parent class.

🛠️ Practice Questions Solved
1️⃣ Shape → Circle & Rectangle
Parent Class

Shape

Function:

display()

prints:

This is Shape
Child Class 1

Circle

Function:

areaCircle(int r)

Calculates:

3.14 * r * r
Child Class 2

Rectangle

Function:

areaRectangle(int l, int b)

Calculates:

l * b
Learned
multiple child classes can inherit same parent features
child classes can have their own independent functions
code reuse using inheritance
2️⃣ Person → Student & Teacher ⭐
Parent Class

Person

Data:

name

Function:

showName()
Child Class 1

Student

Data:

marks

Function:

showMarks()
Child Class 2

Teacher

Data:

subject

Function:

showSubject()
Learned
child classes inherit parent data members
each child can have separate data/functions
hierarchical class structure understanding
💡

