# include <iostream>
using namespace std;

void swap(int, int);

int main()
{
	int a = 1,  b = 3;
	swap(a, b);
	cout << "a = " << a << ";" << "b = " << b << endl;
	system("pause");
	return 0;
}

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << ";" << "b = " << b << endl;

}