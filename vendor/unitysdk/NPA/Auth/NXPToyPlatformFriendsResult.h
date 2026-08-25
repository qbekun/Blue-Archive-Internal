#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYPLATFORMFRIENDSRESULT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9CDCD10)
#define NPA_AUTH_NXPTOYPLATFORMFRIENDSRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDD420)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyPlatformFriendsResult_TypeDefinitionIndex = 27561;

	class NXPToyPlatformFriendsResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYPLATFORMFRIENDSRESULT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYPLATFORMFRIENDSRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

