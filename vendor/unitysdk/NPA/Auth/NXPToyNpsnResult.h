#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYNPSNRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDC540)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyNpsnResult_TypeDefinitionIndex = 27551;

	class NXPToyNpsnResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYNPSNRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

