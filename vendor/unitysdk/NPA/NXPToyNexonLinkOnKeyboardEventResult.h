#pragma once
#include "../unitysdk.h"

#define NPA_NXPTOYNEXONLINKONKEYBOARDEVENTRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BCAE30)

namespace NPA
{
	inline static constexpr unsigned int NXPToyNexonLinkOnKeyboardEventResult_TypeDefinitionIndex = 25625;

	class NXPToyNexonLinkOnKeyboardEventResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYNEXONLINKONKEYBOARDEVENTRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

