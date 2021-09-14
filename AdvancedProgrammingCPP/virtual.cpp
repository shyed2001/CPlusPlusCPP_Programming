#include <iostream>
u sing namespace std;

class Parallelogram
{
  protected:
    int width, height, ar;
  public:
    void set_values (int a, int b)
      {
	width=a; height=b;
      }
    virtual int area ()
      {
	ar=width*height;
	cout<< "Area of parallelogram is "<< ar<<"\n";
      }
};

class Rectangle: public Parallelogram
{
  public:
    int area ()
      {
	ar=width * height;
	cout<< "Area of rectangle is "<<ar <<"\n";
      }
};

class Triangle: public Parallelogram
{
  public:
    int area ()
      {
	ar=width * height / 2;
	cout<< "Area of triangle is "<< ar<<"\n";
      }
};

int main()
{
    Parallelogram *parallel, p;
    Rectangle rect;
    Triangle trgl;

    parallel=&p;
    parallel->set_values(3,2);
    parallel->area();

    parallel=&rect;
    parallel->set_values(4,5);
    parallel->area();

    parallel=&trgl;
    parallel->set_values(6,5);
    parallel->area();

return 0;
}
