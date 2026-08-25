#pragma once
#include "../../unitysdk.h"

namespace NPA::Promotion { class NXPToyConditionalBannerOptionMeta; }

#define NPA_PROMOTION_NXPTOYCONDITIONALBANNEROPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCBFB0)

namespace NPA::Promotion
{
	inline static constexpr unsigned int NXPToyConditionalBannerOption_TypeDefinitionIndex = 27374;

	class NXPToyConditionalBannerOption : public Il2CppObject
	{
	public:
		::System::Int32 optionId; // 0x10
		::System::Int32 type; // 0x14
		::NPA::Promotion::NXPToyConditionalBannerOptionMeta* meta; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCONDITIONALBANNEROPTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

