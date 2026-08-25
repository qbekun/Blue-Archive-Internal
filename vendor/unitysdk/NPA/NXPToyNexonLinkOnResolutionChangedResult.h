#pragma once
#include "../unitysdk.h"

#define NPA_NXPTOYNEXONLINKONRESOLUTIONCHANGEDRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BCB0B0)

namespace NPA
{
	inline static constexpr unsigned int NXPToyNexonLinkOnResolutionChangedResult_TypeDefinitionIndex = 25630;

	class NXPToyNexonLinkOnResolutionChangedResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYNEXONLINKONRESOLUTIONCHANGEDRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

