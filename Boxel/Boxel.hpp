#include <iostream>
using namespace std;
/*
	Model Space is always 1024*1024*1024.
	But Models can have dimensions lower than the standard dimension
	(1024*1024*1024) therefore restricting its submodels within its chosen dimension.
	The C++ Array Class should be used bcos knowing the size of arrays is vital to the performance
	of the program. For example, a SubModel needs to include more pointers as number of boxels
	increase.
*/

// BOXEL
class Boxel
{
	uint32_t coordMap;
	uint32_t dimenMap;
};

// SUBMODEL
class SubModel
{
	uint32_t coordMap;
	uint32_t dimenMap;
	Boxel *ptrBoxelDiv;
	// This will be removed, it will be extracted from coordMap
	bool isWanderer; // Some submodels are descendant of Cain.
};

// MODEL
class Model
{
	uint64_t coordMap;
	uint64_t dimenMap;
	SubModel *ptrSubModelDiv;
};

// WORLD
class World
{
	Model *ptrModelDiv;
};

// FRIEND FUNCTIONS
template <typename T>
T& searchCoordMap (T &obj);

template <typename T, typename U>
bool isSameCoord (T &obj1, U &obj2);

template <typename T, typename U>
bool isSameDimen (T &obj1, U &obj2);

// MAIN FUNCTION
int main()
{
	Boxel box;
	SubModel submod;
	Model mod;
	cout << sizeof(box) << " " << sizeof(submod)  << " " << sizeof(mod) << endl;
}
