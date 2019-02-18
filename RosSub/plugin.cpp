#include "plugin.h"
#include "RosSub.h"
#include <cedar/processing/ElementDeclaration.h>

void pluginDeclaration(cedar::aux::PluginDeclarationListPtr plugin)
{
    cedar::proc::ElementDeclarationPtr summation_decl
    (
        new cedar::proc::ElementDeclarationTemplate <RosSub>("Utilities")
    );
    plugin->add(summation_decl);
}
