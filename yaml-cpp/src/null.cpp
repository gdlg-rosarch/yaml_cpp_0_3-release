#include "yaml-cpp-0.3/null.h"
#include "yaml-cpp-0.3/node.h"

namespace YAML_0_3
{
	_Null Null;

	bool IsNull(const Node& node)
	{
		return node.Read(Null);
	}
}
