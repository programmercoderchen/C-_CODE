//�ֽ�����
//#include <iostream>
//using namespace std;
//
//int sort(int x, int y)
//{
//	int z = 0;
//	int c = 0;
//	int count = 0;
//	for (int i = 0; i < x-1; i++)
//	{
//		c = y / 10 % 10;
//		y /= 10;
//		if (c == 2)
//		{
//			count++;
//		}
//	}
//	if (y % 10 == 2)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	cout << "��������Ҫ�ֽ������λ����" << endl;
//	cin >> i;
//	cout << "��������Ҫ�ֽ������" << endl;
//	cin >> j;
//	count = sort(i, j);
//	cout << "���ֵ�2�ĸ����ǣ�" << count << endl;
//	return 0;
//}
//�⳵ϵͳ
//#include<string>
//#include<iostream>
//#include<iomanip>
//#include<windows.h>
//using namespace std;
//
////���ࣺ��
//class Vehicle
//{
//public:
//	int veh_count = 0;//���ı��
//	double veh_money = 0;//�����շ���
//	int veh_hiredays = 0;//��������ʱ��
//	string veh_kind;//��������
//	int car_limitnum = 0;//��������
//	int car_limitkilo = 0;//���ػ���
//};
//Vehicle passenger_car;
//Vehicle truck_car;
//Vehicle pickup_car;
//int i, j, k;
//void init()
//{
//	//�ͳ�
//	passenger_car.veh_count = 1;
//	passenger_car.veh_money = 200;
//	passenger_car.veh_kind = "�ͳ�";
//	passenger_car.car_limitnum = 20;
//	passenger_car.car_limitkilo = 0;
//	//����
//	truck_car.veh_count = 2;
//	truck_car.veh_money = 300;
//	truck_car.veh_kind = "����";
//	truck_car.car_limitnum = 0;
//	truck_car.car_limitkilo = 1;
//	//Ƥ����
//	pickup_car.veh_count = 3;
//	pickup_car.veh_money = 400;
//	pickup_car.veh_kind = "Ƥ����";
//	pickup_car.car_limitnum = 15;
//	pickup_car.car_limitkilo = 1;
//}
//void check(int a, int car_count)//a�����ж��Ƿ������øó���Ϊ��������õĳ�������;car_countΪ���ı��
//{
//	if (a > 0)
//	{
//		switch (car_count)
//		{
//		case 1:cout << "�ͳ�  "; break;
//		case 2:cout << "����  "; break;
//		case 3:cout << "Ƥ����  "; break;
//		}
//	}
//}
//void clearscreen()//�������
//{
//	system("cls");
//}
//void mainorder() //������
//{
//	cout << "---------------------------------" << endl;
//	cout << "    ��ӭʹ��***�����⳵ϵͳ        " << endl;
//	cout << "---------------------------------" << endl;
//	cout << "        ��1��ѯ������Ϣ" << endl;
//	cout << "        ��2�����⳵����" << endl;
//}
//void press_one_order()
//{
//	cout << "���    ��������    �շ���(Ԫ)    ��������    ���ػ���(��)" << endl;
//	//�ͳ�
//	cout << " " << passenger_car.veh_count << "      " << passenger_car.veh_kind << "        " << passenger_car.veh_money
//		<< "           " << passenger_car.car_limitnum << "          " << passenger_car.car_limitkilo << endl;
//	//����
//	cout << " " << truck_car.veh_count << "      " << truck_car.veh_kind << "        " << truck_car.veh_money
//		<< "           " << truck_car.car_limitnum << "           " << truck_car.car_limitkilo << endl;
//	//Ƥ����
//	cout << " " << pickup_car.veh_count << "      " << pickup_car.veh_kind << "      " << pickup_car.veh_money
//		<< "           " << pickup_car.car_limitnum << "          " << pickup_car.car_limitkilo << endl;
//
//	cout << "��������������" << endl;
//}
//void display_bill()//��setw()��ʹ��������
//{
//	cout << "���    ��������    ����(Ԫ)    ������    ������(��)" << endl;
//	//�ͳ�
//	cout << " " << passenger_car.veh_count << "      " << passenger_car.veh_kind << "    " << setw(12) << i * passenger_car.veh_money * passenger_car.veh_hiredays
//		<< setw(10) << i * passenger_car.car_limitnum << setw(14) << i * passenger_car.car_limitkilo << endl;
//	//����
//	cout << " " << truck_car.veh_count << "      " << truck_car.veh_kind << "    " << setw(12) << j * truck_car.veh_money * truck_car.veh_hiredays
//		<< setw(10) << j * truck_car.car_limitnum << setw(14) << j * truck_car.car_limitkilo << endl;
//	//Ƥ����
//	cout << " " << pickup_car.veh_count << "      " << pickup_car.veh_kind << "  " << setw(12) << k * pickup_car.veh_money * pickup_car.veh_hiredays
//		<< setw(10) << k * pickup_car.car_limitnum << setw(14) << k * pickup_car.car_limitkilo << endl;
//	//�ܼ�
//	cout << "�ܼ�    " << "--------" << setw(12) << i * passenger_car.veh_money * passenger_car.veh_hiredays
//		+ j * truck_car.veh_money * truck_car.veh_hiredays + k * pickup_car.veh_money * pickup_car.veh_hiredays
//		<< setw(10) << i * passenger_car.car_limitnum + j * truck_car.car_limitnum + k * pickup_car.car_limitnum
//		<< setw(14) << i * passenger_car.car_limitkilo + j * truck_car.car_limitkilo + k * pickup_car.car_limitkilo << endl;
//	//���⳵������
//	cout << "�����õĳ���Ϊ��";
//	check(i, 1);//���ͳ�
//	check(j, 2);//�쳵����
//	check(k, 3);//���Ƥ����
//	cout << endl;
//	cout << "��������������" << endl;
//}
//
//int main()
//{
//	int num;
//	init();
//	while (1)
//	{
//		clearscreen();
//		mainorder();
//		cin >> num;
//		if (num == 1)
//		{
//			clearscreen();
//			press_one_order();
//			cin >> num;
//			if (num == 3)
//			{
//				clearscreen();
//				mainorder();
//			}
//			num = 0;
//		}
//		if (num == 2)
//		{
//			clearscreen();
//			cout << "����������Ҫ���ÿͳ���������Ƥ������������";
//			cin >> i;
//			cin >> j;
//			cin >> k;
//			cout << endl;
//			cout << "����������Ҫ���ÿͳ���������Ƥ������������";
//			cin >> passenger_car.veh_hiredays;
//			cin >> truck_car.veh_hiredays;
//			cin >> pickup_car.veh_hiredays;
//			cout << endl;
//			cout << "�����⳵�嵥Ϊ��" << endl;
//			display_bill();
//			cin >> num;
//			if (num == 3)
//			{
//				clearscreen();
//				mainorder();
//			}
//			num = 0;
//		}
//	}
//}
//Դ����
//#include<iostream> 
//#include<cstring>
//#include<vector>
//#include<fstream>
//#include"list"
//using namespace std;
//class Data// ������ 
//{
//public:
//	void set_time();
//	void show_time();
//private:
//	bool is_time(int, int, int);
//	int year;
//	int month;
//	int day;
//};
//void Data::set_time()
//{
//	char c1, c2;
//	cout << "����������(��ʽ��-��-��)" << endl;
//	while (1)
//	{
//		cin >> year >> c1 >> month >> c2 >> day;
//		if (c1 != '-' || c2 != '-')
//			cout << "��ʽ����ȷ������������" << endl;
//		else
//			break;
//	}
//}
//void Data::show_time()
//{
//	cout << year << "-" << month << "-" << day << endl;
//}
//class Pet
//{
//public:
//	PetAnimals(){}
//	PetAnimals(string Number, string Name, string Age, string Weight, string Type,
//		string Nature, string Price, string People)
//	{
//		Cnumber = Number;//�����ţ�00��01��02 ...
//		Cname = Name;//��������:���� 
//		Cage = Age;//�������䣺20��14
//		Cweight = Weight;//�������������20��45 
//		Ctype = Type;//�������ࣺcat or dog... 
//		Cnature = Nature;//�����Ը�clver,ferocious...
//		Cprice = Price;//����۸�20...
//		Cpeople = People;//�������ˣ�С���� 
//	}
//	string Cnumber;
//	string Cname;
//	string Cage;
//	string Cweight;
//	string Ctype;
//	string Cnature;
//	string Cprice;
//	string Cpeople;
//};
//class guest
//{
//public:
//	string Cnumber;
//	string Cname;
//	string Cage;
//	string Cweight;
//	string Ctype;
//	string Cnature;
//	string Cprice;
//	string Cpeople;
//};
//class PetAnimals :public Pet
//{
//public:
//	void Insert();//��ӳ�����Ϣ
//	bool Look();//���ҳ�����Ϣ
//	bool Change();//�޸ĳ�����Ϣ
//	void Show();//��ʾ��������г�����Ϣ
//	bool Delete();//ɾ��������Ϣ
//	void Read();//��ȡ������Ϣ�ļ�
//	void Write();//д��������Ϣ�ļ�
//};
//list<PetAnimals>PetList;//ʹ��˫������
////��ӳ�����Ϣ
//void PetAnimals::Insert()
//{
//	PetAnimals Pet;
//	char ch;
//	int symbol = 0;//�жϳ�����Ϣ�Ƿ����
//	list<PetAnimals>::iterator first, last;
//	first = PetList.begin();//begin()ָ����ʼ��
//	last = PetList.end();//end()ָ�����β��
//	do {
//		cout << "����������������Ϣ����" << endl;
//		cout << "���:";
//		cin >> Pet.Cnumber;
//		cout << "����:";
//		cin >> Pet.Cname;
//		cout << "����:";
//		cin >> Pet.Cage;
//		cout << "����:";
//		cin >> Pet.Cweight;
//		cout << "����:";
//		cin >> Pet.Ctype;
//		cout << "�Ը�:";
//		cin >> Pet.Cnature;
//		cout << "�۸�:";
//		cin >> Pet.Cprice;
//		cout << "����:";
//		cin >> Pet.Cpeople;
//		for (; first != last; ++first)
//		{
//			if ((Pet.Cname == (*first).Cname) && (Pet.Cprice == (*first).Cprice)
//				&& (Pet.Ctype == (*first).Ctype))//��������������
//			{
//				symbol = 1;// ������ڴ˳��� 
//				cout << endl << "��ó����Ѿ�����!" << endl;
//				cout << "���:" << (*first).Cnumber << endl;
//				cout << "����:" << (*first).Cname << endl;
//				cout << "����:" << (*first).Cage << endl;
//				cout << "����:" << (*first).Cweight << endl;
//				cout << "����:" << (*first).Ctype << endl;
//				cout << "�Ը�:" << (*first).Cnature << endl;
//				cout << "�۸�:" << (*first).Cprice << endl;
//				cout << "����:" << (*first).Cpeople;
//			}
//		}
//		if (symbol == 0)//��������ڴ˳��� 
//		{
//			PetList.insert(PetList.end(), Pet);
//		}
//		cout << endl << "�������ӳ�����Ϣ[Y��N]?";
//		cin >> ch;
//	} while (ch == 'Y' || ch == 'y');
//}
//
////���ҳ�����Ϣ
//bool PetAnimals::Look()
//{
//	string name, price, type;
//	int symbol = 0;
//	int option;
//	list <PetAnimals>::iterator first, last;
//	do
//	{
//		cout << "\t������������ҵķ�ʽ����" << endl;
//		cout << "\t1.�����Ʋ���" << endl;
//		cout << "\t2.���۸����" << endl;
//		cout << "\t3.���������" << endl;
//		cout << "\t4.�˳���" << endl;
//		cin >> option;
//		switch (option)
//		{
//		case 1: cout << "���������ƣ�";
//			cin >> name; break;
//		case 2: cout << "������۸�";
//			cin >> price; break;
//		case 3: cout << "���������ࣺ";
//			cin >> type; break;
//		case 4:break;
//		}
//		first = PetList.begin();
//		last = PetList.end();
//		for (; first != last; ++first)
//		{
//			if ((name == (*first).Cname) && (option == 1))
//			{
//				symbol = 1;
//				cout << "���������Ϊ" + (*first).Cname + "������Ϣ���£�" << endl;
//				cout << "���:" + (*first).Cnumber << endl;
//				cout << "����:" + (*first).Cname << endl;
//				cout << "����:" + (*first).Cage << endl;
//				cout << "����:" + (*first).Cweight << endl;
//				cout << "����:" + (*first).Ctype << endl;
//				cout << "�Ը�:" + (*first).Cnature << endl;
//				cout << "�۸�:" + (*first).Cprice << endl;
//				cout << "����:" + (*first).Cpeople << endl;
//			}
//			if ((price == (*first).Cprice) && (option == 2))
//			{
//				symbol = 1;
//				cout << "�����۸�Ϊ" + (*first).Cprice + "������Ϣ���£�" << endl;
//				cout << "���:" + (*first).Cnumber << endl;
//				cout << "����:" + (*first).Cname << endl;
//				cout << "����:" + (*first).Cage << endl;
//				cout << "����:" + (*first).Cweight << endl;
//				cout << "����:" + (*first).Ctype << endl;
//				cout << "�Ը�:" + (*first).Cnature << endl;
//				cout << "�۸�:" + (*first).Cprice << endl;
//				cout << "����:" + (*first).Cpeople << endl;
//			}
//			if ((type == (*first).Ctype) && (option == 3))
//			{
//				symbol = 1;
//				cout << "���������Ϊ" + (*first).Ctype + "������Ϣ���£�" << endl;
//				cout << "���:" + (*first).Cnumber << endl;
//				cout << "����:" + (*first).Cname << endl;
//				cout << "����:" + (*first).Cage << endl;
//				cout << "����:" + (*first).Cweight << endl;
//				cout << "����:" + (*first).Ctype << endl;
//				cout << "�Ը�:" + (*first).Cnature << endl;
//				cout << "�۸�:" + (*first).Cprice << endl;
//				cout << "����:" + (*first).Cpeople << endl;
//			}
//		}
//	} while (option != 4);
//	if ((first == last) && (symbol == 0))
//	{
//		cout << "��û�иó�����Ϣ!";
//		return false;
//	}
//	else
//		return true;
//}
//
////�޸ĳ�������
//bool PetAnimals::Change()
//{
//	PetAnimals pet;
//	string name, price, type;
//	int symbol = 0;
//	cout << "����������:";
//	cin >> name;
//	cout << "������۸�:";
//	cin >> price;
//	cout << "����������:";
//	cin >> type;
//	list <PetAnimals>::iterator first, last;
//	first = PetList.begin();
//	last = PetList.end();
//	for (; first != last; ++first)
//	{
//		if ((name == (*first).Cname) && (price == (*first).Cprice) && (type == (*first).Ctype))
//		{
//			symbol = 1;
//			cout << endl << "��ó�����Ϣ�ҵ������޸�ǰ�ĳ�����ϢΪ:" << endl;
//			cout << "���:" + (*first).Cnumber << endl;
//			cout << "����:" + (*first).Cname << endl;
//			cout << "����:" + (*first).Cage << endl;
//			cout << "����:" + (*first).Cweight << endl;
//			cout << "����:" + (*first).Ctype << endl;
//			cout << "�Ը�:" + (*first).Cnature << endl;
//			cout << "�۸�:" + (*first).Cprice << endl;
//			cout << "����:" + (*first).Cpeople << endl;
//			break;
//		}
//	}
//	if (symbol)
//	{
//		cout << endl << "���޸ĺ�ĳ�����ϢΪ:" << endl;
//		cout << "����:";
//		cin >> pet.Cage;
//		cout << "����:";
//		cin >> pet.Cweight;
//		cout << "�Ը�:";
//		cin >> pet.Cnature;
//		cout << "����:";
//		cin >> pet.Cpeople;
//		pet.Cname = name;
//		pet.Cprice = price;
//		pet.Ctype = type;
//		for (; first != last; ++first)
//		{
//			if ((name == (*first).Cname) && (price == (*first).Cprice) && (type == (*first).Ctype))
//			{
//				(*first) = pet;
//			}
//		}
//		return true;
//	}
//	else
//	{
//		cout << "��û�иó�����Ϣ!";
//		return false;
//	}
//}
//
////��ʾ���г�����Ϣ
//void PetAnimals::Show()
//{
//	list <PetAnimals>::iterator first, last, it;
//	first = PetList.begin();
//	last = PetList.end();
//	for (; first != last; ++first)
//	{
//		cout << "******************���ĳ�����Ϣ**********************" << endl;
//		cout << "���:" << (*first).Cnumber << endl;
//		cout << "����:" << (*first).Cname << endl;
//		cout << "����:" << (*first).Cage << endl;
//		cout << "����:" << (*first).Cweight << endl;
//		cout << "����:" << (*first).Ctype << endl;
//		cout << "�Ը�:" << (*first).Cnature << endl;
//		cout << "�۸�:" << (*first).Cprice << endl;
//		cout << "����:" << (*first).Cpeople << endl;
//		cout << "****************************************" << endl;
//	}
//}
//
////ɾ��������Ϣ
//bool PetAnimals::Delete()
//{
//	string name, price, type;
//	int symbol = 0;
//	cout << "����������:";
//	cin >> name;
//	cout << "������۸�:";
//	cin >> price;
//	cout << "����������:";
//	cin >> type;
//	list <PetAnimals>::iterator first, last, it;
//	first = PetList.begin();
//	last = PetList.end();
//	for (; first != last; ++first)
//	{
//		if ((name == (*first).Cname) && (price == (*first).Cprice) && (type == (*first).Ctype))
//		{
//			symbol = 1;
//			cout << "���ҵ��ó�����Ϣ����ɾ����" << endl;
//			it = first;
//			PetList.erase(first);
//		}
//	}
//	if ((first == last) && (symbol == 0))
//	{
//		cout << "��û�иó�����Ϣ!";
//		return false;
//	}
//	else
//	{
//		PetList.erase(it);
//		return true;
//	}
//}
//
////���������Ϣ
//void PetAnimals::Write()
//{
//	char file[256];
//	string FileName;
//	cout << "���������ļ���:(���Լ���չ��!��.txt)";
//	//����������·�������������·���¶�ȡ�ļ�,���򵽳�������λ�õ��ļ����ж�ȡ
//	cin >> FileName;
//	if (FileName.find(".") > FileName.length())
//	{
//		FileName = FileName + ".txt";
//	}
//	//��String�͵��ַ���ת����char*�͵��ַ���
//	strcpy(file, FileName.c_str());
//	ofstream fout(file);
//	if (!fout)
//	{
//		cout << "���ļ�д��ʧ��!���������ļ���!" << endl;
//		return;
//	}
//	else
//	{
//		list <PetAnimals>::iterator first, last;
//		first = PetList.begin();
//		last = PetList.end();
//		for (; first != last; ++first)
//		{
//			fout << endl << "���:" << (*first).Cnumber << endl << "����:" << (*first).Cname << endl
//				<< "����:" << (*first).Cage << endl << "����:" << (*first).Cweight << endl
//				<< "����:" << (*first).Ctype << endl << "�Ը�:" << (*first).Cnature << endl
//				<< "�۸�:" << (*first).Cprice << endl << "����:" << (*first).Cpeople << endl;
//		}
//		cout << "���ļ�����ɹ�!" << endl;
//	}
//	fout.close();//�رմ򿪵��ļ�
//}
//
////��ȡ������Ϣ
//void PetAnimals::Read()
//{
//	char file[256];
//	string FileName;
//	cout << "���������ļ���:(���Լ���չ��!��.txt)";
//	cin >> FileName;
//	if (FileName.find(".") > FileName.length())
//	{
//		FileName = FileName + ".txt";
//	}
//	strcpy(file, FileName.c_str());
//	ifstream fin(file);
//	int index;
//	if (!fin)
//	{
//		cout << "���ļ�д��ʧ��!���������ļ�����" << endl;
//		return;
//	}
//	else
//	{
//		PetList.clear();
//		while (!fin.eof())//�ж��Ƿ��ڽ�β 
//		{
//			PetAnimals pet;
//			string str;
//			fin >> str;
//			index = str.find(":");//Ҫ":"������� 
//			pet.Cnumber = str.substr(index + 1);//Ҫ":"���ʣ���ַ��� 
//			fin >> str;
//			index = str.find(":");
//			pet.Cname = str.substr(index + 1);
//			fin >> str;
//			index = str.find(":");
//			pet.Cage = str.substr(index + 1);
//			fin >> str;
//			index = str.find(":");
//			pet.Cweight = str.substr(index + 1);
//			fin >> str;
//			index = str.find(":");
//			pet.Ctype = str.substr(index + 1);
//			fin >> str;
//			index = str.find(":");
//			pet.Cnature = str.substr(index + 1);
//			fin >> str;
//			index = str.find(":");
//			pet.Cprice = str.substr(index + 1);
//			fin >> str;
//			index = str.find(":");
//			pet.Cpeople = str.substr(index + 1);
//			PetList.insert(PetList.end(), pet);
//
//		}
//		cout << "\n" << "   ���뱣�������İ���Ŷ(^��^*)!�� " << endl;
//		cout << "   ���ļ���ȡ�ɹ�!             ��" << endl;
//	}
//	fin.close();
//}
//int main()
//{
//	PetAnimals pet;
//	int option;
//	do
//	{
//		cout << endl << "�����ӭ��������̵����ϵͳ�� ��ѡ��˵�:������" << endl;
//		cout << " \t��-------------------------��" << endl;
//		cout << " \t�� 1.��ӳ������Ϣ        ��" << endl;
//		cout << " \t�� 2.���ҳ������Ϣ        ��" << endl;
//		cout << " \t�� 3.�޸ĳ������Ϣ        ��" << endl;
//		cout << " \t�� 4.��ʾ��������������Ϣ��" << endl;
//		cout << " \t�� 5.ɾ���������Ϣ        ��" << endl;
//		cout << " \t�� 6.�����ļ�              ��" << endl;
//		cout << " \t�� 7.��ȡ�ļ�              ��" << endl;
//		cout << " \t�� 8.�˳�ϵͳ                  ��" << endl;
//		cout << " \t��-------------------------��\n" << endl;
//		cin >> option;
//		switch (option)//ѡ��ͬ�������� 
//		{
//		case 1: { pet.Insert(); break; }
//		case 2: { pet.Look(); break; }
//		case 3: { pet.Change(); break; }
//		case 4: { pet.Show(); break; }
//		case 5: { pet.Delete(); break; }
//		case 6: { pet.Write(); break; }
//		case 7: { pet.Read(); break; }
//		case 8: { break; }
//		}
//	} while (option != 8);
//	return 0;
//}

