# Object Oriented Programming in C++

### What is the Constructor ?
- No itput paramenter
- it has No return Value
- Invoked at the time of object creation


Types of Constructors:
There are three types of constructors in C++ :

1. Default constructor
```
      class_name()
      {
            // code
      }
```
2. Parameterized Constructor
```
      class_name(Parameters)
      {
          // code
      }
```
3. Copy Constructor
```        
      // constructor
      class_name (parameters)
      {
          // code
      }
```
```        
      // copy constructor 
      // it copies the class_name0 data to the class_name
      class_name( class_name0& ptr)
      {
          // code
      }
```

Destructor : it works opposite to the constructor
  Note:
  1. it do not have return type
  2. Destructor don't have any parameters
  3. In class only one destructor can be called

Destructor Syntax:
```
      ~class_name()    
      {   
           // code   
      }
```         

### Notes :

- this keyword - it will store the address of the current object

##### What is Copy Assignment Operator ?
- let's consider the A, B are the class objects. 
- A = B it can be posible by the Copy Assignment Operator `=`.
- then the A able to access the functionalities of B
