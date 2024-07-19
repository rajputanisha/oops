/***
 * word “polymorphism” means having many forms. In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form. A real-life example of polymorphism is a person who at the same time can have different characteristics. A man at the same time is a father, a husband, and an employee. So the same person exhibits different behavior in different situations. This is called polymorphism. Polymorphism is considered one of the important features of Object-Oriented Programming.
 * /**********
 * polymorphism allows for flexibility and the ability to define methods in a base class and override them in derived classes. This leads to code that is easier to maintain and extend. By using polymorphism, you can write code that works on the superclass level, which can handle objects of derived classes through a common interface.
 * maintian of code is easy it also increase readanilty ans reusabilty */
 compile time 
 In Compile time Polymorphism, the call is resolved by the compiler.
 runtime poly
 In Run time Polymorphism, the call is not resolved by the compiler.
compile __TIME__
is also known as Static binding, Early binding and overloading as wel
runtime
It is also known as Dynamic binding, Late binding and overriding as well
compile __TIME__
It is achieved by method overloading
runtime poly
It is achieved by virtual functions and pointers.
compile __TIME__
It provides fast execution because the method that needs to be executed is known early at the compile time.
runtime 
It provides slow execution as compare to early binding because the method that needs to be executed is known at the runtime.
compile __TIME__
Compile time polymorphism is less flexible as all things execute at compile time.
runtime
Run time polymorphism is more flexible as all things execute at run time.
compil __TIME__
Inheritance is not involved. 
Compile-time polymorphism does not require inheritance. It is achieved through method overloading and operator overloading, which are independent of inheritance.
Method Overloading:

Methods in the same class with the same name but different parameters (type or number) are called based on the arguments passed to them. This decision is made at compile time.
runtime
inheritence is involed
Runtime polymorphism heavily relies on inheritance. It is achieved through inheritance and virtual functions. A base class declares virtual functions, which are overridden in derived classes.
Virtual Functions:

Functions declared as virtual in a base class can be overridden in derived classes. The decision about which function to call is made at runtime based on the actual object type.
