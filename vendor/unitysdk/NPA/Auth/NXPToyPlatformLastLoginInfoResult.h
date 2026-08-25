#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYPLATFORMLASTLOGININFORESULT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9CDD4A0)
#define NPA_AUTH_NXPTOYPLATFORMLASTLOGININFORESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDD990)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyPlatformLastLoginInfoResult_TypeDefinitionIndex = 27563;

	class NXPToyPlatformLastLoginInfoResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYPLATFORMLASTLOGININFORESULT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYPLATFORMLASTLOGININFORESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

