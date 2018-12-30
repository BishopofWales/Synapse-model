#ifndef CIRCLE_H
#define CIRCLE_H
class Circle
{
  private:
    float _xPos;
    float _yPos;
    float _radius;

  public:
    Circle(float radius, float xPos, float yPos);
    float getX();
    float getY();
    float getRadius();
};
#endif