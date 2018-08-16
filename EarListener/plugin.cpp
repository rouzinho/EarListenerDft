#include "plugin.h"
#include "EarSubscriber.h"
#include "Talker.h"
#include <cedar/processing/ElementDeclaration.h>
#include <cedar/processing/CppScriptDeclaration.h>

void pluginDeclaration(cedar::aux::PluginDeclarationListPtr plugin)
{
    cedar::proc::ElementDeclarationPtr summation_decl
    (
        new cedar::proc::ElementDeclarationTemplate <EarSubscriber>("Utilities")
    );
    plugin->add(summation_decl);
    cedar::proc::CppScriptDeclarationPtr ownscript
    (
        new cedar::proc::CppScriptDeclarationTemplate  <Talker>("category")
    );
    plugin->add(ownscript);
}
