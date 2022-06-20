//分解数字
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
//	cout << "请输入你要分解的数字位数：" << endl;
//	cin >> i;
//	cout << "请输入你要分解的数字" << endl;
//	cin >> j;
//	count = sort(i, j);
//	cout << "出现的2的个数是：" << count << endl;
//	return 0;
//}
//租车系统
//#include<string>
//#include<iostream>
//#include<iomanip>
//#include<windows.h>
//using namespace std;
//
////基类：车
//class Vehicle
//{
//public:
//	int veh_count = 0;//车的编号
//	double veh_money = 0;//车的日费用
//	int veh_hiredays = 0;//车的租用时长
//	string veh_kind;//车的种类
//	int car_limitnum = 0;//限载人数
//	int car_limitkilo = 0;//限载货重
//};
//Vehicle passenger_car;
//Vehicle truck_car;
//Vehicle pickup_car;
//int i, j, k;
//void init()
//{
//	//客车
//	passenger_car.veh_count = 1;
//	passenger_car.veh_money = 200;
//	passenger_car.veh_kind = "客车";
//	passenger_car.car_limitnum = 20;
//	passenger_car.car_limitkilo = 0;
//	//货车
//	truck_car.veh_count = 2;
//	truck_car.veh_money = 300;
//	truck_car.veh_kind = "货车";
//	truck_car.car_limitnum = 0;
//	truck_car.car_limitkilo = 1;
//	//皮卡车
//	pickup_car.veh_count = 3;
//	pickup_car.veh_money = 400;
//	pickup_car.veh_kind = "皮卡车";
//	pickup_car.car_limitnum = 15;
//	pickup_car.car_limitkilo = 1;
//}
//void check(int a, int car_count)//a用于判断是否有租用该车，为输入的租用的车的数量;car_count为车的编号
//{
//	if (a > 0)
//	{
//		switch (car_count)
//		{
//		case 1:cout << "客车  "; break;
//		case 2:cout << "货车  "; break;
//		case 3:cout << "皮卡车  "; break;
//		}
//	}
//}
//void clearscreen()//清除界面
//{
//	system("cls");
//}
//void mainorder() //主界面
//{
//	cout << "---------------------------------" << endl;
//	cout << "    欢迎使用***极简租车系统        " << endl;
//	cout << "---------------------------------" << endl;
//	cout << "        按1查询车辆信息" << endl;
//	cout << "        按2进行租车流程" << endl;
//}
//void press_one_order()
//{
//	cout << "编号    车辆种类    日费用(元)    限载人数    限载货重(吨)" << endl;
//	//客车
//	cout << " " << passenger_car.veh_count << "      " << passenger_car.veh_kind << "        " << passenger_car.veh_money
//		<< "           " << passenger_car.car_limitnum << "          " << passenger_car.car_limitkilo << endl;
//	//货车
//	cout << " " << truck_car.veh_count << "      " << truck_car.veh_kind << "        " << truck_car.veh_money
//		<< "           " << truck_car.car_limitnum << "           " << truck_car.car_limitkilo << endl;
//	//皮卡车
//	cout << " " << pickup_car.veh_count << "      " << pickup_car.veh_kind << "      " << pickup_car.veh_money
//		<< "           " << pickup_car.car_limitnum << "          " << pickup_car.car_limitkilo << endl;
//
//	cout << "按任意整数返回" << endl;
//}
//void display_bill()//用setw()来使数据整齐
//{
//	cout << "编号    车辆种类    费用(元)    载人数    载重量(吨)" << endl;
//	//客车
//	cout << " " << passenger_car.veh_count << "      " << passenger_car.veh_kind << "    " << setw(12) << i * passenger_car.veh_money * passenger_car.veh_hiredays
//		<< setw(10) << i * passenger_car.car_limitnum << setw(14) << i * passenger_car.car_limitkilo << endl;
//	//货车
//	cout << " " << truck_car.veh_count << "      " << truck_car.veh_kind << "    " << setw(12) << j * truck_car.veh_money * truck_car.veh_hiredays
//		<< setw(10) << j * truck_car.car_limitnum << setw(14) << j * truck_car.car_limitkilo << endl;
//	//皮卡车
//	cout << " " << pickup_car.veh_count << "      " << pickup_car.veh_kind << "  " << setw(12) << k * pickup_car.veh_money * pickup_car.veh_hiredays
//		<< setw(10) << k * pickup_car.car_limitnum << setw(14) << k * pickup_car.car_limitkilo << endl;
//	//总计
//	cout << "总计    " << "--------" << setw(12) << i * passenger_car.veh_money * passenger_car.veh_hiredays
//		+ j * truck_car.veh_money * truck_car.veh_hiredays + k * pickup_car.veh_money * pickup_car.veh_hiredays
//		<< setw(10) << i * passenger_car.car_limitnum + j * truck_car.car_limitnum + k * pickup_car.car_limitnum
//		<< setw(14) << i * passenger_car.car_limitkilo + j * truck_car.car_limitkilo + k * pickup_car.car_limitkilo << endl;
//	//所租车的种类
//	cout << "您租用的车型为：";
//	check(i, 1);//检测客车
//	check(j, 2);//检车货车
//	check(k, 3);//检测皮卡车
//	cout << endl;
//	cout << "按任意整数返回" << endl;
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
//			cout << "请依次输入要租用客车、货车、皮卡车的数量：";
//			cin >> i;
//			cin >> j;
//			cin >> k;
//			cout << endl;
//			cout << "请依次输入要租用客车、货车、皮卡车的天数：";
//			cin >> passenger_car.veh_hiredays;
//			cin >> truck_car.veh_hiredays;
//			cin >> pickup_car.veh_hiredays;
//			cout << endl;
//			cout << "您的租车清单为：" << endl;
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
//源代码
//#include<iostream> 
//#include<cstring>
//#include<vector>
//#include<fstream>
//#include"list"
//using namespace std;
//class Data// 日期类 
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
//	cout << "请输入日期(格式年-月-日)" << endl;
//	while (1)
//	{
//		cin >> year >> c1 >> month >> c2 >> day;
//		if (c1 != '-' || c2 != '-')
//			cout << "格式不正确，请重新输入" << endl;
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
//		Cnumber = Number;//宠物编号：00，01，02 ...
//		Cname = Name;//宠物名称:贝贝 
//		Cage = Age;//宠物年龄：20，14
//		Cweight = Weight;//宠物重量（斤）：20，45 
//		Ctype = Type;//宠物种类：cat or dog... 
//		Cnature = Nature;//宠物性格：clver,ferocious...
//		Cprice = Price;//宠物价格：20...
//		Cpeople = People;//宠物主人：小明… 
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
//	void Insert();//添加宠物信息
//	bool Look();//查找宠物信息
//	bool Change();//修改宠物信息
//	void Show();//显示或浏览所有宠物信息
//	bool Delete();//删除宠物信息
//	void Read();//读取宠物信息文件
//	void Write();//写出宠物信息文件
//};
//list<PetAnimals>PetList;//使用双向链表
////添加宠物信息
//void PetAnimals::Insert()
//{
//	PetAnimals Pet;
//	char ch;
//	int symbol = 0;//判断宠物信息是否存在
//	list<PetAnimals>::iterator first, last;
//	first = PetList.begin();//begin()指链表开始处
//	last = PetList.end();//end()指链表结尾处
//	do {
//		cout << "【请输入宠物相关信息！】" << endl;
//		cout << "编号:";
//		cin >> Pet.Cnumber;
//		cout << "名称:";
//		cin >> Pet.Cname;
//		cout << "年龄:";
//		cin >> Pet.Cage;
//		cout << "重量:";
//		cin >> Pet.Cweight;
//		cout << "种类:";
//		cin >> Pet.Ctype;
//		cout << "性格:";
//		cin >> Pet.Cnature;
//		cout << "价格:";
//		cin >> Pet.Cprice;
//		cout << "主人:";
//		cin >> Pet.Cpeople;
//		for (; first != last; ++first)
//		{
//			if ((Pet.Cname == (*first).Cname) && (Pet.Cprice == (*first).Cprice)
//				&& (Pet.Ctype == (*first).Ctype))//假设宠物可以重名
//			{
//				symbol = 1;// 如果存在此宠物 
//				cout << endl << "★该宠物已经存在!" << endl;
//				cout << "编号:" << (*first).Cnumber << endl;
//				cout << "名称:" << (*first).Cname << endl;
//				cout << "年龄:" << (*first).Cage << endl;
//				cout << "重量:" << (*first).Cweight << endl;
//				cout << "种类:" << (*first).Ctype << endl;
//				cout << "性格:" << (*first).Cnature << endl;
//				cout << "价格:" << (*first).Cprice << endl;
//				cout << "主人:" << (*first).Cpeople;
//			}
//		}
//		if (symbol == 0)//如果不存在此宠物 
//		{
//			PetList.insert(PetList.end(), Pet);
//		}
//		cout << endl << "★继续添加宠物信息[Y或N]?";
//		cin >> ch;
//	} while (ch == 'Y' || ch == 'y');
//}
//
////查找宠物信息
//bool PetAnimals::Look()
//{
//	string name, price, type;
//	int symbol = 0;
//	int option;
//	list <PetAnimals>::iterator first, last;
//	do
//	{
//		cout << "\t【请输入你查找的方式】！" << endl;
//		cout << "\t1.按名称查找" << endl;
//		cout << "\t2.按价格查找" << endl;
//		cout << "\t3.按种类查找" << endl;
//		cout << "\t4.退出！" << endl;
//		cin >> option;
//		switch (option)
//		{
//		case 1: cout << "请输入名称：";
//			cin >> name; break;
//		case 2: cout << "请输入价格：";
//			cin >> price; break;
//		case 3: cout << "请输入种类：";
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
//				cout << "★宠物名称为" + (*first).Cname + "宠物信息如下：" << endl;
//				cout << "编号:" + (*first).Cnumber << endl;
//				cout << "名称:" + (*first).Cname << endl;
//				cout << "年龄:" + (*first).Cage << endl;
//				cout << "重量:" + (*first).Cweight << endl;
//				cout << "种类:" + (*first).Ctype << endl;
//				cout << "性格:" + (*first).Cnature << endl;
//				cout << "价格:" + (*first).Cprice << endl;
//				cout << "主人:" + (*first).Cpeople << endl;
//			}
//			if ((price == (*first).Cprice) && (option == 2))
//			{
//				symbol = 1;
//				cout << "★宠物价格为" + (*first).Cprice + "宠物信息如下：" << endl;
//				cout << "编号:" + (*first).Cnumber << endl;
//				cout << "名称:" + (*first).Cname << endl;
//				cout << "年龄:" + (*first).Cage << endl;
//				cout << "重量:" + (*first).Cweight << endl;
//				cout << "种类:" + (*first).Ctype << endl;
//				cout << "性格:" + (*first).Cnature << endl;
//				cout << "价格:" + (*first).Cprice << endl;
//				cout << "主人:" + (*first).Cpeople << endl;
//			}
//			if ((type == (*first).Ctype) && (option == 3))
//			{
//				symbol = 1;
//				cout << "★宠物种类为" + (*first).Ctype + "宠物信息如下：" << endl;
//				cout << "编号:" + (*first).Cnumber << endl;
//				cout << "名称:" + (*first).Cname << endl;
//				cout << "年龄:" + (*first).Cage << endl;
//				cout << "重量:" + (*first).Cweight << endl;
//				cout << "种类:" + (*first).Ctype << endl;
//				cout << "性格:" + (*first).Cnature << endl;
//				cout << "价格:" + (*first).Cprice << endl;
//				cout << "主人:" + (*first).Cpeople << endl;
//			}
//		}
//	} while (option != 4);
//	if ((first == last) && (symbol == 0))
//	{
//		cout << "★没有该宠物信息!";
//		return false;
//	}
//	else
//		return true;
//}
//
////修改宠物资料
//bool PetAnimals::Change()
//{
//	PetAnimals pet;
//	string name, price, type;
//	int symbol = 0;
//	cout << "请输入名称:";
//	cin >> name;
//	cout << "请输入价格:";
//	cin >> price;
//	cout << "请输入种类:";
//	cin >> type;
//	list <PetAnimals>::iterator first, last;
//	first = PetList.begin();
//	last = PetList.end();
//	for (; first != last; ++first)
//	{
//		if ((name == (*first).Cname) && (price == (*first).Cprice) && (type == (*first).Ctype))
//		{
//			symbol = 1;
//			cout << endl << "★该宠物信息找到，其修改前的宠物信息为:" << endl;
//			cout << "编号:" + (*first).Cnumber << endl;
//			cout << "名称:" + (*first).Cname << endl;
//			cout << "年龄:" + (*first).Cage << endl;
//			cout << "重量:" + (*first).Cweight << endl;
//			cout << "种类:" + (*first).Ctype << endl;
//			cout << "性格:" + (*first).Cnature << endl;
//			cout << "价格:" + (*first).Cprice << endl;
//			cout << "主人:" + (*first).Cpeople << endl;
//			break;
//		}
//	}
//	if (symbol)
//	{
//		cout << endl << "★修改后的宠物信息为:" << endl;
//		cout << "年龄:";
//		cin >> pet.Cage;
//		cout << "重量:";
//		cin >> pet.Cweight;
//		cout << "性格:";
//		cin >> pet.Cnature;
//		cout << "主人:";
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
//		cout << "★没有该宠物信息!";
//		return false;
//	}
//}
//
////显示所有宠物信息
//void PetAnimals::Show()
//{
//	list <PetAnimals>::iterator first, last, it;
//	first = PetList.begin();
//	last = PetList.end();
//	for (; first != last; ++first)
//	{
//		cout << "******************您的宠物信息**********************" << endl;
//		cout << "编号:" << (*first).Cnumber << endl;
//		cout << "名称:" << (*first).Cname << endl;
//		cout << "年龄:" << (*first).Cage << endl;
//		cout << "重量:" << (*first).Cweight << endl;
//		cout << "种类:" << (*first).Ctype << endl;
//		cout << "性格:" << (*first).Cnature << endl;
//		cout << "价格:" << (*first).Cprice << endl;
//		cout << "主人:" << (*first).Cpeople << endl;
//		cout << "****************************************" << endl;
//	}
//}
//
////删除宠物信息
//bool PetAnimals::Delete()
//{
//	string name, price, type;
//	int symbol = 0;
//	cout << "请输入名称:";
//	cin >> name;
//	cout << "请输入价格:";
//	cin >> price;
//	cout << "请输入种类:";
//	cin >> type;
//	list <PetAnimals>::iterator first, last, it;
//	first = PetList.begin();
//	last = PetList.end();
//	for (; first != last; ++first)
//	{
//		if ((name == (*first).Cname) && (price == (*first).Cprice) && (type == (*first).Ctype))
//		{
//			symbol = 1;
//			cout << "★找到该宠物信息！可删除！" << endl;
//			it = first;
//			PetList.erase(first);
//		}
//	}
//	if ((first == last) && (symbol == 0))
//	{
//		cout << "★没有该宠物信息!";
//		return false;
//	}
//	else
//	{
//		PetList.erase(it);
//		return true;
//	}
//}
//
////保存宠物信息
//void PetAnimals::Write()
//{
//	char file[256];
//	string FileName;
//	cout << "★请输入文件名:(可以加扩展名!如.txt)";
//	//若输入完整路径则在你输入的路径下读取文件,否则到程序所在位置的文件夹中读取
//	cin >> FileName;
//	if (FileName.find(".") > FileName.length())
//	{
//		FileName = FileName + ".txt";
//	}
//	//把String型的字符串转换成char*型的字符串
//	strcpy(file, FileName.c_str());
//	ofstream fout(file);
//	if (!fout)
//	{
//		cout << "★文件写入失败!请检查您的文件名!" << endl;
//		return;
//	}
//	else
//	{
//		list <PetAnimals>::iterator first, last;
//		first = PetList.begin();
//		last = PetList.end();
//		for (; first != last; ++first)
//		{
//			fout << endl << "编号:" << (*first).Cnumber << endl << "名称:" << (*first).Cname << endl
//				<< "年龄:" << (*first).Cage << endl << "重量:" << (*first).Cweight << endl
//				<< "种类:" << (*first).Ctype << endl << "性格:" << (*first).Cnature << endl
//				<< "价格:" << (*first).Cprice << endl << "主人:" << (*first).Cpeople << endl;
//		}
//		cout << "★文件保存成功!" << endl;
//	}
//	fout.close();//关闭打开的文件
//}
//
////读取宠物信息
//void PetAnimals::Read()
//{
//	char file[256];
//	string FileName;
//	cout << "★请输入文件名:(可以加扩展名!如.txt)";
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
//		cout << "★文件写入失败!请检查您的文件名！" << endl;
//		return;
//	}
//	else
//	{
//		PetList.clear();
//		while (!fin.eof())//判断是否处于结尾 
//		{
//			PetAnimals pet;
//			string str;
//			fin >> str;
//			index = str.find(":");//要":"后的内容 
//			pet.Cnumber = str.substr(index + 1);//要":"后的剩下字符串 
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
//		cout << "\n" << "   ★请保护好您的爱宠哦(^。^*)!★ " << endl;
//		cout << "   ★文件读取成功!             ★" << endl;
//	}
//	fin.close();
//}
//int main()
//{
//	PetAnimals pet;
//	int option;
//	do
//	{
//		cout << endl << "★★★【欢迎进入宠物商店管理系统！ 请选择菜单:】★★★" << endl;
//		cout << " \t┌-------------------------┐" << endl;
//		cout << " \t┊ 1.添加宠物的信息        ┊" << endl;
//		cout << " \t┊ 2.查找宠物的信息        ┊" << endl;
//		cout << " \t┊ 3.修改宠物的信息        ┊" << endl;
//		cout << " \t┊ 4.显示（浏览）宠物的信息┊" << endl;
//		cout << " \t┊ 5.删除宠物的信息        ┊" << endl;
//		cout << " \t┊ 6.保存文件              ┊" << endl;
//		cout << " \t┊ 7.读取文件              ┊" << endl;
//		cout << " \t┊ 8.退出系统                  ┊" << endl;
//		cout << " \t└-------------------------┘\n" << endl;
//		cin >> option;
//		switch (option)//选择不同函数功能 
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

