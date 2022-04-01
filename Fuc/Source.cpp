#include<iostream>
#include<string>
#include<windows.h>
#include<time.h>
#include<algorithm>
using namespace std;

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);


//
// 1.
//void SetCursore(int x, WORD a, int y, string we)
//{
//	COORD t;
//	t.X = x;
//	t.Y = y;
//	SetConsoleCursorPosition(h, t);
//	SetConsoleTextAttribute(h, a);
//	cout << we << endl;
//}
//int main()
//{
//	int x, y;
//	WORD u;
//	string wr;
//	setlocale(0, "ru");
//	cout << "Введите координату Х - ";
//	cin >> x;
//	cout << "Введите координату Y - ";
//	cin >> y;
//	cout << "Введите цвет цифрой - ";
//	cin >> u;
//	cout << "Введите слово - ";
//	cin >> wr;
//	SetCursore(x, u, y, wr);
//
//	//вызов функции с передачей одного параметра 
//}

//2.

//int Line(int a, char b, WORD e, bool q)
//{
//	if (q == true)
//	{
//		for (int i = 0; i < a; i++)
//		{
//			SetConsoleTextAttribute(h, e);
//			cout << b;
//			
//		}
//	}
//	else
//	{
//		for (int i = 0; i < a; i++)
//		{
//			SetConsoleTextAttribute(h, e);
//			cout << b << endl;
//			
//		}
//	}
//
//	return(0);
//}
//
//int main()
//{
//	Line(20,'#',12,false);
//}


//3.

//void Rectangle(int width = 15, int height = 5, char symbol = '#', char symbol2 = '$', WORD sym1 = 12, WORD sym2 = 10)
//{
//	for (int y = 0; y < height; y++)
//	{
//		for (int x = 0; x < width; x++)
//		{
//			if ((y == 0) || (x == 0) || (y == height - 1) || (x == width - 1))
//			{
//				SetConsoleTextAttribute(h, sym1);
//				cout << symbol;
//			}
//			else {
//				SetConsoleTextAttribute(h, sym2);
//				cout << symbol2;
//			}
//		}
//		cout << endl;
//	}
//}
//
//int main()
//{
//	Rectangle(50,7,'@','%',5,16);
//	cout << endl;
//	Rectangle();
//}


//4

//void cubema(int x)
//{
//	cout << pow(x, 3) << endl;
//}
//
//void cube(int x, WORD e)
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int i = 0; i < x; i++)
//		{
//			SetConsoleTextAttribute(h, e);
//			cout << x;
//		}
//		cout << endl;
//	}
//}
//
//int main()
//{
//	int a;
//	cin >> a;
//	cube(a, 12);
//	cout << endl;
//	cubema(a);
//
//}


//5. 

//void Proverka(int a)
//{
//	int sum = 0;
//	int b = a;
//	for (int i = 1; i < a + 1; i++)
//	{
//		double b = a;
//		b = b / i;
//		if (b == (int)b) {
//			sum++;
//			cout << a << " без остатка делиться на " << i << endl;
//		}
//	}
//	if (sum != 2)
//	{
//		cout << "Число не простое!" << endl;
//	}
//	else
//	{
//		cout << "Число простое!" << endl;
//	}
//}
//
//
//int main()
//{
//	setlocale(0, "ru");
//	Proverka(30);
//}


//6.

//void Summa(int a, int b)
//{
//	int sum = 0;
//	for (int i = a + 1; i < b; i++)
//	{
//		sum += i;
//	}
//	cout << sum << " - сумма чисел диапазона между числами" << endl;
//}
//
//int main()
//{
//	setlocale(0, "ru");
//	Summa(5, 10);
//}


//7.


