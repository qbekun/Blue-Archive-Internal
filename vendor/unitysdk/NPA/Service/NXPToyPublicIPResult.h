#pragma once
#include "../../unitysdk.h"

#define NPA_SERVICE_NXPTOYPUBLICIPRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC60F0)

namespace NPA::Service
{
	inline static constexpr unsigned int NXPToyPublicIPResult_TypeDefinitionIndex = 27320;

	class NXPToyPublicIPResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPTOYPUBLICIPRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

