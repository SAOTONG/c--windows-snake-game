#ifndef POINT_H
#define POINT_H

class Point
{
public:
    Point(){}//无参构造函数
    Point(const int x, const int y) : x(x), y(y) {}//Point类的构造函数
    void Print();
    void PrintCircular();
    void Clear();
    void ChangePosition(const int x, const int y);
    bool operator== (const Point& point) { return (point.x == this->x) && (point.y == this->y); }
    int GetX(){ return this->x; }
    int GetY(){ return this->y; }
private:
    int x, y;
};
#endif // POINT_H