//bool visokosniy(int year)
//{
//	bool what = false;
//	if (year % 4 == 0 && year % 100 != 0 && year % 400 == 0)
//	{
//		what = true;
//	}
//    return what;
//}
//
//int chetday(int day, int month, int year)
//{
//	int  sumday = day;
//	switch (month - 1)
//	{
//    case 12: sumday += 31;
//    case 11: sumday += 30;
//    case 10: sumday += 31;
//    case  9: sumday += 30;
//    case  8: sumday += 31;
//    case  7: sumday += 31;
//    case  6: sumday += 30;
//    case  5: sumday += 31;
//    case  4: sumday += 30;
//    case  3: sumday += 31;
//    case  2: if (visokosniy(year)) sumday += 29; else sumday += 28;
//    case  1: sumday += 31;
//	}
//    sumday += (year - 1) * 365 + ((year - 1) / 4);
//    return sumday;
//}
//
//int Razni(int year1, int month1, int day1, int year2, int month2, int day2)
//{
//    int Difference = chetday(day1, month1, year1) - chetday(day2, month2, year2);
//    return Difference;
//}
//
//int main()
//{
//    setlocale(0, "ru");
//    int d1, d2, m1, m2, y1, y2;
//    cout << "Введите первую дату! \nПример : 01:01:1991 " << endl;
//    cin >> d1 >> m1 >> y1;
//    cout<<"Введите вторую дату! \nПример : 01:01:1992 " << endl; 
//    cin >> d2 >> m2 >> y2;
//
//    cout << "Разность между даттами - " << Razni(y1, m1, d1, y2, m2, d2) << " дней !" << endl;
//}


//8,


//int Massiv(int aLot[10])
//{
//	srand(time(0));
//
//	int summa = 0;
//
//	for (int i = 0; i < 10; i++)
//	{
//		aLot[i] = rand() % 21;
//		summa += aLot[i];
//	}
//	summa = summa / 10;
//	return summa;
//}
//
//int main()
//{
//	setlocale(0, "ru");
//	int a[10];
//	cout << "Среднее арифметическое элементов массива - " << Massiv(a) << endl;
//
//}


//9.

//void MinMaxMassive(int aLot[10])
//{
//	srand(time(0));
//	for (int i = 0; i < 10; i++)
//	{
//		aLot[i] = 1 + rand() % 31;
//		cout << aLot[i] << ", ";
//	}
//	int index1 = 0;
//	int index2 = 0;
//	int Min = aLot[0];
//	int Max = aLot[0];
//
//	for (int i = 1; i < 10; i++)
//	{
//		if (aLot[i] < Min)
//		{
//			Min = aLot[i];
//			index1 = i;
//		}
//		if (Max < aLot[i])
//		{
//			Max = aLot[i];
//			index2 = i;
//		}
//	}
//
//	cout << endl << "Min - " << Min << " Index -  "<< index1 << endl;
//	cout << "Max - " << Max << " Index - " << index2 << endl;
//}
//
//int main()
//{
//	int a[10];
//	MinMaxMassive(a);
//}

//10.

//void Massiv(int aLot[20])
//{
//	srand(time(0));
//	for (int i = 0; i < 20; i++)
//	{
//		aLot[i] = rand() % 31;
//		cout << aLot[i] << ", ";
//	}
//	cout << endl;
//	for (int i = 0; i < 20 / 2; i++)
//	{
//		aLot[i] += aLot[(20 - i) - 1];
//		aLot[(20 - i) - 1] = aLot[i] - aLot[(20 - i) - 1];
//		aLot[i] = aLot[i] - aLot[(20 - i) - 1];
//	}
//    //или 
//	//reverse(aLot, aLot + 20);
//	cout << endl;
//	for (int i = 0; i < 20; i++)
//	{
//		cout << aLot[i] << ", ";
//	}
//}
//
//int main()
//{
//	int a[20];
//	Massiv(a);
//
//}

//11.

