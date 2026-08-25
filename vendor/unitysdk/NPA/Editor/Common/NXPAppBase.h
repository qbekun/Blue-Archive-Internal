#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Common { class NXPToySystemInfo; }
namespace NPA { class NPCountry; }
namespace NPA { class NPLocale; }
namespace NPA::Editor::Service { class LaunchMode; }

#define NPA_EDITOR_COMMON_NXPAPPBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C42E80)
#define NPA_EDITOR_COMMON_NXPAPPBASE_GETSERVICEKEY_OFFSET UNITYSDK_OFFSET(0x9C42EB0)
#define NPA_EDITOR_COMMON_NXPAPPBASE_SETSERVICEKEY_OFFSET UNITYSDK_OFFSET(0x9C42F00)
#define NPA_EDITOR_COMMON_NXPAPPBASE_SETPACKAGENAME_OFFSET UNITYSDK_OFFSET(0x9C42FF0)
#define NPA_EDITOR_COMMON_NXPAPPBASE_SETCOUNTRY_OFFSET UNITYSDK_OFFSET(0x9C430A0)
#define NPA_EDITOR_COMMON_NXPAPPBASE_GETCOUNTRY_OFFSET UNITYSDK_OFFSET(0x9C43160)
#define NPA_EDITOR_COMMON_NXPAPPBASE_GETCOUNTRYLETTERCODE_OFFSET UNITYSDK_OFFSET(0x9C431F0)
#define NPA_EDITOR_COMMON_NXPAPPBASE_SETLOCALE_OFFSET UNITYSDK_OFFSET(0x9C43270)
#define NPA_EDITOR_COMMON_NXPAPPBASE_GETLOCALE_OFFSET UNITYSDK_OFFSET(0x9C43330)
#define NPA_EDITOR_COMMON_NXPAPPBASE_GETLOCALELETTERCODE_OFFSET UNITYSDK_OFFSET(0x9C433C0)
#define NPA_EDITOR_COMMON_NXPAPPBASE_GETMARKETTYPE_OFFSET UNITYSDK_OFFSET(0x9C43440)
#define NPA_EDITOR_COMMON_NXPAPPBASE_GETSYSTEMINFO_OFFSET UNITYSDK_OFFSET(0x9C43470)
#define NPA_EDITOR_COMMON_NXPAPPBASE_GETEXECUTIONINFO_OFFSET UNITYSDK_OFFSET(0x9C43480)
#define NPA_EDITOR_COMMON_NXPAPPBASE_GETEXECUTIONINFOFROMKEY_OFFSET UNITYSDK_OFFSET(0x9C434C0)
#define NPA_EDITOR_COMMON_NXPAPPBASE_GETLAUNCHMODE_OFFSET UNITYSDK_OFFSET(0x9C43500)

namespace NPA::Editor::Common
{
	inline static constexpr unsigned int NXPAppBase_TypeDefinitionIndex = 26834;

	class NXPAppBase : public Il2CppObject
	{
	public:
		::NPA::Editor::Common::NXPToySystemInfo* systemInfo; // 0x10

		::System::Void .ctor(::NPA::Editor::Common::NXPToySystemInfo* arg)
		{
			((::System::Void(*)(::NPA::Editor::Common::NXPToySystemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPBASE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* GetServiceKey()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPBASE_GETSERVICEKEY_OFFSET))(nullptr);
		}

		::System::Void SetServiceKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPBASE_SETSERVICEKEY_OFFSET))(str, nullptr);
		}

		::System::Void SetPackageName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPBASE_SETPACKAGENAME_OFFSET))(str, nullptr);
		}

		::System::Void SetCountry(::NPA::NPCountry* arg)
		{
			((::System::Void(*)(::NPA::NPCountry*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPBASE_SETCOUNTRY_OFFSET))(arg, nullptr);
		}

		::NPA::NPCountry* GetCountry()
		{
			return (return (::NPA::NPCountry*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPBASE_GETCOUNTRY_OFFSET))(nullptr);
		}

		::System::String* GetCountryLetterCode()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPBASE_GETCOUNTRYLETTERCODE_OFFSET))(nullptr);
		}

		::System::Void SetLocale(::NPA::NPLocale* arg)
		{
			((::System::Void(*)(::NPA::NPLocale*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPBASE_SETLOCALE_OFFSET))(arg, nullptr);
		}

		::NPA::NPLocale* GetLocale()
		{
			return (return (::NPA::NPLocale*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPBASE_GETLOCALE_OFFSET))(nullptr);
		}

		::System::String* GetLocaleLetterCode()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPBASE_GETLOCALELETTERCODE_OFFSET))(nullptr);
		}

		::System::String* GetMarketType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPBASE_GETMARKETTYPE_OFFSET))(nullptr);
		}

		::NPA::Editor::Common::NXPToySystemInfo* GetSystemInfo()
		{
			return (return (::NPA::Editor::Common::NXPToySystemInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPBASE_GETSYSTEMINFO_OFFSET))(nullptr);
		}

		::System::String* GetExecutionInfo()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPBASE_GETEXECUTIONINFO_OFFSET))(nullptr);
		}

		::System::String* GetExecutionInfoFromKey(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPBASE_GETEXECUTIONINFOFROMKEY_OFFSET))(str, nullptr);
		}

		::NPA::Editor::Service::LaunchMode* GetLaunchMode()
		{
			return (return (::NPA::Editor::Service::LaunchMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPBASE_GETLAUNCHMODE_OFFSET))(nullptr);
		}

	};
}

