#pragma once
#include "../../unitysdk.h"

#define MX_SERVICES_PERFORCECLIENTINFO_GETINFOVALUE_OFFSET UNITYSDK_OFFSET(0xEF8B90)
#define MX_SERVICES_PERFORCECLIENTINFO_PRINT_OFFSET UNITYSDK_OFFSET(0xEF8C90)
#define MX_SERVICES_PERFORCECLIENTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF8D00)
#define MX_SERVICES_PERFORCECLIENTINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0xEF8D10)

namespace MX::Services
{
	inline static constexpr unsigned int PerforceClientInfo_TypeDefinitionIndex = 11147;

	class PerforceClientInfo : public Il2CppObject
	{
	public:
		::System::String* UserName; // 0x10
		::System::String* ClientName; // 0x18
		::System::String* ClientHost; // 0x20
		::System::String* ClientRoot; // 0x28
		::System::String* ClientStream; // 0x30
		::System::String* CurrentDirectory; // 0x38

		::System::String* GetInfoValue(::System::String* str, ::System::String* str2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SERVICES_PERFORCECLIENTINFO_GETINFOVALUE_OFFSET))(str, str2, nullptr);
		}

		::System::Void Print()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SERVICES_PERFORCECLIENTINFO_PRINT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SERVICES_PERFORCECLIENTINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SERVICES_PERFORCECLIENTINFO_TOSTRING_OFFSET))(nullptr);
		}

	};
}

