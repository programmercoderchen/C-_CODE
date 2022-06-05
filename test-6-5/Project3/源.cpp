#include<iostream>>
#include <string>
using namespace std;
class Bank;
void menu(Bank&);

class Account {
private:
	string name; //户名
	string ID;  //账号
	string mima;  //密码
	double yue;  //余额
	bool isLost = false;//挂失功能

public:
	string record = "";
	Account(string i, string n, double y, string m) {
		ID = i;
		name = n;
		yue = y;
		mima = m;
	}
	string getID() {
		return ID;
	}
	string getMi() {
		return mima;
	}
	//挂失
	void setLost(bool state) {
		isLost = state;
	}
	bool getLost() {
		return isLost;
	}
	void showInfo() {
		cout << "储户账号:" << ID << endl;
		cout << "储户姓名:" << name << endl;
		cout << "储户余额" << yue << endl;
		cout << "历史交易记录：" << endl;
		cout << record;
	}

	void saving(double a) {
		yue = yue + a;
		record = record + "save:\n";
	}

	bool qukuan(double a) {
		if (yue < a) {
			cout << "余额不足" << endl;
			return 0;
		}
		else {
			yue -= a;
			cout << "取款成功" << endl;
			record = record + "get:\n";
			return 1;
		}
	}

};
class Bank {
private:
	int accountNumber;
	Account* account[100];  //用户个数上限

public:
	Bank() {
		accountNumber = 0;
	}

	void createaccount() {    //实现开户功能
		string ID, name, mima;
		double yue;
		char choice;
	here:
		cout << "请输入您的账号" << endl;
		cin >> ID;
		cout << endl;

		//检查账户是否已存在
		for (int i = 0; i < accountNumber; i++) {

			if (account[i]->getID() == ID) {
				cout << "该账户已存在，请重新输入！" << endl;
				goto here;
			}

		}
		cout << "请输入您的用户名" << endl;
		cin >> name;

		cout << "请输入您的密码" << endl;
		cin >> mima;

		cout << "您是否要预存款?(Y/N)" << endl;
		cin >> choice;
		if (choice == 'Y' || choice == 'y') {
			cout << "- 存入金额 : ";
			cin >> yue;
		}
		else
			yue = 0;

		Account* a = new Account(ID, name, yue, mima);  //传送用户数据
		account[accountNumber++] = a;
		cout << "当前已有储户" << accountNumber << endl;
		cout << "创建成功" << endl;
	}

	void deleteaccount() { //实现销户功能
		int i;
		string id, m;
		cout << "请输入您的账号\n";
		cin >> id;
		cout << "请输入您的密码\n";
		cin >> m;
		cout << "请问您是否确认销户？(Y/N)";
		char thisChoice;
		cin >> thisChoice;
		if (thisChoice != 'Y' && thisChoice != 'y')
			return;
		cout << "您要注销的账户为：" << id << endl;
		for (i = 0; i < accountNumber; i++) {
			//删除用户
			if (account[i]->getID() == id && account[i]->getMi() == m) {
				Account* temp = account[i];
				account[i] = account[accountNumber - 1];
				account[accountNumber - 1] = temp;
				delete account[--accountNumber];
				cout << "删除成功" << endl;
				return;
			}

		}
		cout << "不存在该用户或密码错误！" << endl;
	}

	void guashi() {//实现挂失功能
		int i;
		string id, m;
		cout << "请输入您的账号\n";
		cin >> id;
		cout << "请输入您的密码\n";
		cin >> m;
		cout << "请问您是否确认挂失？(Y/N)";
		char thisChoice;
		cin >> thisChoice;
		if (thisChoice != 'Y' && thisChoice != 'y')
			return;
		cout << "您要挂失的账户为：" << id << endl;
		for (i = 0; i < accountNumber; i++) {
			//删除用户
			if (account[i]->getID() == id && account[i]->getMi() == m) {
				account[i]->setLost(true);
				cout << "挂失成功" << endl;
				return;
			}
		}
		cout << "不存在该用户或密码错误！" << endl;
	}

	void cunkuan() { //实现存款功能
		double money;
		double yue;
		string id, m;
		int i;
		cout << "请输入您要存入的账户";
		cin >> id;

		cout << "请输入您的密码\n";
		cin >> m;

		cout << "请输入您要存入的金额";
		cin >> money;
		for (i = 0; i < accountNumber; i++) {
			if (account[i]->getID() == id && account[i]->getMi() == m) {
				//调用存款函数存款
				account[i]->saving(money);
				cout << "存款成功";
				cout << endl;
				account[i]->showInfo();
				return;
			}
		}
		cout << "存款失败" << endl;
	}

	void quqian() { //实现取款功能
		int i;
		string id, m;
		double money;

		cout << "请输入您的账户" << endl;
		cin >> id;
		cout << "请输入您的密码" << endl;
		cin >> m;
		cout << "请输入取款金额" << endl;
		cin >> money;

		for (i = 0; i < accountNumber; i++) {
			//如果挂失了，是无法取款的
			if (account[i]->getID() == id && account[i]->getMi() == m && !account[i]->getLost()) {
				bool rs = account[i]->qukuan(money);
				//如果取款成功
				if (rs) {
					account[i]->showInfo();
					return;
				}
				else {
					cout << "账户余额不足" << endl;
					return;
				}
			}
		}
		cout << "失败" << endl;
	}

	void check() { //查询 
		int i;
		string id, m;
		double money;
		cout << "请输入您的账户" << endl;
		cin >> id;
		cout << "请输入您的密码" << endl;
		cin >> m;
		for (i = 0; i < accountNumber; i++) {
			if (account[i]->getID() == id && account[i]->getMi() == m) {
				account[i]->showInfo();
				return;
			}
		}
		if (i == accountNumber) {
			cout << "没找到" << endl;
		}
	}

};
void menu() {
	int m;
	Bank b;
	while (1) {
		system("cls");
		cout << "----------欢迎来到此银行-----------" << endl;
		cout << "----------请选择您的业务-------------" << endl;
		cout << "-----------1、开户-------------------" << endl;
		cout << "-----------2、销户-------------------" << endl;
		cout << "-----------3、存款-------------------" << endl;
		cout << "-----------4、取钱-------------------" << endl;
		cout << "-----------5、查询-------------------" << endl;
		cout << "-----------6、挂失-------------------" << endl;
		cout << "-----------7、退出-------------------" << endl;
		cin >> m;

		switch (m) {
		case 1:
			b.createaccount();
			system("pause");
			break;
		case 2:
			b.deleteaccount();
			system("pause");
			break;
		case 3:
			b.cunkuan();
			system("pause");
			break;
		case 4:
			b.quqian();
			system("pause");
			break;
		case 5:
			b.check();
			system("pause");
			break;
		case 6:
			b.guashi();
			return;
		case 7:
			return;
		default:
			cout << "输入有误，请重新输入" << endl;
			break;
		}
	}
}

int main() {
	menu();
	return 0;
}

