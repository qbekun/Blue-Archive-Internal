#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Service { class NXPToyLaunchMode; }
namespace NPA::Editor::Service { class LaunchMode; }

#define NPA_EDITOR_ANALYTICS_SCHEME_TOY_LAUNCH_CONVERTTOLOGSCHEMEDTYPE_OFFSET UNITYSDK_OFFSET(0x9CC24C0)
#define NPA_EDITOR_ANALYTICS_SCHEME_TOY_LAUNCH_GETDATA_OFFSET UNITYSDK_OFFSET(0x9CC2580)
#define NPA_EDITOR_ANALYTICS_SCHEME_TOY_LAUNCH_GETNAME_OFFSET UNITYSDK_OFFSET(0x9CC2690)
#define NPA_EDITOR_ANALYTICS_SCHEME_TOY_LAUNCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC26C0)
#define NPA_EDITOR_ANALYTICS_SCHEME_TOY_LAUNCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC2700)

namespace NPA::Editor::Analytics::Scheme
{
	inline static constexpr unsigned int TOY_Launch_TypeDefinitionIndex = 27218;

	class TOY_Launch : public Il2CppObject
	{
	public:
		::System::String* launchPlatformType; // 0x10

		::System::String* ConvertToLogSchemedType(::NPA::Service::NXPToyLaunchMode* arg)
		{
			return (return (::System::String*(*)(::NPA::Service::NXPToyLaunchMode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_SCHEME_TOY_LAUNCH_CONVERTTOLOGSCHEMEDTYPE_OFFSET))(arg, nullptr);
		}

		::System::String* GetData()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_SCHEME_TOY_LAUNCH_GETDATA_OFFSET))(nullptr);
		}

		::System::String* GetName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_SCHEME_TOY_LAUNCH_GETNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::NPA::Service::NXPToyLaunchMode* arg)
		{
			((::System::Void(*)(::NPA::Service::NXPToyLaunchMode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_SCHEME_TOY_LAUNCH_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::NPA::Editor::Service::LaunchMode* arg)
		{
			((::System::Void(*)(::NPA::Editor::Service::LaunchMode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_SCHEME_TOY_LAUNCH_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

