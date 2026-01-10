#include <iostream>
#include <string>
using namespace std;


struct Phone {
    string home;
    string mobile;
};

struct Parrent {
    string name;
    string relationship;
    Phone contact;
};

struct student {
    string id;
    string nickname;
    string lineid;
    Phone myContact;
    Parrent myParent;
};

int main() {

    student s1;

 
    s1.id = "67010001";
    s1.nickname = "Karn";
    s1.lineid = "gant.dev";

    s1.myContact.mobile = "081-234-5678";
    s1.myContact.home = "02-123-4567";

    s1.myParent.name = "Somchai";
    s1.myParent.relationship = "Father";

    s1.myParent.contact.mobile = "089-987-6543";
    s1.myParent.contact.home = "02-123-4567";

	cout << "===== Student Information ======  \n";
    cout << "Student ID: " << s1.id << "\n";
    cout << "Nickname: " << s1.nickname << "\n";
    cout << "Student Mobile: " << s1.myContact.mobile << "\n";
    cout << "Parent Name: " << s1.myParent.name << "\n";
	cout << "Relationship: " << s1.myParent.relationship << "\n";
    cout << "Parent Mobile: " << s1.myParent.contact.mobile << "\n";

    return 0;
}