// LP_Lab11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "FST.h"

#define GRAPH	\
	8, \
	FST::NODE(1, FST::RELATION('a', 1)), \
	FST::NODE(1, FST::RELATION('f', 2)), \
	FST::NODE(4, FST::RELATION('g', 2), FST::RELATION('b', 3), FST::RELATION('c', 3), FST::RELATION('d', 3)), \
	FST::NODE(1, FST::RELATION('f', 4)), \
	FST::NODE(5, FST::RELATION('b', 3), FST::RELATION('c', 3), FST::RELATION('d', 3), FST::RELATION('g', 5), FST::RELATION('e', 6)), \
	FST::NODE(2, FST::RELATION('g', 5), FST::RELATION('e', 6)), \
	FST::NODE(1, FST::RELATION('f', 7)), \
	FST::NODE() \

void isRecognize(FST::FST fst)
{
	if (FST::execute(fst))
		std::cout << "Цепочка " << fst.string << "	распознана" << std::endl;
	else
		std::cout << "Цепочка " << fst.string << "	не распознана" << std::endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");

	FST::FST fst1((char*)"afgbfgef", GRAPH);
	isRecognize(fst1);
	FST::FST fst2((char*)"afggcfcfef", GRAPH);
	isRecognize(fst2);
	FST::FST fst3((char*)"afdfgggef", GRAPH);
	isRecognize(fst3);
	FST::FST fst4((char*)"afggbfcfgef", GRAPH);
	isRecognize(fst4);
	FST::FST fst5((char*)"afgdfbfcfgef", GRAPH);
	isRecognize(fst5);
	FST::FST fst6((char*)"afggdfdfcfggef", GRAPH);
	isRecognize(fst6);
	FST::FST fst7((char*)"afgggdfgggef", GRAPH);
	isRecognize(fst7);
	FST::FST fst8((char*)"afgggdfg", GRAPH);
	isRecognize(fst8);
	FST::FST fst9((char*)"afefgggef", GRAPH);
	isRecognize(fst9);
	system("pause");
	return 0;
}

