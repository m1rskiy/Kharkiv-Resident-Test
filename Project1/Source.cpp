#include <iostream>
using namespace std;

int main()
{
	setlocale (LC_ALL, "ru");
	int answer, answer2, answer3, answer4, answer5, answer6;
	cout << "������������ ��� ���� �� ������ �������� � ����������." << endl <<
		"1) ����� ��� ������� ����� �������?" << endl <<
		"1. 1684" << endl <<
		"2. 1654" << endl <<
		"3. 1663" << endl <<
		"4. 1674 \n" << endl;

	cin >> answer;

	if (answer == 2)
	{
		cout << "����� ������! ����� ������� ������� � 1654 ����! \n" << endl;
	}
	else
	{
		cout << "����� ��������! ����� ������� ������� � 1654 ����! \n" << endl;
	}

	cout << "2) ��� ���������� ���� �� ���������� �������� ������� ��������, ������������� � ������ ������?" << endl <<
		"1. ����" << endl <<
		"2. �����" << endl <<
		"3. ����������" << endl <<
		"4. ������� \n" << endl;

	cin >> answer2;

	if (answer2 == 3)
	{
		cout << "����� ������! ���������� - ��� ���� �� ���������� �������� ������� ��������, ������������� � ������ ������ \n" << endl;
	}
	else
	{
		cout << "����� ��������! ���������� - ��� ���� �� ���������� �������� ������� ��������, ������������� � ������ ������ \n" << endl;
	}

	cout << "3) �������� �����, ��� ����������� ����� ��� �������� ������ ��������: " << endl <<
		"1. ������" << endl <<
		"2. �� ����� �� ������� �������� �������� ����" << endl <<
		"3. ���" << endl <<
		"4. ����� ���� \n" << endl;

	cin >> answer3;

	if (answer3 == 1)
	{
		cout << "����� ������! �� ������� ����������� ����� ��� �������� ������ �������� \n" << endl;
	}
	else
	{
		cout << "����� ��������! �� ������� ����������� ����� ��� �������� ������ �������� \n" << endl;
	}

	cout << "4) � ����� ���� ���� ����� ����� ������ ������ �������? (����� ���� 2 ���������� ������)" << endl <<
		"1. ������ ����" << endl <<
		"2. �����" << endl <<
		"3. �����������" << endl <<
		"4. �������� \n" << endl;

	cin >> answer4;

	if (answer4 == 2 || answer4 == 4)
	{
		cout << "����� ������! ������ ������ ������� ���� ����� ����� � ����� � �������� \n" << endl;
	}
	else
	{
		cout << "����� ��������! ������ ������ ������� ���� ����� ����� � ����� � �������� \n" << endl;
	}

	cout << "5) �������� ���� �� ������� ������ �������, ������� ����� ������: " << endl <<
		"1. �������� ����" << endl <<
		"2. ��������" << endl <<
		"3. �����" << endl <<
		"4. ��� ������ ������ ������� ����� ������! \n" << endl;

	cin >> answer5;

	if (answer5 == 4)
	{
		cout << "����� ������! ��� ������ ������ ������� ����� ������! \n" << endl;
	}
	else
	{
		cout << "����� ��������! ��� ������ ������ ������� ����� ������! \n" << endl;
	}

	cout << "����, ��������� ������!" << endl <<
		"6) ����� ����� �������� ��������� ����� ������� � ������?" << endl <<
		"1. ����������" << endl <<
		"2. ������ �����" << endl <<
		"3. ����������� �����" << endl <<
		"4. ������ ����� \n" << endl;

	cin >> answer6;

	if (answer6 == 1)
	{
		cout << "����� ������! ���������� - ����� ������ �������, ��������� ����� ������� � ������" << endl <<
			"�� ������ ����! ������� �� ���� ����������� �����, �����!" << endl;
	}
	else
	{
		cout << "����� ��������! ���������� - ����� ������ �������, ��������� ����� ������� � ������" << endl <<
			"�� ������ ����! ������� �� ���� ����������� �����, �����!" << endl;
	}
}