#pragma once
#include "../unitysdk.h"

#define NPA_NXPTOYNEXONLINKONDISCONNECTEDRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BCADB0)

namespace NPA
{
	inline static constexpr unsigned int NXPToyNexonLinkOnDisconnectedResult_TypeDefinitionIndex = 25621;

	class NXPToyNexonLinkOnDisconnectedResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYNEXONLINKONDISCONNECTEDRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

