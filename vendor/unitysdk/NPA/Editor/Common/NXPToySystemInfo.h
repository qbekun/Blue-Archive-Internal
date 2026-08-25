#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Common { class NXPToyClientPlatform; }
namespace NPA::Editor::Common { class NXPToyOS; }
namespace NPA::Editor::Common { class NXPOperatingEnv; }

#define NPA_EDITOR_COMMON_NXPTOYSYSTEMINFO_GET_CLIENTPLATFORM_OFFSET UNITYSDK_OFFSET(0x9C491A0)
#define NPA_EDITOR_COMMON_NXPTOYSYSTEMINFO_SET_CLIENTPLATFORM_OFFSET UNITYSDK_OFFSET(0x9C491B0)
#define NPA_EDITOR_COMMON_NXPTOYSYSTEMINFO_GET_OS_OFFSET UNITYSDK_OFFSET(0x9C491C0)
#define NPA_EDITOR_COMMON_NXPTOYSYSTEMINFO_SET_OS_OFFSET UNITYSDK_OFFSET(0x9C491D0)
#define NPA_EDITOR_COMMON_NXPTOYSYSTEMINFO_GET_OE_OFFSET UNITYSDK_OFFSET(0x9C491E0)
#define NPA_EDITOR_COMMON_NXPTOYSYSTEMINFO_SET_OE_OFFSET UNITYSDK_OFFSET(0x9C491F0)
#define NPA_EDITOR_COMMON_NXPTOYSYSTEMINFO_GET_HWID_OFFSET UNITYSDK_OFFSET(0x9C49200)
#define NPA_EDITOR_COMMON_NXPTOYSYSTEMINFO_SET_HWID_OFFSET UNITYSDK_OFFSET(0x9C49210)
#define NPA_EDITOR_COMMON_NXPTOYSYSTEMINFO_GET_SYSTEMLOCALE_OFFSET UNITYSDK_OFFSET(0x9C49220)
#define NPA_EDITOR_COMMON_NXPTOYSYSTEMINFO_SET_SYSTEMLOCALE_OFFSET UNITYSDK_OFFSET(0x9C49230)
#define NPA_EDITOR_COMMON_NXPTOYSYSTEMINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C436C0)

namespace NPA::Editor::Common
{
	inline static constexpr unsigned int NXPToySystemInfo_TypeDefinitionIndex = 26855;

	class NXPToySystemInfo : public Il2CppObject
	{
	public:
		::NPA::Editor::Common::NXPToyClientPlatform* _ClientPlatform_k__BackingField; // 0x10
		::NPA::Editor::Common::NXPToyOS* _OS_k__BackingField; // 0x14
		::NPA::Editor::Common::NXPOperatingEnv* _Oe_k__BackingField; // 0x18
		::System::String* _HWID_k__BackingField; // 0x20
		::System::String* _SystemLocale_k__BackingField; // 0x28

		::NPA::Editor::Common::NXPToyClientPlatform* get_ClientPlatform()
		{
			return (return (::NPA::Editor::Common::NXPToyClientPlatform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSYSTEMINFO_GET_CLIENTPLATFORM_OFFSET))(nullptr);
		}

		::System::Void set_ClientPlatform(::NPA::Editor::Common::NXPToyClientPlatform* arg)
		{
			((::System::Void(*)(::NPA::Editor::Common::NXPToyClientPlatform*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSYSTEMINFO_SET_CLIENTPLATFORM_OFFSET))(arg, nullptr);
		}

		::NPA::Editor::Common::NXPToyOS* get_OS()
		{
			return (return (::NPA::Editor::Common::NXPToyOS*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSYSTEMINFO_GET_OS_OFFSET))(nullptr);
		}

		::System::Void set_OS(::NPA::Editor::Common::NXPToyOS* arg)
		{
			((::System::Void(*)(::NPA::Editor::Common::NXPToyOS*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSYSTEMINFO_SET_OS_OFFSET))(arg, nullptr);
		}

		::NPA::Editor::Common::NXPOperatingEnv* get_Oe()
		{
			return (return (::NPA::Editor::Common::NXPOperatingEnv*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSYSTEMINFO_GET_OE_OFFSET))(nullptr);
		}

		::System::Void set_Oe(::NPA::Editor::Common::NXPOperatingEnv* arg)
		{
			((::System::Void(*)(::NPA::Editor::Common::NXPOperatingEnv*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSYSTEMINFO_SET_OE_OFFSET))(arg, nullptr);
		}

		::System::String* get_HWID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSYSTEMINFO_GET_HWID_OFFSET))(nullptr);
		}

		::System::Void set_HWID(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSYSTEMINFO_SET_HWID_OFFSET))(str, nullptr);
		}

		::System::String* get_SystemLocale()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSYSTEMINFO_GET_SYSTEMLOCALE_OFFSET))(nullptr);
		}

		::System::Void set_SystemLocale(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSYSTEMINFO_SET_SYSTEMLOCALE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPTOYSYSTEMINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

