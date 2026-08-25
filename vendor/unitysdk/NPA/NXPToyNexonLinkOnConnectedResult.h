#pragma once
#include "../unitysdk.h"

#define NPA_NXPTOYNEXONLINKONCONNECTEDRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BCAD30)

namespace NPA
{
	inline static constexpr unsigned int NXPToyNexonLinkOnConnectedResult_TypeDefinitionIndex = 25619;

	class NXPToyNexonLinkOnConnectedResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYNEXONLINKONCONNECTEDRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

