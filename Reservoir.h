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
    // ����������� �� ���������
    Reservoir() : name_("") {}

    // ����������� � �����������
    Reservoir(const std::string& name, double width, double length, double maxDepth)
        : name_(name), width_(width), length_(length), maxDepth_(maxDepth) {}

    // ���������� (�� ��������� �� ���������, ��� ��� ��� ����������� ���������� ������)

    // ����������� �����������
    Reservoir(const Reservoir& other)
        : name_(other.name_), width_(other.width_), length_(other.length_), maxDepth_(other.maxDepth_) {}

    // ����� ��� ����������� ���������������� ������
    double CalculateVolume() const {
        return width_ * length_ * maxDepth_;
    }

    // ����� ��� ����������� ������� ������ �����������
    double CalculateSurfaceArea() const {
        return width_ * length_;
    }

    // ����� ��� �������� ���� �������
    bool IsSameType(const Reservoir& other) const {
        // ������: ���������� �������� ��������
        return name_ == other.name_;
    }

    // ����� ��� ����������� ��������
    Reservoir Copy() const {
        return *this;
    }

    // ������ set � get ��� ����� (�� ���������� ������������)
    void SetName(const std::string& name) {
        name_ = name;
    }

    std::string GetName() const {
        return name_;
    }
};
