#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	cout << "1 ����" << endl;
	double x=0.9, y=2, z, q, t=6.96*pow(10,-5);
	double i;
	for(int n=0; n<3; n++)
	{
		cout << "������� �������� i" << endl;
		cin >> i;
		z = t * y * y -sqrt(i+x)*tan(y);
		q = sqrt(z * z + 5 * z) * log(y);
		cout << "z= " << z << endl;
		cout << "q= " << q << endl;
	}
	cout << "������ ����"<<endl;
	for (i = 1; i <= 2; i = i + 0.2)
	{
		z = t * y * y - sqrt(i + x) * tan(y);
		q = sqrt(z * z + 5 * z) * log(y);
		cout << "z= " << z << endl;
		cout << "q= " << q << endl;
	}
	cout << "������ ����" << endl;
	for(int i=2;i<=3; i=i+0.2)
	{
		for (int n = 0; n < 3; n++)
		{
			cout << "������� �������� x" << endl;
			cin >> x;
			z = t * y * y - sqrt(i + x) * tan(y);
			q = sqrt(z * z + 5 * z) * log(y);
			cout << "z= " << z << endl;
			cout << "q= " << q << endl;
		}
	}

}