#include <iostream>
using namespace std;

struct Parent {
    string name[20];
	string relationship[10];

  
};

struct Phone {
    char home[10];
    char mobile[10];
};

struct Student {
	string id[10];
    string Nickname[20];
	string Lineid[6];
    Parent myParent;
	Phone myContact;
};

int main() {
    Student s;

    cout << "Enter Student Information:\n";
	cout << "ID: "; cin >> s.id;
    cout << "Nickname: "; cin >> s.Nickname;
    cout << "Lineid: "; cin >> s.Lineid;
	cout << "Name Parent: "; cin >> s.myParent.name;
    cout << "Phone - Home: "; cin >> s.myContact.home;
    cout << "Phone - Mobile: "; cin >> s.myContact.mobile;

    cout << "\n===== Output =====\n";   
    cout << "ID: " << s.id << "\n";
    cout << "Nickname: " << s.Nickname << "\n";
	cout << "Lineid: " << s.Lineid << "\n";
	cout << "Name Parent: " << s.myParent.name << "\n";
    cout << "Phone - Home: " << s.myContact.home << "\n";
    cout << "Phone - Mobile: " << s.myContact.mobile << "\n";
    cout << endl;

    return 0;
}
