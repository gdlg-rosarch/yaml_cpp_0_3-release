#include "yaml-cpp-0.3/parser.h"
#include "yaml-cpp-0.3/contrib/graphbuilder.h"
#include "graphbuilderadapter.h"

namespace YAML
{
  void *BuildGraphOfNextDocument(Parser& parser, GraphBuilderInterface& graphBuilder)
  {
    GraphBuilderAdapter eventHandler(graphBuilder);
    if (parser.HandleNextDocument(eventHandler)) {
      return eventHandler.RootNode();
    } else {
      return NULL;
    }
  }
}
