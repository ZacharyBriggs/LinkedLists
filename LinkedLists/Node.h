#pragma once
#include <cstddef>
template<class Type>
struct NodeType
{
	Type info;
	NodeType<Type> *link;
};
