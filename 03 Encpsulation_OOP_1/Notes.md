# Object Oriented Programming in C++

# Encapsulation

### Definition
The Act of combining properties and methods, related to the same object, is Known as the Encapsulation. 

A key idea in object-oriented programming (OOP) is encapsulation, which permits data hiding and gives classes a way to isolate their implementation details from their clients. C++ is an OOP language that provides several features for implementing encapsulation, such as access specifiers and member functions.

### Data Hiding
Data hiding is an important aspect of encapsulation that enables the data members of a class to be hidden from the clients of the class. By making the data members private and enabling accessor and mutator functions to access and modify the data members, data hiding can be accomplished.

### Member functions:
Member functions are functions that are defined inside a class and operate on the data members of that class. Because they are a component of the class, member functions can access the private members of the class. Member functions can be classified into two types: accessor functions and mutator functions.

In the Below Example :
```
Class Car
{                                   -
    private:                        |
    string Year_of_manufacturing;   |   Encapsulated Data inside the Class
    int speed;                      |   These Data is also called as Properties
                                    -
    
    public:
        void setYoM(string yom)
        {
            Year_of_manufacturing = yom;
        }

        void setSpeed(int s)
        {
            Speed = s;
        }
}
```

How to access these functions : 

```
main()
{
    Car toyota;

    toyota.setYoM("2023");
    toyota.setSpeed(240);
}

```

## Thank You 