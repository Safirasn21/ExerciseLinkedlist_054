#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	int rollNumber;
	string name;
	Node* next;
};

class CircularLinkedList {
private:
	Node* LAST;
public:
	CircularLinkedList() {
		LAST = NULL;
	}
	void addNode();
	bool search(int rollno, Node** hidayah, Node** safira);
	bool listEmpty();
	bool delNode();
	void traverse();
};

void CircularLinkedList::addNode() { 
	//Menambahkan node baru diawal
	int rollno;
	char name[20];
	cout << "\nMasukan Nomor: ";
	cin >> rollno;
	cout << "\nMasukan Nama: ";
	cin >> name;

	Node* nodeBaru = new Node;
	nodeBaru-> rollNumber = rollno;
	(nodeBaru->name, name);

	if (START == NULL || rollno <= START->rollNumber)
	{
		if ((START != NULL) && (rollno == START->rollNumber))
		{
			cout << "\nDuplikasi noMhs tidak diijinkan\n";
			return;
		}
		nodeBaru->next = START;
		START = nodeBaru;
		return;
	}
	Node* hidayah, * safira;

	safira = START;
	hidayah = START;


	while ((safira != NULL) && ( rollno >= safira->rollNumber))
	{
		if (rollno == safira->rollNumber)
		{
			cout << "\nDuplikasi tidak diijinkan\n";
			return;
		}
		hidayah = safira;
		safira = safira->next;
	}
	/*Jika loop diatas dieksekusi, previous dan current akan menempati posisi*/
	nodeBaru->next = safira;
	hidayah->next = nodeBaru;
}

void addNode(); //menambahkan node ditengah list
{ 
	if (START == 1) {
		cout << "Menambahkan node baru di tengah list" << endl;
	}
	else {
		nodeBaru = new data;
		nodeBaru->rollno = new data;
		nodeBaru->name = new data;
		Node *next;

		//traversing
		int nomor= 1
			safira= START
			while (nomor < posisi - 1)
			{
				safira = safira->next;
				nomor++;
			}
		nodeBaru->next = safira->next;
		safira->next =nodeBaru
	}
}

void addNode(); //menambahkan node diakhir


bool CircularLinkedList::listEmpty() {
	return LAST == NULL;
}

bool CircularLinkedList::delNode() { 
	// Jika linked list masih kosong
	if (*current == nullptr)
		return;

	// Temukan node terakhir dan node sebelumnya
	Node* temp = *current, * prev = nullptr;
	while (temp->next != *current) {
		prev = temp;
		temp = temp->next;
	}

	// Jika linked list hanya memiliki satu node
	if (prev == nullptr) {
		*current = nullptr;
	}
	else {
		// Hapus node terakhir
		prev->next = *current;
	}
	delete temp;
}

}

void CircularLinkedList::traverse() {
	if (listEmpty()) {
		cout << "\nList is empty\n";
	}
	else {
		cout << "\nRecords in the list are:\n";
		Node* currentNode = LAST->next;
		while (currentNode != LAST) {
			cout << currentNode->rollNumber << " " << currentNode->name << endl;
			currentNode = currentNode->next;
		}
		cout << LAST->rollNumber << " " << LAST->name << endl;
	}
}

int main() {
	CircularLinkedList obj;
	while (true) {
		try {
			cout << "\nMenu" << endl;
			cout << "1. Add a record to the list" << endl;
			cout << "2. Delete a record from the list" << endl;
			cout << "3. View all the records in the list" << endl;
			cout << "4. Exit" << endl;
			cout << "\nEnter your choice (1-5): ";
			char ch;
			cin >> ch;
			switch (ch) {
			case '1': { 
			}
			case '2': {
			}
			case '3': {
				obj.traverse();
				break;
			}
			case '4': {
				return 0;
			}
			default: {
				cout << "Invalid option" << endl;
				break;
			}
			}
		}
		catch (exception& e) {
			cout << e.what() << endl;
		}
	}
	return 0;
}
