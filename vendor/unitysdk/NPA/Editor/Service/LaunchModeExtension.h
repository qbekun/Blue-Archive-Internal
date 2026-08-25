#pragma once
#include "../../../unitysdk.h"

namespace NPA::Service { class NXPToyLaunchMode; }
namespace NPA::Editor::Service { class LaunchMode; }

#define NPA_EDITOR_SERVICE_LAUNCHMODEEXTENSION_TOLAUNCHMODE_OFFSET UNITYSDK_OFFSET(0x9BFD880)

namespace NPA::Editor::Service
{
	inline static constexpr unsigned int LaunchModeExtension_TypeDefinitionIndex = 26509;

	class LaunchModeExtension : public Il2CppObject
	{
	public:
		::NPA::Service::NXPToyLaunchMode* ToLaunchMode(::NPA::Editor::Service::LaunchMode* arg)
		{
			return (return (::NPA::Service::NXPToyLaunchMode*(*)(::NPA::Editor::Service::LaunchMode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_LAUNCHMODEEXTENSION_TOLAUNCHMODE_OFFSET))(arg, nullptr);
		}

	};
}

