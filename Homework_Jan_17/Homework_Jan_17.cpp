﻿//1. Написать игру «Угадай число». Пользователь мысленно загадывает число от 0 до 1000, компьютер 
//отгадывает его за минимальное количество попыток.

//#include <iostream>
//#include <ctime>
//using namespace std;
//int main()
//{
//	srand(time(NULL));
//	int N = rand() %1000 + 1;
//	int M=500;
//	int H;
//	int L=500;
//	int i = 0;
//	cout << "Guess my number" << N << "\n";
//	do
//	{
//		i++;
//		if (M < N && i > 12)
//		{
//			M = M + 1;
//		}
//		else if (M > N && i > 12)
//		{
//			M = M - 1;
//		}
//		else if (M < N )
//		{
//			M = M + L;
//			L = L / 2;
//		}
//		else if (M > N)
//		{
//			M = M - L;
//			L = L / 2;
//		}
//	} while (M!=N);
//	if (i == 1)
//	{
//		cout << "Cheater(((";
//	}
//	else if (i <= 8)
//	{
//		cout << "Very lucky number " << N << " in " << i << " tries";
//	}
//	else if (i>1)
//	{
//		cout << "Just lucky number " << N << " in " << i << " tries";
//	}	
//}

//2. Показать номера и общее количество всех счастливых трамвайных билетов с шестизначными номерами.

//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "Enter 6 digits for number. Let's find out if it is lucky\n";
//	int ticket = 0;
//	int i = 0;
//	int e=0;
//	do
//	{
//		//cin >> ticket;
//		
//		int six = ticket / 100000 % 10;
//		int five = ticket / 10000 % 10;
//		int four = ticket / 1000 % 10;
//		int three = ticket / 100 % 10;
//		int two = ticket / 10 % 10;
//		int one = ticket % 10;
//		ticket += 1;
//		if ((six + five + four) == (three + two + one))
//		{
//			e++;
//			cout << e << " - " << six << five << four << three << two << one << "\n";
//		}
//	} while (ticket < 1000000);
//}

//3. Показать на экран все восьмизначные числа, цифры в которых не повторяются.
//Эти числа должны делиться на 12345 без остатка.Показать общее количество найденных чисел.