//enum MASTI { Cherva, BUBI, TREFI, PIKI };
//enum FONKART { FON = 5 };
//enum DOSTO { SIX = 6, SEVEN = 7, EIGHT = 8, NINE = 9, TEN = 10, Jack = 11, Lady = 12, King = 13, Ace = 14 };
//
//void kartaGEN(int mast, int Dostoinstvo)
//{
//	const int width = 13;
//	const int height = 13;
//	char ar[height][width];
//
//	cout << endl;
//
//	for (int y = 0; y < height; y++)
//	{
//		for (int x = 0; x < width; x++)
//		{
//			ar[y][x] = FONKART::FON;
//
//			if (mast == 1 && y == 1 && x == 2 || mast == 1 && y == 11 && x == 11)
//			{
//				ar[y][x] = MASTI::Cherva;
//			}
//			else if (mast == 2 && y == 1 && x == 2 || mast == 2 && y == 11 && x == 11)
//			{
//				ar[y][x] = MASTI::BUBI;
//			}
//			else if (mast == 3 && y == 1 && x == 2 || mast == 3 && y == 11 && x == 11)
//			{
//				ar[y][x] = MASTI::TREFI;
//			}
//			else if (mast == 4 && y == 1 && x == 2 || mast == 4 && y == 11 && x == 11)
//			{
//				ar[y][x] = MASTI::PIKI;
//			}
//
//			switch (Dostoinstvo)
//			{
//			case 6:
//				ar[1][1] = DOSTO::SIX;
//				ar[11][10] = DOSTO::SIX;
//				if (mast == 1)
//				{
//					ar[3][3] = MASTI::Cherva;
//					ar[6][3] = MASTI::Cherva;
//					ar[9][3] = MASTI::Cherva;
//					ar[3][9] = MASTI::Cherva;
//					ar[6][9] = MASTI::Cherva;
//					ar[9][9] = MASTI::Cherva;
//				}
//				else if (mast == 2)
//				{
//					ar[3][3] = MASTI::BUBI;
//					ar[6][3] = MASTI::BUBI;
//					ar[9][3] = MASTI::BUBI;
//					ar[3][9] = MASTI::BUBI;
//					ar[6][9] = MASTI::BUBI;
//					ar[9][9] = MASTI::BUBI;
//				}
//				else if (mast == 3)
//				{
//					ar[3][3] = MASTI::TREFI;
//					ar[6][3] = MASTI::TREFI;
//					ar[9][3] = MASTI::TREFI;
//					ar[3][9] = MASTI::TREFI;
//					ar[6][9] = MASTI::TREFI;
//					ar[9][9] = MASTI::TREFI;
//				}
//				else if (mast == 4)
//				{
//					ar[3][3] = MASTI::PIKI;
//					ar[6][3] = MASTI::PIKI;
//					ar[9][3] = MASTI::PIKI;
//					ar[3][9] = MASTI::PIKI;
//					ar[6][9] = MASTI::PIKI;
//					ar[9][9] = MASTI::PIKI;
//				}
//				break;
//
//			case 7:
//				ar[1][1] = DOSTO::SEVEN;
//				ar[11][10] = DOSTO::SEVEN;
//				if (mast == 1)
//				{
//					ar[3][3] = MASTI::Cherva;
//					ar[4][6] = MASTI::Cherva;
//					ar[6][3] = MASTI::Cherva;
//					ar[9][3] = MASTI::Cherva;
//					ar[3][9] = MASTI::Cherva;
//					ar[6][9] = MASTI::Cherva;
//					ar[9][9] = MASTI::Cherva;
//				}
//				else if (mast == 2)
//				{
//					ar[3][3] = MASTI::BUBI;
//					ar[4][6] = MASTI::BUBI;
//					ar[6][3] = MASTI::BUBI;
//					ar[9][3] = MASTI::BUBI;
//					ar[3][9] = MASTI::BUBI;
//					ar[6][9] = MASTI::BUBI;
//					ar[9][9] = MASTI::BUBI;
//				}
//				else if (mast == 3)
//				{
//					ar[3][3] = MASTI::TREFI;
//					ar[4][6] = MASTI::TREFI;
//					ar[6][3] = MASTI::TREFI;
//					ar[9][3] = MASTI::TREFI;
//					ar[3][9] = MASTI::TREFI;
//					ar[6][9] = MASTI::TREFI;
//					ar[9][9] = MASTI::TREFI;
//				}
//				else if (mast == 4)
//				{
//					ar[3][3] = MASTI::PIKI;
//					ar[4][6] = MASTI::PIKI;
//					ar[6][3] = MASTI::PIKI;
//					ar[9][3] = MASTI::PIKI;
//					ar[3][9] = MASTI::PIKI;
//					ar[6][9] = MASTI::PIKI;
//					ar[9][9] = MASTI::PIKI;
//				}
//				break;
//
//			case 8:
//				ar[1][1] = DOSTO::EIGHT;
//				ar[11][10] = DOSTO::EIGHT;
//				if (mast == 1)
//				{
//					ar[3][3] = MASTI::Cherva;
//					ar[4][6] = MASTI::Cherva;
//					ar[6][3] = MASTI::Cherva;
//					ar[7][6] = MASTI::Cherva;
//					ar[9][3] = MASTI::Cherva;
//					ar[3][9] = MASTI::Cherva;
//					ar[6][9] = MASTI::Cherva;
//					ar[9][9] = MASTI::Cherva;
//				}
//				else if (mast == 2)
//				{
//					ar[3][3] = MASTI::BUBI;
//					ar[4][6] = MASTI::BUBI;
//					ar[6][3] = MASTI::BUBI;
//					ar[7][6] = MASTI::BUBI;
//					ar[9][3] = MASTI::BUBI;
//					ar[3][9] = MASTI::BUBI;
//					ar[6][9] = MASTI::BUBI;
//					ar[9][9] = MASTI::BUBI;
//				}
//				else if (mast == 3)
//				{
//					ar[3][3] = MASTI::TREFI;
//					ar[4][6] = MASTI::TREFI;
//					ar[6][3] = MASTI::TREFI;
//					ar[7][6] = MASTI::TREFI;
//					ar[9][3] = MASTI::TREFI;
//					ar[3][9] = MASTI::TREFI;
//					ar[6][9] = MASTI::TREFI;
//					ar[9][9] = MASTI::TREFI;
//				}
//				else if (mast == 4)
//				{
//					ar[3][3] = MASTI::PIKI;
//					ar[4][6] = MASTI::PIKI;
//					ar[6][3] = MASTI::PIKI;
//					ar[7][6] = MASTI::PIKI;
//					ar[9][3] = MASTI::PIKI;
//					ar[3][9] = MASTI::PIKI;
//					ar[6][9] = MASTI::PIKI;
//					ar[9][9] = MASTI::PIKI;
//				}
//				break;
//
//			case 9:
//				ar[1][1] = DOSTO::NINE;
//				ar[11][10] = DOSTO::NINE;
//				if (mast == 1)
//				{
//					ar[3][3] = MASTI::Cherva;
//					ar[5][3] = MASTI::Cherva;
//					ar[7][3] = MASTI::Cherva;
//					ar[9][3] = MASTI::Cherva;
//					ar[6][6] = MASTI::Cherva;
//					ar[3][9] = MASTI::Cherva;
//					ar[5][9] = MASTI::Cherva;
//					ar[7][9] = MASTI::Cherva;
//					ar[9][9] = MASTI::Cherva;
//				}
//				else if (mast == 2)
//				{
//					ar[3][3] = MASTI::BUBI;
//					ar[5][3] = MASTI::BUBI;
//					ar[7][3] = MASTI::BUBI;
//					ar[9][3] = MASTI::BUBI;
//					ar[6][6] = MASTI::BUBI;
//					ar[3][9] = MASTI::BUBI;
//					ar[5][9] = MASTI::BUBI;
//					ar[7][9] = MASTI::BUBI;
//					ar[9][9] = MASTI::BUBI;
//				}
//				else if (mast == 3)
//				{
//					ar[3][3] = MASTI::TREFI;
//					ar[5][3] = MASTI::TREFI;
//					ar[7][3] = MASTI::TREFI;
//					ar[9][3] = MASTI::TREFI;
//					ar[6][6] = MASTI::TREFI;
//					ar[3][9] = MASTI::TREFI;
//					ar[5][9] = MASTI::TREFI;
//					ar[7][9] = MASTI::TREFI;
//					ar[9][9] = MASTI::TREFI;
//				}
//				else if (mast == 4)
//				{
//					ar[3][3] = MASTI::PIKI;
//					ar[5][3] = MASTI::PIKI;
//					ar[7][3] = MASTI::PIKI;
//					ar[9][3] = MASTI::PIKI;
//					ar[6][6] = MASTI::PIKI;
//					ar[3][9] = MASTI::PIKI;
//					ar[5][9] = MASTI::PIKI;
//					ar[7][9] = MASTI::PIKI;
//					ar[9][9] = MASTI::PIKI;
//				}
//				break;
//
//			case 10:
//				ar[1][1] = DOSTO::TEN;
//				ar[11][10] = DOSTO::TEN;
//				if (mast == 1)
//				{
//					ar[3][3] = MASTI::Cherva;
//					ar[5][3] = MASTI::Cherva;
//					ar[7][3] = MASTI::Cherva;
//					ar[9][3] = MASTI::Cherva;
//					ar[4][6] = MASTI::Cherva;
//					ar[8][6] = MASTI::Cherva;
//					ar[3][9] = MASTI::Cherva;
//					ar[5][9] = MASTI::Cherva;
//					ar[7][9] = MASTI::Cherva;
//					ar[9][9] = MASTI::Cherva;
//				}
//				else if (mast == 2)
//				{
//					ar[3][3] = MASTI::BUBI;
//					ar[5][3] = MASTI::BUBI;
//					ar[7][3] = MASTI::BUBI;
//					ar[9][3] = MASTI::BUBI;
//					ar[4][6] = MASTI::BUBI;
//					ar[8][6] = MASTI::BUBI;
//					ar[3][9] = MASTI::BUBI;
//					ar[5][9] = MASTI::BUBI;
//					ar[7][9] = MASTI::BUBI;
//					ar[9][9] = MASTI::BUBI;
//				}
//				else if (mast == 3)
//				{
//					ar[3][3] = MASTI::TREFI;
//					ar[5][3] = MASTI::TREFI;
//					ar[7][3] = MASTI::TREFI;
//					ar[9][3] = MASTI::TREFI;
//					ar[4][6] = MASTI::TREFI;
//					ar[8][6] = MASTI::TREFI;
//					ar[3][9] = MASTI::TREFI;
//					ar[5][9] = MASTI::TREFI;
//					ar[7][9] = MASTI::TREFI;
//					ar[9][9] = MASTI::TREFI;
//				}
//				else if (mast == 4)
//				{
//					ar[3][3] = MASTI::PIKI;
//					ar[5][3] = MASTI::PIKI;
//					ar[7][3] = MASTI::PIKI;
//					ar[9][3] = MASTI::PIKI;
//					ar[4][6] = MASTI::PIKI;
//					ar[8][6] = MASTI::PIKI;
//					ar[3][9] = MASTI::PIKI;
//					ar[5][9] = MASTI::PIKI;
//					ar[7][9] = MASTI::PIKI;
//					ar[9][9] = MASTI::PIKI;
//				}
//				break;
//
//			case 11:
//				ar[1][1] = DOSTO::Jack;
//				ar[11][10] = DOSTO::Jack;
//				if (mast == 1) ar[6][6] = MASTI::Cherva;
//				else if (mast == 2) ar[6][6] = MASTI::BUBI;
//				else if(mast == 3) ar[6][6] = MASTI::TREFI;
//				else if (mast == 4) ar[6][6] = MASTI::PIKI;
//				
//				break;
//
//			case 12:
//				ar[1][1] = DOSTO::Lady;
//				ar[11][10] = DOSTO::Lady;
//				if (mast == 1) ar[6][6] = MASTI::Cherva;
//				else if (mast == 2) ar[6][6] = MASTI::BUBI;
//				else if (mast == 3) ar[6][6] = MASTI::TREFI;
//				else if (mast == 4) ar[6][6] = MASTI::PIKI;
//				break;
//
//			case 13:
//				ar[1][1] = DOSTO::King;
//				ar[11][10] = DOSTO::King;
//				if (mast == 1) ar[6][6] = MASTI::Cherva;
//				else if (mast == 2) ar[6][6] = MASTI::BUBI;
//				else if (mast == 3) ar[6][6] = MASTI::TREFI;
//				else if (mast == 4) ar[6][6] = MASTI::PIKI;
//				break;
//
//			case 14:
//				ar[1][1] = DOSTO::Ace;
//				ar[11][10] = DOSTO::Ace;
//				if (mast == 1) ar[6][6] = MASTI::Cherva;
//				else if (mast == 2) ar[6][6] = MASTI::BUBI;
//				else if (mast == 3) ar[6][6] = MASTI::TREFI;
//				else if (mast == 4) ar[6][6] = MASTI::PIKI;
//				break;					  
//			}
//		}
//	}
//
//	for (int y = 0; y < height; y++)
//	{
//		for (int x = 0; x < width; x++)
//		{
//			switch (ar[y][x])
//			{
//			case FONKART::FON:
//				SetConsoleTextAttribute(h, 15);
//				cout << (char)219;
//				break;
//
//			case MASTI::Cherva:
//				SetConsoleTextAttribute(h, 15 * 16 + 12);
//				cout << (char)3;
//				break;
//
//			case MASTI::BUBI:
//				SetConsoleTextAttribute(h, 15 * 16 + 12);
//				cout << (char)4;
//				break;
//
//			case MASTI::TREFI:
//				SetConsoleTextAttribute(h, 15 * 16 + 0);
//				cout << (char)5;
//				break;
//
//			case MASTI::PIKI:
//				SetConsoleTextAttribute(h, 15 * 16 + 0);
//				cout << (char)6;
//				break;
//
//			case DOSTO::SIX:
//				if (mast == 1 || mast == 2) SetConsoleTextAttribute(h, 15 * 16 + 12);
//				else SetConsoleTextAttribute(h, 15 * 16 + 0);
//				cout << (int)6;
//				break;
//
//			case DOSTO::SEVEN:
//				if (mast == 1 || mast == 2) SetConsoleTextAttribute(h, 15 * 16 + 12);
//				else SetConsoleTextAttribute(h, 15 * 16 + 0);
//				cout << (int)7;
//				break;
//
//			case DOSTO::EIGHT:
//				if (mast == 1 || mast == 2) SetConsoleTextAttribute(h, 15 * 16 + 12);
//				else SetConsoleTextAttribute(h, 15 * 16 + 0);
//				cout << (int)8;
//				break;
//
//			case DOSTO::NINE:
//				if (mast == 1 || mast == 2) SetConsoleTextAttribute(h, 15 * 16 + 12);
//				else SetConsoleTextAttribute(h, 15 * 16 + 0);
//				cout << (int)9;
//				break;
//
//			case DOSTO::TEN:
//				if (mast == 1 || mast == 2) SetConsoleTextAttribute(h, 15 * 16 + 12);
//				else SetConsoleTextAttribute(h, 15 * 16 + 0);
//				cout << (int)10;
//				break;
//
//			case DOSTO::Jack:
//				if (mast == 1 || mast == 2) SetConsoleTextAttribute(h, 15 * 16 + 12);
//				else SetConsoleTextAttribute(h, 15 * 16 + 0);
//				cout << "J";
//				break;
//
//			case DOSTO::Lady:
//				if (mast == 1 || mast == 2) SetConsoleTextAttribute(h, 15 * 16 + 12);
//				else SetConsoleTextAttribute(h, 15 * 16 + 0);
//				cout << "L";
//				break;
//
//			case DOSTO::King:
//				if (mast == 1 || mast == 2) SetConsoleTextAttribute(h, 15 * 16 + 12);
//				else SetConsoleTextAttribute(h, 15 * 16 + 0);
//				cout << "K";
//				break;
//
//			case DOSTO::Ace:
//				if (mast == 1 || mast == 2) SetConsoleTextAttribute(h, 15 * 16 + 12);
//				else SetConsoleTextAttribute(h, 15 * 16 + 0);
//				cout << "T";
//				break;
//			}
//		}
//
//		cout << endl;
//	}
//}
//
//int main()
//{
//	int a,b;
//	cin >> a;
//	cin >> b;
//	system("cls");
//	
//	kartaGEN(a,b);
//
//}