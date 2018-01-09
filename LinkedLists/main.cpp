#include "LinkedList.h"
int main()
{
	NodeType<int> a = { 12 };
	LinkedListType<int> *test = new LinkedListType<int>;
	LinkedListType<int> *test2 = new LinkedListType<int>;
	test->InitializeList();
	test->InsertFirst(12);
	test->InsertFirst(8);
	test->InsertLast(39);
	test->InsertLast(40);
	test2->InsertFirst(1);
	test2->InsertLast(22);
	test2->CopyList(*test);
	test->Print();
}