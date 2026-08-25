#pragma once
#include "../../unitysdk.h"

#define NPA_PROMOTION_NXPTOYDISPLAYPROMOTIONRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCC1F0)

namespace NPA::Promotion
{
	inline static constexpr unsigned int NXPToyDisplayPromotionResult_TypeDefinitionIndex = 27386;

	class NXPToyDisplayPromotionResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYDISPLAYPROMOTIONRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

