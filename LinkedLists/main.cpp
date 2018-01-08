#include "Node.h"
#include "LinkedListIterator.h"
int main()
{
	NodeType<int> a = { 12 };
	NodeType<int> b = { 4 };
	NodeType<int> c = { 999 };
	NodeType<int> x = {6};
	NodeType<int> y = { 42};
	NodeType<int> z = { 76 };
	a.link = &b;
	b.link = &c;
	c.link = &x;
	x.link = &y;
	y.link = &z;

	LinkedListIterator<int> iter = LinkedListIterator<int>(&a);
	iter.operator++();
}