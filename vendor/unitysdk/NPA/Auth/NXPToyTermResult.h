#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYTERMRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDDBA0)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyTermResult_TypeDefinitionIndex = 27569;

	class NXPToyTermResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYTERMRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

