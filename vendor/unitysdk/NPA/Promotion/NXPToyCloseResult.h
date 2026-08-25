#pragma once
#include "../../unitysdk.h"

#define NPA_PROMOTION_NXPTOYCLOSERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCC1E0)

namespace NPA::Promotion
{
	inline static constexpr unsigned int NXPToyCloseResult_TypeDefinitionIndex = 27384;

	class NXPToyCloseResult : public Il2CppObject
	{
	public:
		::System::String* screenName; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCLOSERESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

