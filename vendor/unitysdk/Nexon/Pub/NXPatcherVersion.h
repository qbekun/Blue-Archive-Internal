#pragma once
#include "../../unitysdk.h"

namespace Nexon::Pub { class NXPatcherPatch; }
namespace Nexon::Pub { class Response; }

#define NEXON_PUB_NXPATCHERVERSION_GET_LATESTBUILDVERSION_OFFSET UNITYSDK_OFFSET(0x9555C10)
#define NEXON_PUB_NXPATCHERVERSION_SET_LATESTBUILDVERSION_OFFSET UNITYSDK_OFFSET(0x9555C20)
#define NEXON_PUB_NXPATCHERVERSION_GET_LATESTBUILDNUMBER_OFFSET UNITYSDK_OFFSET(0x9555C30)
#define NEXON_PUB_NXPATCHERVERSION_SET_LATESTBUILDNUMBER_OFFSET UNITYSDK_OFFSET(0x9555C40)
#define NEXON_PUB_NXPATCHERVERSION_GET_MINIMUMBUILDVERSION_OFFSET UNITYSDK_OFFSET(0x9555C50)
#define NEXON_PUB_NXPATCHERVERSION_SET_MINIMUMBUILDVERSION_OFFSET UNITYSDK_OFFSET(0x9555C60)
#define NEXON_PUB_NXPATCHERVERSION_GET_MINIMUMBUILDNUMBER_OFFSET UNITYSDK_OFFSET(0x9555C70)
#define NEXON_PUB_NXPATCHERVERSION_SET_MINIMUMBUILDNUMBER_OFFSET UNITYSDK_OFFSET(0x9555C80)
#define NEXON_PUB_NXPATCHERVERSION_GET_PATCH_OFFSET UNITYSDK_OFFSET(0x9555C90)
#define NEXON_PUB_NXPATCHERVERSION_SET_PATCH_OFFSET UNITYSDK_OFFSET(0x9555CA0)
#define NEXON_PUB_NXPATCHERVERSION_INIT_OFFSET UNITYSDK_OFFSET(0x9551210)
#define NEXON_PUB_NXPATCHERVERSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9555CB0)

namespace Nexon::Pub
{
	inline static constexpr unsigned int NXPatcherVersion_TypeDefinitionIndex = 37457;

	class NXPatcherVersion : public Il2CppObject
	{
	public:
		::System::String* latestBuildVersion; // 0x18
		::System::String* latestBuildNumber; // 0x20
		::System::String* minimumBuildVersion; // 0x28
		::System::String* minimumBuildNumber; // 0x30
		::Nexon::Pub::NXPatcherPatch* patch; // 0x38

		::System::String* get_LatestBuildVersion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERVERSION_GET_LATESTBUILDVERSION_OFFSET))(nullptr);
		}

		::System::Void set_LatestBuildVersion(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERVERSION_SET_LATESTBUILDVERSION_OFFSET))(str, nullptr);
		}

		::System::String* get_LatestBuildNumber()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERVERSION_GET_LATESTBUILDNUMBER_OFFSET))(nullptr);
		}

		::System::Void set_LatestBuildNumber(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERVERSION_SET_LATESTBUILDNUMBER_OFFSET))(str, nullptr);
		}

		::System::String* get_MinimumBuildVersion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERVERSION_GET_MINIMUMBUILDVERSION_OFFSET))(nullptr);
		}

		::System::Void set_MinimumBuildVersion(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERVERSION_SET_MINIMUMBUILDVERSION_OFFSET))(str, nullptr);
		}

		::System::String* get_MinimumBuildNumber()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERVERSION_GET_MINIMUMBUILDNUMBER_OFFSET))(nullptr);
		}

		::System::Void set_MinimumBuildNumber(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERVERSION_SET_MINIMUMBUILDNUMBER_OFFSET))(str, nullptr);
		}

		::Nexon::Pub::NXPatcherPatch* get_Patch()
		{
			return (return (::Nexon::Pub::NXPatcherPatch*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERVERSION_GET_PATCH_OFFSET))(nullptr);
		}

		::System::Void set_Patch(::Nexon::Pub::NXPatcherPatch* arg)
		{
			((::System::Void(*)(::Nexon::Pub::NXPatcherPatch*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERVERSION_SET_PATCH_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::Nexon::Pub::Response* arg)
		{
			((::System::Void(*)(::Nexon::Pub::Response*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERVERSION_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERVERSION_.CTOR_OFFSET))(nullptr);
		}

	};
}

