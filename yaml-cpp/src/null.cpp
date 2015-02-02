#include "yaml-cpp-0.3/null.h"
#include "yaml-cpp-0.3/node.h"

namespace YAML
{
	_Null Null;

	bool IsNull(const Node& node)
	{
		return node.Read(Null);
	}
}
