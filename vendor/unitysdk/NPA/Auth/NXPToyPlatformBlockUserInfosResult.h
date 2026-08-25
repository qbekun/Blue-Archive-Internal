#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYPLATFORMBLOCKUSERINFOSRESULT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9CDC740)
#define NPA_AUTH_NXPTOYPLATFORMBLOCKUSERINFOSRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDCC90)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyPlatformBlockUserInfosResult_TypeDefinitionIndex = 27559;

	class NXPToyPlatformBlockUserInfosResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYPLATFORMBLOCKUSERINFOSRESULT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYPLATFORMBLOCKUSERINFOSRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

