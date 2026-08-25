#pragma once
#include "../../unitysdk.h"

#define NPA_PROMOTION_NXPTOYBANNERLISTRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCC160)

namespace NPA::Promotion
{
	inline static constexpr unsigned int NXPToyBannerListResult_TypeDefinitionIndex = 27383;

	class NXPToyBannerListResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYBANNERLISTRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

