#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYNSRRSPENALTYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD9C30)
#define NPA_AUTH_NXPTOYNSRRSPENALTYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD9C40)
#define NPA_AUTH_NXPTOYNSRRSPENALTYINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9CD9C70)
#define NPA_AUTH_NXPTOYNSRRSPENALTYINFO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9CD9C80)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyNsrrsPenaltyInfo_TypeDefinitionIndex = 27493;

	class NXPToyNsrrsPenaltyInfo : public Il2CppObject
	{
	public:
		::System::String* BLOCK_COUNTRY; // 0x0
		::System::String* BLOCK_PM_BAN; // 0x8
		::System::String* BLOCK_PM_PERIOD; // 0x10
		::System::String* BLOCK_ANONYMOUSIP; // 0x18
		::System::String* BLOCK_PM_PROTECT; // 0x20
		::System::String* penaltyType; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYNSRRSPENALTYINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYNSRRSPENALTYINFO_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYNSRRSPENALTYINFO_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYNSRRSPENALTYINFO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

