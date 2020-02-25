/* Odev 1 AHMET KEMAL HACIOGLU  19120205050
Bu program 3-15 arasi bir tek sayi degeri alarak uygun yildiz seklini dondurur */

#include<iostream>

using namespace std;

//(y + 1) / 2 =max satýr bilgisi

void duz(int y)
{
	int i, j, k;//i satir counter,j whitespace counter,k yildiz counter(Tum programda boyle)
	
	for (i = 0;i <= (y + 1) / 2;++i)//satýr döngüsü
	{
		for (j = i;j <(y + 1) / 2;++j)//whitespace döngüsü
		{
			cout << " ";
		}
		for (k = 0;k < 2 * i - 1;++k)//yýldýz döngüsü
		{
			cout << "*";
		}
		cout << endl;
	}


}

void ters(int y)
{
	int i, j, k;//yukarida belirtildi
	int a = (y + 1) / 2;

	for (i = a;i >= 1;--i)//satýr döngüsü
	{
		for (j = 0;j < a-i;++j)//whitespace döngüsü
			cout << " ";
		
		for (int k = i; k <= 2 * i - 1; ++k)
			cout << "*";

		for (k = 0;k < i-1;++k)//yýldýz döngüsü
			cout << ("*");
	
		cout << endl;
	}



}

void elmas(int y)
{
	duz(y);
	ters(y);
	//fonksiyon çaðýrdým ayrýca döngü kullanmadým bence bu trick kabul edilir ;)
}


int main()
{
	int x, y;//x case degeri,y max kesit degeri(her yerde boyle)
	auto a = 0, b = 0, c = 0;

	cout <<"Lutfen Asagidaki Seceneklerden Ihtiyaciniz Olani Secin;" << endl << endl << "1:Duz Ucgen" << endl << "2:Ters Ucgen" << endl << "3:Elmas" << endl << "0:Cikis"<<endl<<endl;
	cin >> x;

	if (x == 1)//duz ucgen
	{
		for (a = 0;a <= 3;a++)
		{
			cout << "Ucgeniniz icin lutfen 3-15 arasi bir tek tam sayi degeri giriniz" << endl;
			cin >> y;

			if ((y < 16 && y > 2) && (y % 2 == 1))//istenilen sarti saglar
			{
				duz(y);
			}

			else
			{
				cout << "Gecersiz Deger Girdiniz";
				++a;
			}
			return 0;
		}

	}

	if (x == 2)//ters ucgen
	{
		for (a = 0;a <= 3;a++)
		{
			cout << "Ucgeniniz icin lutfen 3-15 arasi bir tek tam sayi degeri giriniz" << endl;
			cin >> y;

			if ((y < 16 && y > 2) && (y % 2 == 1))//istenilen sarti saglar
			{
				ters(y);
			}

			else
			{
				cout << "Gecersiz Deger Girdiniz";
				++a;
			}
			return 0;
		}
	}

	if (x == 3)//elmas
	{
		for (a = 0;a <= 3;a++)
		{
			cout << "Ucgeniniz icin lutfen 3-15 arasi bir tek tam sayi degeri giriniz" << endl;
			cin >> y;

			if ((y < 16 && y > 2) && (y % 2 == 1))//istenilen sarti saglar
			{
				elmas(y);
			}

			else
			{
				cout << "Gecersiz Deger Girdiniz";
				++a;
			}
			return 0;
		}
	}

	if (x == 0)//cikis
		return 0;

}
