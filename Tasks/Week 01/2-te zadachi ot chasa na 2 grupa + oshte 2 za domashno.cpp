// nachalo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()


//��� ���� ���������� ���� �� �������, �� �� �� � ���� ��� �� ����� �� ����� �� ���, ��� �� ��� ��� ���� ����������� :)

//1. �� �������� ���� ���������� �����, ��������� ��������� ����� �� ���������. ������: ����-25, �����-52

//2. ����������� ������������ <math.h> � ���������� ����������� �� ���������� ����� � ������� �� ���������� ���� ���� ����������� (��� �� �������� ������� �� ������������).
//���� ������������ ���� ���� ����������� �� ���� �� � ��� ��, ��� ��� float � double �� ���� ������.

{
   /* 
   //�������� ������ �� ������������ �� ������ ������ � � b:

    double width;
    double height;
    cout << "Enter width: " << endl;
    cin >> width;
    cout << "Enter height: " << endl;
    cin >> height;

    cout << height * width << endl;

	//���

    double area = height * width;
    cout << area;
    */

   
	//�� ������ ��������� �� ��� ����� � ��������� �������, �������� ������������ ����� ���:

    double x1, y1;
    cout << "Enter x1 coordinates: ";
    cin >> x1;
    cout << "Enter y1 coordinates: ";
    cin >> y1;
    double x2, y2;
    cout << "Enter x2 coordinates: ";
    cin >> x2;
    cout << "Enter y2 coordinates: ";
    cin >> y2;

    double ydiff = abs(y2 - y1);
    double xdiff = abs(x2 - x1);

    double distance = sqrt(pow(ydiff, 2) + pow(xdiff, 2));
    cout << distance;

    
    return 0;

}