//#include <iostream>
//using namespace std;
//int main()
//{
//    int n = 10000000;
//    int e = 1;
//    int n1 = n & 10;
//    int n2 = n / 10 % 10;
//    int n3 = n / 100 % 10;
//    int n4 = n / 1000 % 10;
//    int n5 = n / 10000 % 10;
//    int n6 = n / 100000 % 10;
//    int n7 = n / 1000000 % 10;
//    int n8 = n / 10000000 % 10;
//    do
//    {
//        if (n % 12345 == 0
//            && (n1 != n2 && n1 != n3 && n1 != n4 && n1 != n5 && n1 != n6 && n1 != n7 && n1 != n8
//                && n2 != n1 && n2 != n3 && n2 != n4 && n2 != n5 && n2 != n6 && n2 != n7 && n2 != n8
//                    && n3 != n1 && n3 != n2 && n3 != n4 && n3 != n5 && n3 != n6 && n3 != n7 && n3 != n8
//                        && n4 != n1 && n4 != n2 && n4 != n3 && n4 != n5 && n4 != n6 && n4 != n7 && n4 != n8
//                            && n5 != n1 && n5 != n2 && n5 != n3 && n5 != n4 &&  n5 != n6 && n5 != n7 && n5 != n8
//                                && n6 != n1 && n6 != n2 && n6 != n3 && n6 != n4 && n6 != n5 &&  n6 != n7 && n6 != n8
//                                    && n7 != n1 && n7 != n2 && n7 != n3 && n7 != n4 && n7 != n5 && n7 != n6 &&  n7 != n8
//                                        && n8 != n1 && n8 != n2 && n8 != n3 && n8 != n4 && n8 != n5 && n8 != n6 && n8 != n7 ))
//        {
//            cout << e << " - " << n << "\n";
//            e++;
//        }        n += 1;
//
//    } while (n < 99999999);
//   /* do
//    {
//        if (n % 12345 == 0
//            && (n % 10 != n / 10 % 10 && n % 10 != n / 100 % 10 && n % 10 != n / 1000 % 10 && n % 10 != n / 10000 % 10 && n % 10 != n / 100000 % 10 && n % 10 != n / 1000000 % 10 && n % 10 != n / 10000000 % 10
//                && n / 10 % 10 != n % 10 && n / 10 % 10 != n / 100 % 10 && n / 10 % 10 != n / 1000 % 10 && n / 10 % 10 != n / 10000 % 10 && n / 10 % 10 != n / 100000 % 10 && n / 10 % 10 != n / 1000000 % 10 && n / 10 % 10 != n / 10000000 % 10
//                && n / 100 % 10 != n % 10 && n / 100 % 10 != n / 10 % 10 && n / 100 % 10 != n / 1000 % 10 && n / 100 % 10 != n / 10000 % 10 && n / 100 % 10 != n / 100000 % 10 && n / 100 % 10 != n / 1000000 % 10 && n / 100 % 10 != n / 10000000 % 10
//                && n / 1000 % 10 != n % 10 && n / 1000 % 10 != n / 10 % 10 && n / 1000 % 10 != n / 100 % 10 && n / 1000 % 10 != n / 10000 % 10 && n / 1000 % 10 != n / 100000 % 10 && n / 1000 % 10 != n / 1000000 % 10 && n / 1000 % 10 != n / 10000000 % 10
//                && n / 10000 % 10 != n % 10 && n / 10000 % 10 != n / 10 % 10 && n / 10000 % 10 != n / 100 % 10 && n / 10000 % 10 != n / 1000 % 10 && n / 10000 % 10 != n / 100000 % 10 && n / 10000 % 10 != n / 1000000 % 10 && n / 10000 % 10 != n / 10000000 % 10
//                && n / 100000 % 10 != n % 10 && n / 100000 % 10 != n / 10 % 10 && n / 100000 % 10 != n / 100 % 10 && n / 100000 % 10 != n / 1000 % 10 && n / 100000 % 10 != n / 10000 % 10 && n / 100000 % 10 != n / 1000000 % 10 && n / 100000 % 10 != n / 10000000 % 10
//                && n / 1000000 % 10 != n % 10 && n / 1000000 % 10 != n / 10 % 10 && n / 1000000 % 10 != n / 100 % 10 && n / 1000000 % 10 != n / 1000 % 10 && n / 1000000 % 10 != n / 10000 % 10 && n / 1000000 % 10 != n / 100000 % 10 && n / 1000000 % 10 != n / 10000000 % 10
//                && n / 10000000 % 10 != n % 10 && n / 10000000 % 10 != n / 10 % 10 && n / 10000000 % 10 != n / 100 % 10 && n / 10000000 % 10 != n / 1000 % 10 && n / 10000000 % 10 != n / 10000 % 10 && n / 10000000 % 10 != n / 100000 % 10 && n / 10000000 % 10 != n / 1000000 % 10))
//        {
//            cout << e << " - " << n << "\n";
//            e++;
//        }
//        n += 1;
//    } while (n < 99999999);*/
//
//do
////    {
////        if (n % 12345 == 0
////            && (n1 != n2 && n1 != n3 && n1 != n4 && n1 != n5 && n1 != n6 && n1 != n7 && n1 != n8
////                && n2 != n1 && n2 != n3 && n2 != n4 && n2 != n5 && n2 != n6 && n2 != n7 && n2 != n8
////                    && n3 != n1 && n3 != n2 && n3 != n4 && n3 != n5 && n3 != n6 && n3 != n7 && n3 != n8
////                        && n4 != n1 && n4 != n2 && n4 != n3 && n4 != n5 && n4 != n6 && n4 != n7 && n4 != n8
////                            && n5 != n1 && n5 != n2 && n5 != n3 && n5 != n4 &&  n5 != n6 && n5 != n7 && n5 != n8
////                                && n6 != n1 && n6 != n2 && n6 != n3 && n6 != n4 && n6 != n5 &&  n6 != n7 && n6 != n8
////                                    && n7 != n1 && n7 != n2 && n7 != n3 && n7 != n4 && n7 != n5 && n7 != n6 &&  n7 != n8
////                                        && n8 != n1 && n8 != n2 && n8 != n3 && n8 != n4 && n8 != n5 && n8 != n6 && n8 != n7 ))
////        {
////            cout << e << " - " << n << "\n";
////            e++;
////        }        n += 1;
////
////    } while (n < 99999999);
//    {
//        cout << "Not so much! \n";
//    }
//}
//#include <iostream> 
//using namespace std;
//
//int main()
//{
//	long long number1 = 00000000;
//
//	int a10;
//	int a11;
//	int a12;
//	int a13;
//	int a14;
//	int a15;
//	int a16;
//
//	int b1 = 0;
//
//	do
//	{
//		a10 = number1 % 10;
//		a11 = number1 / 10 % 10;
//		a12 = number1 / 100 % 10;
//		a13 = number1 / 1000 % 10;
//		a14 = number1 / 10000 % 10;
//		a15 = number1 / 100000 % 10;
//		a16 = number1 / 1000000;
//
//		if (a10 != a11 && a10 != a12 && a10 != a13 && a10 != a14 && a10 != a15 && a10 != a16
//			&& a11 != a12 && a11 != a13 && a11 != a14 && a11 != a15 && a11 != a16
//			&& a12 != a13 && a12 != a14 && a12 != a15 && a12 != a16
//			&& a13 != a14 && a13 != a15 && a13 != a16
//			&& a14 != a15 && a14 != a16
//			&& a15 != a16
//			&& number1 % 12345 == 0)
//		{
//			b1++;
//			cout << number1 << "\n";
//		}
//
//		number1++;
//
//	} while (number1 <= 99999999);
//
//	cout << "anount " << b1 << "\n";
//}

