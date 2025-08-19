// INHERITANCE THEORETICAL

/*
Inheritance is a feature of Object-Oriented Programming (OOP) where a class (called derived class / child class) acquires properties and behaviors (data members and member functions) of another class (called base class / parent class).

KEY FEATURES:-
    Code reusability → don’t rewrite code in multiple classes.
    Extensibility → create specialized classes from general ones.
    We can use base class methods in derived class
*/

//TYPES OF INHERITANCE

/*
There are multiple types of inheritance

(1) Single Inheritance:
    Definition: A derived class inherits from only one base class.
    Use case: When a specific class extends just one general class.
    Example in words: Base class: Vehicle...Derived class: Car → inherits general properties of Vehicle.

(2) Multiple Inheritance:
    Definition: A derived class inherits from more than one base class.
    Use case: When a class needs features from multiple independent classes.
    Example in words: Base classes: Camera, GPS → Derived class: Smartphone → inherits both Camera and GPS features.

(3) Hierarchical Inheritance:
    Definition: Multiple derived classes inherit from a single base class.
    Use case: When different classes share a common parent.
    Example in words: Base class: Shape → Derived classes: Circle, Rectangle, Triangle → all share common properties like color or area calculation method

(4) Multilevel Inheritance:
    Definition: A derived class is created from another derived class, forming a chain of inheritance.
    Use case: When concepts are naturally hierarchical.
    Example in words: Base class: Animal → Derived class: Mammal → Derived class: Dog → inherits features step by step.

(5) Hybrid / Virtual Inheritance:
    Definition: A combination of two or more types of inheritance.
    Use case: To solve the diamond problem and combine different inheritance patterns.
    Example in words: Base class: LivingBeing → Derived classes: Animal, Human → Derived class: SuperHero (inherits Animal and Human) → ensures only one copy of LivingBeing exists.
*/

/*
Summary:

  Single: One base → one derived.

  Multiple: More than one base → one derived.

  Multilevel: Chain of inheritance.

  Hierarchical: One base → many derived.

  Hybrid: Mix of the above; virtual inheritance solves diamond problem.
*/
