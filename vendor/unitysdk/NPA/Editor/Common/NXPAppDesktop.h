#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Common { class NXPToyLaunchArgs; }
namespace NPA::Editor::Common { class NXPToySystemInfo; }
namespace NPA::Editor::Service { class LaunchMode; }

#define NPA_EDITOR_COMMON_NXPAPPDESKTOP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C43820)
#define NPA_EDITOR_COMMON_NXPAPPDESKTOP_GETLAUNCHMODE_OFFSET UNITYSDK_OFFSET(0x9C44450)
#define NPA_EDITOR_COMMON_NXPAPPDESKTOP_GETEXECUTIONINFO_OFFSET UNITYSDK_OFFSET(0x9C44520)
#define NPA_EDITOR_COMMON_NXPAPPDESKTOP_GETEXECUTIONINFOFROMKEY_OFFSET UNITYSDK_OFFSET(0x9C44550)

namespace NPA::Editor::Common
{
	inline static constexpr unsigned int NXPAppDesktop_TypeDefinitionIndex = 26838;

	class NXPAppDesktop : public Il2CppObject
	{
	public:
		::NPA::Editor::Common::NXPToyLaunchArgs* launchArgs; // 0x18

		::System::Void .ctor(::NPA::Editor::Common::NXPToySystemInfo* arg)
		{
			((::System::Void(*)(::NPA::Editor::Common::NXPToySystemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPDESKTOP_.CTOR_OFFSET))(arg, nullptr);
		}

		::NPA::Editor::Service::LaunchMode* GetLaunchMode()
		{
			return (return (::NPA::Editor::Service::LaunchMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPDESKTOP_GETLAUNCHMODE_OFFSET))(nullptr);
		}

		::System::String* GetExecutionInfo()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPDESKTOP_GETEXECUTIONINFO_OFFSET))(nullptr);
		}

		::System::String* GetExecutionInfoFromKey(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPDESKTOP_GETEXECUTIONINFOFROMKEY_OFFSET))(str, nullptr);
		}

	};
}

