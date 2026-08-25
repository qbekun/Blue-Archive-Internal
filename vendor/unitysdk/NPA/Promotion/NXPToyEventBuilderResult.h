#pragma once
#include "../../unitysdk.h"

#define NPA_PROMOTION_NXPTOYEVENTBUILDERRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCC270)

namespace NPA::Promotion
{
	inline static constexpr unsigned int NXPToyEventBuilderResult_TypeDefinitionIndex = 27388;

	class NXPToyEventBuilderResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYEVENTBUILDERRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

