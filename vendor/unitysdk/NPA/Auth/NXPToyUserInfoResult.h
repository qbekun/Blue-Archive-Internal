#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYUSERINFORESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDDCA0)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyUserInfoResult_TypeDefinitionIndex = 27574;

	class NXPToyUserInfoResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38
		ExtendedResultSet* extendedResult; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYUSERINFORESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

