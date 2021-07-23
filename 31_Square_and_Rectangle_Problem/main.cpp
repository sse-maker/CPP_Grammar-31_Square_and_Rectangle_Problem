//
//  main.cpp
//  31_Square_and_Rectangle_Problem
//
//  Created by 세광 on 2021/07/23.
//

// 정사각형 - 직사각형 문제 (객체 지향 프로그래밍의 문제점)

#include <iostream>

using namespace std;

// immutable class: 모든 멤버 변수가 const로 선언되어 있는 class
class Rectangle {
public:
    Rectangle(double a, double b) : a(a), b(b) {}
    Rectangle ResizeX(double k) const { return Rectangle(a * k, b); }
    Rectangle ResizeY(double k) const { return Rectangle(a, b * k); }
    double GetA() const { return a; }
    double GetB() const { return b; }
    
private:
    const double a, b;
};

class Square : public Rectangle {
public:
    Square(double a) : Rectangle(a, a) {}
};

int main() {
    Square s(10);
    Rectangle r = s.ResizeX(2);
    cout << s.GetA() << endl;
    cout << s.GetB() << endl;
    cout << r.GetA() << endl;
    cout << r.GetB() << endl;
}
