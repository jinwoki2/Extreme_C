#include <iostream>

class Rect{
public:
	int Area() {
		return width * length;
	}
	int width;
	int length;
};

int	main(void)
{
	Rect r;
	int area;

	r.width = 10;
	r.length = 25;
	area = r.Area();
	std::cout << "Area: " << area << std::endl;
	return (0);
}