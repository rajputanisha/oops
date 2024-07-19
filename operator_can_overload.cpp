/***
 * . Arithmetic Operators:
+ (Addition)
- (Subtraction)
* (Multiplication)
/ (Division)
% (Modulo)
Example:

cpp
Copy code
class Complex {
public:
    float real, imag;
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Overload +
    Complex operator + (const Complex& c) const {
        return Complex(real + c.real, imag + c.imag);
    }

    // Overload -
    Complex operator - (const Complex& c) const {
        return Complex(real - c.real, imag - c.imag);
    }
};
2. Relational Operators:
== (Equality)
!= (Inequality)
< (Less than)
> (Greater than)
<= (Less than or equal to)
>= (Greater than or equal to)
Example:

cpp
Copy code
class Complex {
public:
    float real, imag;
    bool operator == (const Complex& c) const {
        return (real == c.real && imag == c.imag);
    }
};
3. Logical Operators:
&& (Logical AND)
|| (Logical OR)
! (Logical NOT)
Example:

cpp
Copy code
class BoolWrapper {
public:
    bool value;
    BoolWrapper(bool v) : value(v) {}

    // Overload &&
    BoolWrapper operator && (const BoolWrapper& b) const {
        return BoolWrapper(value && b.value);
    }
};
4. Increment and Decrement Operators:
++ (Prefix and Postfix Increment)
-- (Prefix and Postfix Decrement)
Example:

cpp
Copy code
class Counter {
public:
    int count;
    Counter(int c = 0) : count(c) {}

    // Prefix increment
    Counter& operator ++ () {
        ++count;
        return *this;
    }

    // Postfix increment
    Counter operator ++ (int) {
        Counter temp = *this;
        ++count;
        return temp;
    }
};
5. Assignment Operators:
= (Assignment)
+= (Addition Assignment)
-= (Subtraction Assignment)
*= (Multiplication Assignment)
/= (Division Assignment)
%= (Modulo Assignment)
&= (Bitwise AND Assignment)
|= (Bitwise OR Assignment)
^= (Bitwise XOR Assignment)
<<= (Bitwise Left Shift Assignment)
>>= (Bitwise Right Shift Assignment)
Example:

cpp
Copy code
class Vector {
public:
    int x, y;
    Vector(int a = 0, int b = 0) : x(a), y(b) {}

    // Overload +=
    Vector& operator += (const Vector& v) {
        x += v.x;
        y += v.y;
        return *this;
    }
};
6. Bitwise Operators:
& (Bitwise AND)
| (Bitwise OR)
^ (Bitwise XOR)
~ (Bitwise NOT)
<< (Bitwise Left Shift)
>> (Bitwise Right Shift)
Example:

cpp
Copy code
class Bitwise {
public:
    int value;
    Bitwise(int v) : value(v) {}

    // Overload &
    Bitwise operator & (const Bitwise& b) const {
        return Bitwise(value & b.value);
    }
};
7. Subscription and Dereferencing Operators:
[] (Array Subscript)
* (Dereference)
Example:

cpp
Copy code
class ArrayWrapper {
private:
    int arr[10];
public:
    int& operator [] (int index) {
        return arr[index];
    }
};
8. Function Call Operator:
() (Function Call)
Example:

cpp
Copy code
class Functor {
public:
    void operator () (int x) const {
        cout << "Functor called with " << x << endl;
    }
};
9. Member Access Operators:
-> (Member Access Through Pointer)
Example:

cpp
Copy code
class Wrapper {
private:
    int value;
public:
    Wrapper(int v) : value(v) {}
    int* operator -> () {
        return &value;
    }
};
Summary
In C++, you can overload most operators to customize their behavior for user-defined types, which enhances flexibility and control over how objects of those types interact with standard operators. However, some operators, such as the scope resolution operator (::), member access operator (.), and others, cannot be overloaded.
 */