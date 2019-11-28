#include <iostream>
#include <string>
using namespace std;

struct Node
{
	string data;
	Node *next = 0;

	Node(string data, Node* next = 0)
	{
		this->data = data;
		this->next = next;
	}
};

struct List
{
	Node *head;

	List()
	{
		
		head = 0;
	}

	int GetSize()
	{
		int Size = 0;
		Node *tmp = head;
		while (tmp != 0)
		{
			tmp = tmp->next;
			size++;
		}
		return Size
	}

	Node* get_tail()
	{
		Node *tmp = head;

		if (head == 0)
		{
			return 0;
		}

		while(tmp->next != 0)
		{
			tmp = tmp->next;
		}
		return tmp;
	}

	void push_back(string data)
	{
		Node *h = get_tail();
		if (h == 0)
		{
			head = new Node(data)
		}
		else
		{
			h->next = new Node(data)
		}
	}

	void print_all()
	{
		Node *tmp = head;
		while (tmp != 0)
		{
			cout << tmp->data << " ";
			tmp = tmp->next;
		}
	}


};


int main()
{
	setlocale(LC_ALL, "ru");
	int n1, n2;
	List a, b;
	string c;
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> c;
		a.push_back(c);
	}

	a.print_all();

}