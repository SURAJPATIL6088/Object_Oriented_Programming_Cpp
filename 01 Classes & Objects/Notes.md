# 1. Classes And Objects

 Object-Oriented Programming is a methodology or paradigm to design a
program using classes and objects. It simplifies the software development
and maintenance by providing some concepts 

### SPECIFYING A CLASS
We are creating a new <i>abstract data type </i> that can be treated like any other built-in data type. Generally a class specification has two parts:

1. Class declaration
2. Class function definitions

There the three types of the Access Modifiers
1. Private
2. Public
3. Protected

**Static allocation**
    
    class_name object;

ex. class student;

**Dynamic Allocation**

    class_name *object_name = new class_name;
   
Ex. 
student *s = new student;

Basic Structure
```
class class_name 
{
    private:
        variable declarations;
        function declarations;
    
    public:
        variable declarations;
        function declarations;    
};
```

Note : 
1. Class declaration similar to a struct declaration.
2. We can't use the private functions inside the main()

#### 1. Variable declared inside the class are known as <i>data members </i>. and the functions are known as <i>member members </i>.

#### 2. Simple Class Examples
```
class item 
{
        int number;
        float cost;    // this both the declarations are private by default
    
    public:
        void getData(int a, float b);
        void putData();    
};
```

#### 3. Creating the Class Object in main() :
```
class_name object-name;
```

Ex. 
```
item x;
```

#### 4. Accessing Class Members
In these format have to access the class members.
```
object-name.function_name(arguments);
```

For Example, the function call statement
```
x.getData(12, 34.3);
```

#### 5. Defining Member functions outside the class
```
    data_type class_name :: method_name()
    {
        // code
    }
    //method_name = which is already defined in the class
```  

#### Applications of Getter and Setter In C++ :

Let's now see some essential applications of the Getter and Setter In C++.

1. **Data Validate**: while setting up the data value, we can check if it is valid or not using the setter method which ensures data security and prevents error.
 
2. **Access Control of Data**: Restriction to certain data members could be provided using getter and setter methods. This ensures security as only authorised code can change and update the data.
 
3. **Encapsulation**: The technique to bind the code and data together and prevent direct access to the data from outside the class requires getter and setter methods. Encapsulation protects the data from unwanted changes and ensures data integrity.
 
4. **Abstraction**: getter and setter methods provide a level of abstraction. It hides the class implementation details or internal workings. This allows for easier code maintenance and changes without affecting the rest of the code.

#### Frequently Asked Questions

#### Q.1 Why should we use getter and setter in c++?
We should use these methods to protect our data, ensuring data validation and having control access to the private data member. Getter and setter methods also improve code maintainability.

#### Q.2 Can the getter and setter methods in c++ be overridden?
Yes, in C++, derived classes can override getter and setter functions to provide different implementations that are specific to the derived class. This is useful when the base class does not meet the specific requirements of the derived class

#### Q.3 What is the advantage of using getters and setters in c++ instead of making member variables public?
getter and setter methods provide better encapsulation and abstraction of the class’s internal workings. It also allows the class to modify its code without affecting the external code along with the data validation feature to protect the data member.

#### Q.4 Can the getter method return a reference rather than a value?
Yes, the getter method can return a reference instead of the value which is useful when we want to modify or access the data member directly without creating a copy of the object
