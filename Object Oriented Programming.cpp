#include <iostream>
#include <string>

using namespace std;

//Base Class

class Shape
{
protected:
	string name;

public:
	Shape(string s)
	{
		name = s;
	}

	void setName(string s)
	{
		name = s;
	}
	string getName() const
	{
		return name;
	}

	virtual double getArea() const = 0; // assign 0 to make pure virtual function. Note how no variables declared for different shapes
};

// first child class
class Circle : public Shape // don't have to re-write Base Class declarations
{
	double radius;

public: 
	Circle(string n, double r) : Shape(n)
	{ 
		radius = r;
	}

	void setRadius(double r)
	{
		radius = r;
	}
	double getRadius() const
	{
		return radius;
	}

	virtual double getArea() const // Feature of polymorphism
	{
		return 3.14 * radius * radius;
	}

};

// Second child class
class Rectangle : public Shape // don't have to re-write Base Class declarations
{
	double length, width;

public:
	Rectangle(string n, double l, double w) : Shape(n)
	{
		length = l;
		width = w;
	}

	void setLength(double l)
	{
		length = l;
	}
	void setWidth(double w)
	{
		width = w;
	}
	double getLength() const
	{
		return length;
	}
	double getWidth() const
	{
		return width;
	}

	virtual double getArea() const
	{
		return length * width;
	}

};

int main()
{
	// Shape s("Foo"); // note how s, c, and r first appear here
	// cout << s.getName() << endl;
	// had to remove because I added the virtual function

	Circle c("Circle", 3.1);
	c.setName("Circle TOO");
	cout << c.getName() << endl; // shows how getName and getRadius were correctly inherited (compare to rectangle)
	cout << c.getRadius() << endl;
	cout << c.getArea() << endl;

	Rectangle r("Rectangle", 4.2, 2.5); 
	cout << r.getName() << endl;
	cout << r.getWidth() << " " << r.getLength() << endl;
	cout << r.getArea() << endl;

	// Poloymorphism: can create an arrray of different data types using pointers (each shape, or child class, is a different type)
	Shape * shapes[2] = { new Circle("Circle", 2.1), new Rectangle("Rectangle", 3.1, 1.2) };
	
	for (int i = 0; i < 2; i++)
		cout << "Shape " << i << " area = " << shapes[i]->getArea() << endl; // dot notation doesn't work because it's a pointer

	cin.get();
}

