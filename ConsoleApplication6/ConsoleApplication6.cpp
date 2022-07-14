#include <iostream>
#include <cmath>

class Point {
private:
	double m_a;
	double m_b;

public:
	Point() {
		m_a = 0.0;
		m_b = 0.0;
	}

	

	Point(double m_Avalue, double m_bValue) {
		m_a = m_Avalue;
		m_b = m_bValue;
	}


	void Print()
	{
		std::cout << "\t" << m_a << "\t" << m_b << std::endl;
		
	}

	friend double distanceFrom(Point &a, Point &b );
};

double distanceFrom(Point &a, Point &b) {
	 return sqrt((a.m_a - b.m_a) * (a.m_a - b.m_b) + (a.m_a - b.m_b) * (b.m_b - b.m_b));
	
}

int main()
{
	Point first;
	Point second(2.0, 2.3);
	first.Print();
	second.Print();
	std::cout << distanceFrom(first,second) << std::endl;
}