/*
У вас есть a монет стоимостью n
 и b монет стоимостью 1
. Вы всегда платите без сдачи, поэтому вам хочется узнать, существуют ли такие x
 и y
, что если вы возьмете x (0≤x≤a) монет стоимостью n
 и y (0≤y≤b) монет стоимостью 1
, суммарная стоимость всех выбранных монет составит S
.

Вам необходимо ответить на q
 независимых наборов входных данных.

Входные данные
Первая строка входных данных содержит одно целое число q
 (1≤q≤104) — количество наборов входных данных. Затем следуют q
 наборов входных данных.

Единственная строка набора входных данных содержит четыре целых числа a
, b
, n
 и S
 (1≤a,b,n,S≤109) — количество монет стоимостью n
, число монет стоимостью 1
, значение n
 и необходимая сумма.
*/



#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long a, b, n, s;
		cin >> a >> b >> n >> s;
		if (s % n <= b && a * n + b >= s)
			cout << "Yes" << endl;
		else
		
			cout << "No" << endl;
		
	}

}
/*
входные данные	
4
1 2 3 4
1 2 3 6
5 2 6 27
3 3 5 18
выходные данные	
YES
NO
NO

