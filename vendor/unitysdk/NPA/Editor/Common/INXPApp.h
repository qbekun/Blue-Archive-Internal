#pragma once
#include "../../../unitysdk.h"

namespace NPA { class NPCountry; }
namespace NPA { class NPLocale; }
namespace NPA::Editor::Common { class NXPToySystemInfo; }
namespace NPA::Editor::Service { class LaunchMode; }

#define NPA_EDITOR_COMMON_INXPAPP_GETSERVICEKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_COMMON_INXPAPP_SETSERVICEKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_COMMON_INXPAPP_SETPACKAGENAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_COMMON_INXPAPP_SETCOUNTRY_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_COMMON_INXPAPP_GETCOUNTRY_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_COMMON_INXPAPP_GETCOUNTRYLETTERCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_COMMON_INXPAPP_SETLOCALE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_COMMON_INXPAPP_GETLOCALE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_COMMON_INXPAPP_GETLOCALELETTERCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_COMMON_INXPAPP_GETMARKETTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_COMMON_INXPAPP_GETSYSTEMINFO_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_COMMON_INXPAPP_GETEXECUTIONINFO_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_COMMON_INXPAPP_GETEXECUTIONINFOFROMKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_COMMON_INXPAPP_GETLAUNCHMODE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Editor::Common
{
	inline static constexpr unsigned int INXPApp_TypeDefinitionIndex = 26833;

	class INXPApp : public Il2CppObject
	{
	public:
		::System::String* GetServiceKey()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_INXPAPP_GETSERVICEKEY_OFFSET))(nullptr);
		}

		::System::Void SetServiceKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_INXPAPP_SETSERVICEKEY_OFFSET))(str, nullptr);
		}

		::System::Void SetPackageName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_INXPAPP_SETPACKAGENAME_OFFSET))(str, nullptr);
		}

		::System::Void SetCountry(::NPA::NPCountry* arg)
		{
			((::System::Void(*)(::NPA::NPCountry*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_INXPAPP_SETCOUNTRY_OFFSET))(arg, nullptr);
		}

		::NPA::NPCountry* GetCountry()
		{
			return (return (::NPA::NPCountry*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_INXPAPP_GETCOUNTRY_OFFSET))(nullptr);
		}

		::System::String* GetCountryLetterCode()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_INXPAPP_GETCOUNTRYLETTERCODE_OFFSET))(nullptr);
		}

		::System::Void SetLocale(::NPA::NPLocale* arg)
		{
			((::System::Void(*)(::NPA::NPLocale*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_INXPAPP_SETLOCALE_OFFSET))(arg, nullptr);
		}

		::NPA::NPLocale* GetLocale()
		{
			return (return (::NPA::NPLocale*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_INXPAPP_GETLOCALE_OFFSET))(nullptr);
		}

		::System::String* GetLocaleLetterCode()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_INXPAPP_GETLOCALELETTERCODE_OFFSET))(nullptr);
		}

		::System::String* GetMarketType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_INXPAPP_GETMARKETTYPE_OFFSET))(nullptr);
		}

		::NPA::Editor::Common::NXPToySystemInfo* GetSystemInfo()
		{
			return (return (::NPA::Editor::Common::NXPToySystemInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_INXPAPP_GETSYSTEMINFO_OFFSET))(nullptr);
		}

		::System::String* GetExecutionInfo()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_INXPAPP_GETEXECUTIONINFO_OFFSET))(nullptr);
		}

		::System::String* GetExecutionInfoFromKey(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_INXPAPP_GETEXECUTIONINFOFROMKEY_OFFSET))(str, nullptr);
		}

		::NPA::Editor::Service::LaunchMode* GetLaunchMode()
		{
			return (return (::NPA::Editor::Service::LaunchMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_INXPAPP_GETLAUNCHMODE_OFFSET))(nullptr);
		}

	};
}

