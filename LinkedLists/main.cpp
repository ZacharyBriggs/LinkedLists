#include "LinkedList.h"
int main()
{
	NodeType<int> a = { 12 };
	LinkedListType<int> *test = new LinkedListType<int>;
	LinkedListType<int> *test2 = new LinkedListType<int>;
	LinkedListType<int> *Last = new LinkedListType<int>;
	Last->InsertLast(3);
	test->InitializeList();
	test->InsertFirst(12);
	test->InsertFirst(8);
	test->InsertLast(39);
	test->InsertLast(40);
	test2->InsertFirst(1);
	test2->InsertLast(22);
	test->DeleteNode(12);
	assert(test->Search(8) == true);
	assert(test->Search(12) == false);
	test = test2;
	test->Print();
	test2->Print();
	test->Begin();
	test->End();
	LinkedListType<int>test3(*test);
}