//4. Реализовать игровую программу «Однорукий бандит»(игровой автомат).
//В начале игры пользователю выдаётся 5000 кредитов. Случайным образом на барабанчиках выпадает три значения от 0 до 7.
//Призовые комбинации : 0 0 0, 1 1 1, 2 2 2, 3 3 3, 4 4 4, 5 Х Х, 5 5 Х, 5 5 5, 7 Х Х, 7 7 Х, 7 7 7 
//(на месте Х может быть любая цифра).Штрафная комбинация : 6 6 6. Все остальные комбинации нейтральные.
//В любом случае, за показ новой комбинации с игрового счёта пользователя снимается определённая фиксированная сумма денег.
//Необходимо назначить различные вознаграждения за выпадение призовых комбинаций.
//Комбинации можно показывать через MessageBoxA, например. Зациклить работу приложения. 
//Игра заканчивается поражением, если деньги закончились.Игра заканчивается победой, если выпадает джек - пот(7 7 7).

//#include <iostream>
//#include <ctime>
//using namespace std;
//int main()
//{
//	srand(time(NULL));
//	int c = 5000;//credits
//	int v = 0;//activate roll with number. aoutomatic with letter
//	int coin = 500;//cost of game
//	int roll=1;
//	cout << "TRY YOUR LUCK\n";
//	do
//	{
//		cin >> v;
//		int x = rand() % 8;
//		int y = rand() % 8;
//		int z = rand() % 8;
//		cout << x << " | " << y << " | " << z << "\n";
//		
//		c -= coin;
//		if (x == 7 && y == 7 && z == 7)
//		{
//			cout << "You won Jackpot!!!\n";
//			return 0;
//		}
//		else if ((x == 7 && y == 7 && z != 7) || (x == 7 && y != 7 && z == 7) || (x != 7 && y == 7 && z == 7))
//		{
//			c += 2000;
//			cout << "WON WON WON\n";
//		}
//		else if ((x == 7 && y != 7 && z != 7) || (x != 7 && y == 7 && z != 7) || (x != 7 && y != 7 && z == 7))
//		{
//			c += 1000;
//			cout << "WON WON WON\n";
//		}
//		else if (x == 6 && y == 6 && z != 7)
//		{
//			c -= 1000;
//			cout << "WON WON WON\n";
//		}
//		else if ((x == 5 && y == 5 && z != 5) || (x == 5 && y != 5 && z == 5) || (x != 5 && y == 5 && z == 5))
//		{
//			c += 1000;
//			cout << "WON WON WON\n";
//		}
//		else if ((x == 5 && y != 5 && z != 5) || (x != 5 && y == 5 && z != 5) || (x != 5 && y != 5 && z == 5))
//		{
//			c += 500;
//			cout << "WON WON WON\n";
//		}
//		else if (x == 4 && y == 4 && z == 4)
//		{
//			c += 400;
//			cout << "WON WON WON\n";
//		}
//		else if (x == 3 && y == 3 && z == 3)
//		{
//			c += 300;
//			cout << "WON WON WON\n";
//		}
//		else if (x == 2 && y == 2 && z == 2)
//		{
//			c += 200;
//			cout << "WON WON WON\n";
//		}
//		else if (x == 1 && y == 1 && z == 1)
//		{
//			c += 150;
//			cout << "WON WON WON\n";
//		}
//		else if (x == 0 && y == 0 && z == 0)
//		{
//			c += 100;
//			cout << "WON WON WON\n";
//		}
//		else
//		{
//			cout << "Next time. Luck around corner!\n";
//		}
//
//		cout << c << " credits\n";
//		roll++;
//	} while (c>coin);
//	cout << "Hungry cats are waiting at home. You lost in " << roll << " rolls";
//}

