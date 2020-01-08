#pragma once


enum RBTColor
{
	RED,
	BLACK
};

template< typename T >
class RBTNode
{
public:
	RBTNode* father;
	RBTNode* leftSon;
	RBTNode* rightSon;
	RBTColor color;
	T		 key;

	RBTNode( T _k, RBTColor _c, RBTNode *_f, RBTNode *_ls, RBTNode *_rs ):
		key(_k), color(_c), father(_f), leftSon(_ls), rightSon(_rs)
	{}
};


template< typename T >
class RBTree
{
private:
	RBTNode<T> *rootNode;
};

