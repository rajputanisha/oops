In C++, a destructor is a special member function of a class that is called automatically when an object of that class is destroyed. The main purpose of a destructor is to release resources that the object may have acquired during its lifetime, such as memory, file handles, or network connections.

Key Characteristics of Destructors
Name and Syntax:

A destructor has the same name as the class, preceded by a tilde (~).
It does not take any arguments and does not return any value.
Syntax:

cpp
Copy code
class ClassName {
public:
    ~ClassName(); // Destructor
};
Automatic Invocation:

The destructor is automatically called when an object goes out of scope or is explicitly deleted using delete.
Example:

cpp
Copy code
class Example {
public:
    ~Example() {
        cout << "Destructor Called" << endl;
    }
};

int main() {
    Example e; // Destructor will be called automatically when e goes out of scope
    return 0;
}
No Overloading:

Unlike constructors, you cannot overload destructors. Each class has only one destructor.
No Parameters or Return Type:

Destructors cannot take parameters and cannot return any value.
Destructor Order:

If a class is derived from a base class, the derived class's destructor is called first, followed by the base class's destructor. This ensures that resources acquired by derived class objects are properly released before those of the base class.
Purpose of Destructors
Resource Cleanup:

Destructors are typically used to release resources that the object may have acquired during its lifetime. For example, closing files, releasing memory allocated with new, or disconnecting from a network.
Example:

cpp
Copy code
class FileHandler {
private:
    FILE* file;
public:
    FileHandler(const char* filename) {
        file = fopen(filename, "w");
    }

    ~FileHandler() {
        if (file) {
            fclose(file); // Release the file resource
        }
    }
};

int main() {
    FileHandler fh("example.txt"); // Destructor will close the file automatically
    return 0;
}
Avoiding Resource Leaks:

Proper use of destructors helps in preventing resource leaks by ensuring that resources are released when an object is no longer needed.
Cleanup in Dynamic Allocation:

If an object is dynamically allocated using new, the destructor is called when the object is deleted with delete.
Example:

cpp
Copy code
class Example {
public:
    ~Example() {
        cout << "Destructor Called" << endl;
    }
};

int main() {
    Example* e = new Example(); // Calls the constructor
    delete e; // Calls the destructor
    return 0;
}
Destructor in Inheritance
When dealing with inheritance, destructors play a crucial role in ensuring that the destructor of the derived class is called before the base class destructor.

Example:

cpp
Copy code
class Base {
public:
    Base() {
        cout << "Base Constructor" << endl;
    }

    virtual ~Base() { // Virtual destructor
        cout << "Base Destructor" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived Constructor" << endl;
    }

    ~Derived() {
        cout << "Derived Destructor" << endl;
    }
};

int main() {
    Base* b = new Derived(); // Calls both Derived and Base constructors
    delete b; // Calls Derived and then Base destructors
    return 0;
}
In this example, the virtual keyword ensures that the correct destructor (Derived's destructor) is called when deleting a Base pointer that points to a Derived object.

Summary
Destructor: A special member function used to clean up resources when an object is destroyed.
Automatic Invocation: Called automatically when an object goes out of scope or is deleted.
No Overloading: Only one destructor per class, cannot take parameters or return values.
Resource Cleanup: Used for releasing resources like memory, file handles, etc.
Inheritance: Ensure proper cleanup in derived classes by using virtual destructors.
Properly implementing destructors is essential for managing resources and avoiding memory leaks in C++ programs.






