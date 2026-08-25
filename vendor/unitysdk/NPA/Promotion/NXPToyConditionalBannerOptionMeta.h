#pragma once
#include "../../unitysdk.h"

#define NPA_PROMOTION_NXPTOYCONDITIONALBANNEROPTIONMETA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCBFC0)

namespace NPA::Promotion
{
	inline static constexpr unsigned int NXPToyConditionalBannerOptionMeta_TypeDefinitionIndex = 27376;

	class NXPToyConditionalBannerOptionMeta : public Il2CppObject
	{
	public:
		::System::String* fontColor; // 0x10
		::System::String* endDateTime; // 0x18
		::System::String* startDateTime; // 0x20
		::System::Int32 timeZone; // 0x28
		::System::Int32 position; // 0x2C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCONDITIONALBANNEROPTIONMETA_.CTOR_OFFSET))(nullptr);
		}

	};
}

