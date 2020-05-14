#ifndef __node_atd__
#define __node_atd__
#include "langtype_atd.h"
namespace simple_langtypes {
			class  Node
			{
			public:
				langtype* l;
				Node* Next;
				Node* Prev;
			};
}
#endif