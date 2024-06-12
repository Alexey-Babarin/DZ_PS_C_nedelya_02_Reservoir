#pragma once
#include <iostream>
#include <string>
class Reservoir
{
private:
    std::string name_;
    double width_ = 0;
    double length_ = 0;
    double maxDepth_ = 0;
public:
    // Конструктор по умолчанию
    Reservoir() : name_("") {}

    // Конструктор с параметрами
    Reservoir(const std::string& name, double width, double length, double maxDepth)
        : name_(name), width_(width), length_(length), maxDepth_(maxDepth) {}

    // Деструктор (по умолчанию не требуется, так как нет динамически выделенной памяти)

    // Конструктор копирования
    Reservoir(const Reservoir& other)
        : name_(other.name_), width_(other.width_), length_(other.length_), maxDepth_(other.maxDepth_) {}

    // Метод для определения приблизительного объема
    double CalculateVolume() const {
        return width_ * length_ * maxDepth_;
    }

    // Метод для определения площади водной поверхности
    double CalculateSurfaceArea() const {
        return width_ * length_;
    }

    // Метод для проверки типа водоема
    bool IsSameType(const Reservoir& other) const {
        // Пример: сравниваем названия водоемов
        return name_ == other.name_;
    }

    // Метод для копирования объектов
    Reservoir Copy() const {
        return *this;
    }

    // Методы set и get для полей (на усмотрение разработчика)
    void SetName(const std::string& name) {
        name_ = name;
    }

    std::string GetName() const {
        return name_;
    }
};
