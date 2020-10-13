#pragma once

enum class Color : unsigned int
    {
        GREEN,PINK,YELLOW
    };


class Shape
{
public:
    virtual ~Shape() {}

    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
    virtual void print() const;

private:
    Color color = Color::PINK;
};
