#pragma once
#include "../../unitysdk.h"

#define NPA_PROMOTION_NXPTOYPROMOTIONSHOWCONTENTCLICKRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCC3F0)

namespace NPA::Promotion
{
	inline static constexpr unsigned int NXPToyPromotionShowContentClickResult_TypeDefinitionIndex = 27394;

	class NXPToyPromotionShowContentClickResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYPROMOTIONSHOWCONTENTCLICKRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

