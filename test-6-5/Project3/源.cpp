#include<iostream>>
#include <string>
using namespace std;
class Bank;
void menu(Bank&);

class Account {
private:
	string name; //����
	string ID;  //�˺�
	string mima;  //����
	double yue;  //���
	bool isLost = false;//��ʧ����

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
	//��ʧ
	void setLost(bool state) {
		isLost = state;
	}
	bool getLost() {
		return isLost;
	}
	void showInfo() {
		cout << "�����˺�:" << ID << endl;
		cout << "��������:" << name << endl;
		cout << "�������" << yue << endl;
		cout << "��ʷ���׼�¼��" << endl;
		cout << record;
	}

	void saving(double a) {
		yue = yue + a;
		record = record + "save:\n";
	}

	bool qukuan(double a) {
		if (yue < a) {
			cout << "����" << endl;
			return 0;
		}
		else {
			yue -= a;
			cout << "ȡ��ɹ�" << endl;
			record = record + "get:\n";
			return 1;
		}
	}

};
class Bank {
private:
	int accountNumber;
	Account* account[100];  //�û���������

public:
	Bank() {
		accountNumber = 0;
	}

	void createaccount() {    //ʵ�ֿ�������
		string ID, name, mima;
		double yue;
		char choice;
	here:
		cout << "�����������˺�" << endl;
		cin >> ID;
		cout << endl;

		//����˻��Ƿ��Ѵ���
		for (int i = 0; i < accountNumber; i++) {

			if (account[i]->getID() == ID) {
				cout << "���˻��Ѵ��ڣ����������룡" << endl;
				goto here;
			}

		}
		cout << "�����������û���" << endl;
		cin >> name;

		cout << "��������������" << endl;
		cin >> mima;

		cout << "���Ƿ�ҪԤ���?(Y/N)" << endl;
		cin >> choice;
		if (choice == 'Y' || choice == 'y') {
			cout << "- ������ : ";
			cin >> yue;
		}
		else
			yue = 0;

		Account* a = new Account(ID, name, yue, mima);  //�����û�����
		account[accountNumber++] = a;
		cout << "��ǰ���д���" << accountNumber << endl;
		cout << "�����ɹ�" << endl;
	}

	void deleteaccount() { //ʵ����������
		int i;
		string id, m;
		cout << "�����������˺�\n";
		cin >> id;
		cout << "��������������\n";
		cin >> m;
		cout << "�������Ƿ�ȷ��������(Y/N)";
		char thisChoice;
		cin >> thisChoice;
		if (thisChoice != 'Y' && thisChoice != 'y')
			return;
		cout << "��Ҫע�����˻�Ϊ��" << id << endl;
		for (i = 0; i < accountNumber; i++) {
			//ɾ���û�
			if (account[i]->getID() == id && account[i]->getMi() == m) {
				Account* temp = account[i];
				account[i] = account[accountNumber - 1];
				account[accountNumber - 1] = temp;
				delete account[--accountNumber];
				cout << "ɾ���ɹ�" << endl;
				return;
			}

		}
		cout << "�����ڸ��û����������" << endl;
	}

	void guashi() {//ʵ�ֹ�ʧ����
		int i;
		string id, m;
		cout << "�����������˺�\n";
		cin >> id;
		cout << "��������������\n";
		cin >> m;
		cout << "�������Ƿ�ȷ�Ϲ�ʧ��(Y/N)";
		char thisChoice;
		cin >> thisChoice;
		if (thisChoice != 'Y' && thisChoice != 'y')
			return;
		cout << "��Ҫ��ʧ���˻�Ϊ��" << id << endl;
		for (i = 0; i < accountNumber; i++) {
			//ɾ���û�
			if (account[i]->getID() == id && account[i]->getMi() == m) {
				account[i]->setLost(true);
				cout << "��ʧ�ɹ�" << endl;
				return;
			}
		}
		cout << "�����ڸ��û����������" << endl;
	}

	void cunkuan() { //ʵ�ִ���
		double money;
		double yue;
		string id, m;
		int i;
		cout << "��������Ҫ������˻�";
		cin >> id;

		cout << "��������������\n";
		cin >> m;

		cout << "��������Ҫ����Ľ��";
		cin >> money;
		for (i = 0; i < accountNumber; i++) {
			if (account[i]->getID() == id && account[i]->getMi() == m) {
				//���ô������
				account[i]->saving(money);
				cout << "���ɹ�";
				cout << endl;
				account[i]->showInfo();
				return;
			}
		}
		cout << "���ʧ��" << endl;
	}

	void quqian() { //ʵ��ȡ���
		int i;
		string id, m;
		double money;

		cout << "�����������˻�" << endl;
		cin >> id;
		cout << "��������������" << endl;
		cin >> m;
		cout << "������ȡ����" << endl;
		cin >> money;

		for (i = 0; i < accountNumber; i++) {
			//�����ʧ�ˣ����޷�ȡ���
			if (account[i]->getID() == id && account[i]->getMi() == m && !account[i]->getLost()) {
				bool rs = account[i]->qukuan(money);
				//���ȡ��ɹ�
				if (rs) {
					account[i]->showInfo();
					return;
				}
				else {
					cout << "�˻�����" << endl;
					return;
				}
			}
		}
		cout << "ʧ��" << endl;
	}

	void check() { //��ѯ 
		int i;
		string id, m;
		double money;
		cout << "�����������˻�" << endl;
		cin >> id;
		cout << "��������������" << endl;
		cin >> m;
		for (i = 0; i < accountNumber; i++) {
			if (account[i]->getID() == id && account[i]->getMi() == m) {
				account[i]->showInfo();
				return;
			}
		}
		if (i == accountNumber) {
			cout << "û�ҵ�" << endl;
		}
	}

};
void menu() {
	int m;
	Bank b;
	while (1) {
		system("cls");
		cout << "----------��ӭ����������-----------" << endl;
		cout << "----------��ѡ������ҵ��-------------" << endl;
		cout << "-----------1������-------------------" << endl;
		cout << "-----------2������-------------------" << endl;
		cout << "-----------3�����-------------------" << endl;
		cout << "-----------4��ȡǮ-------------------" << endl;
		cout << "-----------5����ѯ-------------------" << endl;
		cout << "-----------6����ʧ-------------------" << endl;
		cout << "-----------7���˳�-------------------" << endl;
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
			cout << "������������������" << endl;
			break;
		}
	}
}

int main() {
	menu();
	return 0;
}