//5. Королю нужно убить дракона, но средства его казны – ограничены.
//Нужно создать программу, которая поможет рассчитать минимальное количество копейщиков, которое необходимо, 
//чтобы убить дракона.Данные очков здоровья и атаки дракона и одного копейщика вводятся с клавиатуры.
//Защиту, удачу, мораль, меткость и т.п.не учитывать.
//Копейщики наносят удар первыми(общий нанесённый урон – это сумма атак всех живых копейщиков).
//Если атака дракона превышает значение очков здоровья копейщика(например, у копейщика хп 10, а атака дракона - 15), 
//то копейщик погибает, а оставшийся урон действует на оставшихся в живых копейщиков.
//Например, жизнь дракона 500, атака 55, жизнь одного копейщика 10, атака 10, а количество копейщиков – 20 
//http:heroes.thelazy.net/wiki/List_of_creatures  
//Лог боя для данного примера должен выглядеть так:
//	Копейщики атакуют(урон 200) – у дракона осталось 300 очков здоровья.
//	Дракон атакует(урон 55) – осталось 15 копейщиков, один из которых ранен(осталось 5 очков здоровья).
//	Копейщики атакуют(урон 150) – у дракона осталось 150 очков здоровья.
//	Дракон атакует(урон 55) – осталось 9 копейщиков.
//	Копейщики атакуют(урон 90) – у дракона осталось 60 очков здоровья.
//	Дракон атакует(урон 55) – осталось 4 копейщика, один из которых ранен(осталось 5 жизней).
//	Копейщики атакуют(урон 40) – у дракона осталось 20 очков здоровья.
//	Дракон атакует и побеждает.

#include <iostream>
#include <windows.h> 
using namespace std;
int main()
{
	system("Color 3F");
	cout << "Dragons VS Lancets\n";
	
	/*cout << "Enter the HP of Dragon - \n"; // open this part for hardcore game
	int DragonHP = 500;
	cin >> DragonHP;
	cout << "Dragon Strength - \n";
	int DragonAtk = 55;
	cin >> DragonAtk;
	cout << "Lancer's HP - \n";
	int LancerHP = 10;
	cin >> LancerHP;
	cout << "Lancer's Attacking strength - \n";
	int LancerAtk = 10;
	cin >> LancerAtk;
	cout << "Quantity of Lancets - \n";
	int Lancer = 20;
	cin >> Lancer;
	int ArmyHP = LancerHP * Lancer;
	int round = 0;*/
	
	int DragonHP = 500;//Close this part for hardcore game
	int DragonAtk = 55;
	int LancerHP = 10;
	int LancerAtk = 10;
	int Lancer = 20;
	int ArmyHP = LancerHP * Lancer;
	int round = 0;

	do
	{
		int c = 1;
		cin >> c;// Press digit for one step. Letter for auto
		system("Color 5F");
		cout << "Big Dragon has - " << DragonHP << " HP.\nLancets deal damage " << LancerAtk*Lancer << ".\n";
		if (DragonHP > LancerAtk * Lancer)// If Dragon survives attack
		{
			DragonHP = DragonHP - LancerAtk * Lancer;
			cout << "Dragon has - " << DragonHP << "HP.\n";
		}
		else // If Dragon dies
		{
			cout << "Dragon SLAUGHTERED! King Forever. Tactician!\n";
			return 0;
		}
		// Dragon's turn to attack
		cin >> c;
		system("Color 4F");
		cout << "Dragon Attaks with damage of - " << DragonAtk << " !!!\n";
		if (ArmyHP <= DragonAtk) //All lancets die
		{
			cout << "King was greedy. All lancer are dead...\n";
		}
		else //Lancets survive
		{
			ArmyHP -= DragonAtk;
			Lancer = ArmyHP / LancerHP;

			if (ArmyHP % LancerHP != 0)// If one lancet is injured. But fights strong - foll power
			{
				LancerAtk * (Lancer++);
				cout << Lancer << " Survived Lancers.\n";
				cout << "One injured lancer with " << ArmyHP % LancerHP << " HP\n";
			}
		}
	} while (DragonHP >= 0);
	cout << "King Forever. Tactician!\n";
}
